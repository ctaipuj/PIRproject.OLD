#include"hsv.h"

using namespace std;

hsv::hsv(){
	//ini variables
}

hsv::~hsv(){}

cv::Mat hsv::getimage(string dir){
	
	cv::Mat pic=cv::imread(dir);
	return pic;
}

cv::Mat hsv::convertion(cv::Mat toconvert){

	cv::Mat imagehsv;
	cvtColor(toconvert,imagehsv,CV_RGB2HSV);
	return imagehsv;
}

void hsv::channels(cv::Mat image){

	cv::split(image,canales);
}	
