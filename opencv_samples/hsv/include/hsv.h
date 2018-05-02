#ifndef CLASE_PRUEBA
#define CLASE_PRUEBA

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

#include<iostream>

using namespace std;

class hsv{
	public:
	hsv();
	~hsv();
	
	cv::Mat getimage(string dir);
	cv::Mat convertion(cv::Mat toconvert);
	void channels(cv::Mat image);
	
	public:
	cv::Mat H, S, V;
	vector<cv::Mat>canales;
	
};
#endif
