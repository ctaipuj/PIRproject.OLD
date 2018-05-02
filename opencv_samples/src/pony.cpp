#include "histograma.h"

int main(int argc,char**argv){

	if(argc!=2){
		cout<<"<Image_Path> not defined\n";
		return -1;
	}
	
	histograma h;
	
	cv::Mat image=cv::imread(argv[1]);
	cv::Mat gray;
	vector<cv::Mat> canales;
	cv::split(image,canales);
	cv::imshow("b",canales[0]);
	cv::imshow("g",canales[1]);
	cv::imshow("r",canales[2]);
	cv::Mat red;
	cv::Mat blurred1;
	cv::GaussianBlur(canales[2],blurred1,cv::Size(7,7),0);
	cv::Mat redinv;
	cv::threshold(blurred1,red,100,255,CV_THRESH_BINARY);
	cv::bitwise_not(red,redinv);
	cv::imshow("redsegmented",redinv);
	cv::Mat sum;
	cv::add(redinv,canales[2],sum);
	cv::imshow("S",sum);
	
	cv::cvtColor(image,gray,CV_BGR2GRAY);
	cv::imshow("gray",gray);
	cv::Mat blurred;
	cv::GaussianBlur(gray,blurred,cv::Size(7,7),0);
	cv::Mat segimage;
	cv::threshold(blurred,segimage,40,200,CV_THRESH_BINARY_INV);
	cv::imshow("seg",segimage);
	h.showhisto(canales[2],-1);
		
	cv::waitKey(0);
	return 0;
}