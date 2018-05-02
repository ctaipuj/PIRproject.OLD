#include "histograma.h" // header de la clase que cree


int main(int argc,char** argv){

	if ( argc != 2 )
    {
        cout<<"<Image_Path> not defined\n"; //Incluir los argumentos al momento de abrir la pagina
        return -1;
    }
    
    cv::Mat image=cv::imread(argv[1]); // simepre la matriz image carga la imagen
    
    cv::Mat hsvfiltered;
    cv::imshow("imagen",image);
    cv::GaussianBlur(image,hsvfiltered,cv::Size(31,31),0);
    cv::Mat ycc;
    cv::Mat hsv;
    cv::Mat mascararoja;
    cv::cvtColor(hsvfiltered,hsv,CV_BGR2HSV);
    vector<cv::Mat> canaleshsv;
    split(hsv,canaleshsv);
    
    cv::Mat lower_red;
    cv::Mat upper_red;
    cv::inRange(hsv, cv::Scalar(0, 0, 100), cv::Scalar(10, 255, 255), lower_red);
    cv::inRange(hsv, cv::Scalar(125, 0, 100), cv::Scalar(179, 255, 255), upper_red);
    cv::Mat red;//= lower_red | upper_red;
    
    cv::Mat lut(1,256,CV_8U);
	for (int i=0;i<256;i++){
		if(i<10){//i<10 || (i>160 && i<179)){
		lut.at<uchar>(i)=255;
	}else{
		lut.at<uchar>(i)=0;
	}
	}
	cv::Mat segmented;
	cv::LUT(canaleshsv[1],lut,red);
	
    cv::imshow("redd",red);
    
/*
    cv::cvtColor(image,ycc,cv::COLOR_BGR2YCrCb);
    cv::imshow("ycc",ycc);
    cv::imshow("hsv",hsv);
    vector<cv::Mat> canales; //separar las imagenes por canales 
    cv::split(image,canales); // separar los canales
    //histograma h;//objeto de la clase para generar histogramas
    cv::imshow("Rojo",canales[2]); // muestra el canal verde de la imagen
    //cv::imwrite("../hist.tiff",h.getHistogramImage(canales[2],2));//Guardar el histograma de interes
    cv::Mat red; //canal rojo
    cv::Mat redblurred; //canal rojo blurreado
    cv::GaussianBlur(canales[2],redblurred,cv::Size(31,31),0);//filtro gaussiano con sus parametros
    //h.showhisto(blurred,2);
    //cv::imshow("b",blurred);// roja blurreada
    //cv::Mat reda;
    //cv::threshold(blurred,reda,220,0,CV_THRESH_TOZERO_INV);
    cv::threshold(redblurred,red,70,255,CV_THRESH_BINARY);	
    cv::imshow("red",red);//fin);
    
    
    cv::imshow("Azul",canales[0]);
    cv::Mat blue;
    cv::Mat blueblurred;
    cv::Mat blueseg;
    cv::GaussianBlur(canales[0],blueblurred,cv::Size(15,15),0); //filtro gaussiano canal azul
    cv::threshold(blueblurred,blueseg,144,255,CV_THRESH_BINARY); //segmentar azul
    cv::imshow("blue segmented",blueseg);
    
    cv::imshow("verde",canales[1]);//canal verde mostrar
    cv::Mat verde;
    cv::Mat verdeblurred;
    cv::Mat verdeseg;
    cv::GaussianBlur(canales[1],verdeblurred,cv::Size(15,15),0);//filtro gaussiano sobre el verde
    cv::imshow("verde",verdeblurred);
    cv::threshold(verdeblurred,verdeseg,150,255,CV_THRESH_BINARY);//segementar
    cv::imshow("Verde segmentada",verdeseg);
    
    //cv::Mat bluea;
    //cv::threshold(blueblurred,bluea,220,0,CV_THRESH_TOZERO_INV);
    
    cv::Mat fusion; 
    cv::bitwise_or(blueseg,red,fusion);// o verde o rojo
    cv::Mat edges;
    cv::morphologyEx(fusion,edges,cv::MORPH_GRADIENT,cv::Mat()); //usar operacion gradiente para hallar bordes
    
    
    vector<vector<cv::Point> > contornos;//Vector de vectores donde se almacenan los contornos  
    
    cv::findContours(edges,contornos,CV_RETR_EXTERNAL,CV_CHAIN_APPROX_SIMPLE); //encontrar contornos, solo externos, sin jerarquias
    
    vector<cv::Rect> rectangulos(contornos.size()); //Vector de rectangulos
    vector<vector<cv::Point> >::iterator itc= contornos.begin();//Iterador para los n contornos hallados
    
    int cmin= 83;  //contorno minimo
	int cmax=1000;// 360; // 1000 contorno maximo
	
	while (itc!=contornos.end()) { //mientras hayan contornos

		if (itc->size() < cmin || itc->size() > cmax)//eliminar los menores o los mayores
			itc= contornos.erase(itc); //Eliminar contornos que no se ajusten a las medidas correspondientes
		else 
			++itc;//si se ajuste evalue el siguiente
	}

    for(int i=0;i<contornos.size();i++){ //for que dibuja rectangulos
   		rectangulos[i]=cv::boundingRect(contornos[i]); //alamcenar en la posicion i del rectangulo el rectangulo mas pequeño que encierre el contorno
   		cout<<rectangulos[i]<<"\n"; //Imprima los rectangulos solo para probar
   		cv::rectangle(image,rectangulos[i],cv::Scalar(37,94,247),1); //dibuje rectangulos en la imagen original de color naranja
   		
    }
	
	itc=contornos.begin();//resetear el contador de nuevo al inicio
	
	//CAMBIAR ESTE WHILE POR UN FOR QUE SUME EN i
    while(itc!=contornos.end()){ //mientras no llegue al final del vector de los contornos
    
    		cv::Moments mom=cv::moments(cv::Mat(*itc++)); //calcule todos los momentos del contorno
    		cv::circle(image,cv::Point(mom.m10/mom.m00,mom.m01/mom.m00),2,cv::Scalar(255,0,255),4); //dibuje un circulo en el centro de masa x=m10/m00 y y=m01/m00
    		cout<<cv::Point(mom.m10/mom.m00,mom.m01/mom.m00)<<"\n"; // Imprima los centros de masa solo para probar
   }
    cv::imshow("edges",edges); // borde hallados con el gradiente
    cv::imshow("f",fusion); // fusion de los canales segmentados
    cv::imshow("Segmentada",image); // rectangulos sobre la imagen original
    */
       
    cv::waitKey(0);
    return 0;    
}
