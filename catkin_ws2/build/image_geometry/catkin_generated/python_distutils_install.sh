#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ctai/catkin_ws2/src/vision_opencv/image_geometry"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ctai/catkin_ws2/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ctai/catkin_ws2/install/lib/python2.7/dist-packages:/home/ctai/catkin_ws2/build/image_geometry/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ctai/catkin_ws2/build/image_geometry" \
    "/usr/bin/python" \
    "/home/ctai/catkin_ws2/src/vision_opencv/image_geometry/setup.py" \
    build --build-base "/home/ctai/catkin_ws2/build/image_geometry" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ctai/catkin_ws2/install" --install-scripts="/home/ctai/catkin_ws2/install/bin"
