#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;

cv::Mat function(){ //Esta es una funcion que crea una imagen
cv::Mat ima(500,500,CV_8U,50);
return ima; // la funcion de vuelve la imagen creada en tipo de datos de opencv mat
}

int main(){
	cv::namedWindow("Image 1"); //Definir las ventanas de las imagenes
	cv::namedWindow("Image 2");
	cv::namedWindow("Image 3");
	cv::namedWindow("Image 4");
	cv::namedWindow("Image 5");
	cv::namedWindow("Image");
	
	cv::Mat image1(240,320,CV_8U,100); // imagen nueva de 240 filas y 500 columnas
	
	cv::imshow("Image", image1); //show the image
	cv::waitKey(0);
	
	image1.create(200,200,CV_8U);
	image1=200;
	
	cv::imshow("Image", image1);
	cv::waitKey(0);
	
	cv::Mat image2(240,320,CV_8UC3,cv::Scalar(0,0,255));
	
	cv::imshow("Image",image2);
	cv::waitKey(0);
	
	cv::Mat image3=cv::imread("ups.png");
	
	cv::Mat image4(image3); // Copiar una imagen forma 1
	image1=image3; //Copiar una imagen forma 2
	image3.copyTo(image2); //copiar una imagen forma 3
	cv::Mat image5=image3.clone(); //copiar una imagen forma 4
	cv::flip(image3,image3,1);
	
	cv::imshow("Image 3", image3);
	cv::imshow("Image 1", image1);
	cv::imshow("Image 2", image2);
	cv::imshow("Image 4", image4);
	cv::imshow("Image 5", image5);
	cv::waitKey(0);
	
	//get a gray level image from a function
	cv::Mat gray=function();
	
	cv::imshow("Image",gray);
	cv::waitKey(0);
	
	image1=cv::imread("ups.png",CV_LOAD_IMAGE_GRAYSCALE);
	image1.convertTo(image2,CV_32F,1/255.0,0.0);
	
	cv::imshow("Image",image2);
	cv::waitKey(0);
	
	return 0;
}
