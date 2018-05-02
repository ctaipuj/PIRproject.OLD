#include "hsv.h"

using namespace std;


int main(){	
	string photo="../../cv/test2.tiff";
	hsv im;
	//im.getimage(photo);
	im.channels(im.convertion(im.getimage(photo)));
	
	cv::namedWindow("H",CV_WINDOW_NORMAL);
	cv::namedWindow("S",CV_WINDOW_NORMAL);
	cv::namedWindow("V",CV_WINDOW_NORMAL);
	cv::namedWindow("HSV",CV_WINDOW_NORMAL);
		
	cv::imshow("H",im.canales[0]);
	cv::imshow("S",im.canales[1]);
	cv::imshow("V",im.canales[2]);
	cv::imshow("HSV",im.convertion(im.getimage(photo)));
	
	while(1){
	cv::waitKey(20);
	}
	return 0;
}
