#include "histograma.h" // header de la clase que cree


int main(int argc,char** argv){

	if ( argc != 2 )
    {
        cout<<"<Image_Path> not defined\n"; //Incluir los argumentos al momento de abrir la pagina
        return -1;
    }
    
    cv::Mat image=cv::imread(argv[1]); // siempre la matriz image carga la imagen
    cv::Mat imageblurred;
    cv::GaussianBlur(image,imageblurred,cv::Size(31,31),0);
    cv::Mat hsv;
    cv::Mat blancos=cv::Mat::zeros(cv::Size(image.size()),CV_8U);
    
    cv::cvtColor(imageblurred,hsv,CV_BGR2HSV);
    //cv::imshow("hsv",hsv);
    vector<cv::Mat> canaleshsv;
    cv::split(hsv,canaleshsv);
    
    cv::Mat maskblue;
    cv::Mat maskgreen;
    cv::Mat maskred;
    cv::Mat maskvalue;
    cv::Mat masksaturation;
    cv::Mat maskwhite;
    
    cv::MatIterator_<cv::Vec3b> it=hsv.begin<cv::Vec3b> ();
    cv::MatIterator_<cv::Vec3b> itend=hsv.end<cv::Vec3b> ();
    
    cv::MatIterator_<uchar> itb=blancos.begin<uchar> ();
    
    while(it!=itend){
    		if((*it)[1]<25 && (*it)[2]>133){
    			
    			*itb=255;
    			++it;
    			++itb;
    		}
    		else{
    		++it;
    		++itb;
    		}
    }
       
    
    cv::Mat lut(1,256,CV_8U); //rojos
	for (int i=0;i<256;i++){
		if(i<33 || i>130){
		lut.at<uchar>(i)=255;
	}else{
		lut.at<uchar>(i)=0;
	}
	}
	
	cv::LUT(canaleshsv[0],lut,maskred);
	
	// cv::Mat lut(1,256,CV_8U); //azules
	for (int i=0;i<256;i++){
		if(i>95 && i<130){
		lut.at<uchar>(i)=255;
	}else{
		lut.at<uchar>(i)=0;
	}
	}
	
	cv::LUT(canaleshsv[0],lut,maskblue);
	
	 //cv::Mat lut(1,256,CV_8U); //Verde
	for (int i=0;i<256;i++){
		if(i>43 && i<88){
		lut.at<uchar>(i)=255;
	}else{
		lut.at<uchar>(i)=0;
	}
	}
	//cv::imshow("wfgwh",canales[0]);
	cv::LUT(canaleshsv[0],lut,maskgreen);
	
		//saturation
	for (int i=0;i<256;i++){
		if(i>15&&i<40 || i>230){//90){//140
		lut.at<uchar>(i)=255;
	}else{
		lut.at<uchar>(i)=0;
	}
	}
	
	cv::LUT(canaleshsv[1],lut,masksaturation);
	
	 //cv::Mat lut(1,256,CV_8U); //Value
	for (int i=0;i<256;i++){
		if(i>90&&i<144){//144){//235){//90){//140
		lut.at<uchar>(i)=255;
	}else{
		lut.at<uchar>(i)=0;
	}
	}
	
	cv::LUT(canaleshsv[2],lut,maskvalue);
	//cv::dilate(maskvalue,maskvalue,cv::Mat(),cv::Point(-1,-1),3);

	cv::Mat temp;
	cv::Mat temp_with_depth;
	cv::Mat segmented;
	
	
	//cv::LUT(canaleshsv[0],lut,segmented);
	cv::imshow("r",maskred);
	cv::imshow("a",maskblue);
	cv::imshow("v",maskgreen);
	cv::imshow("va",maskvalue);
	cv::imshow("S",masksaturation);
	
	
	cv::dilate(blancos,blancos,cv::Mat(),cv::Point(-1,-1),6);
	cv::imshow("blancos",blancos);
	 cv::bitwise_not(blancos,maskwhite);	
	 cv::imshow("w",maskwhite);
	cv::dilate(maskgreen,maskgreen,cv::Mat(),cv::Point(-1,-1),4);
	cv::Mat fusion; 
	
	cv::Mat verdes;
	cv::bitwise_and(maskgreen,maskvalue,verdes);
	
	
	
    cv::bitwise_not(maskgreen,maskgreen);
    cv::Mat bottles;
    cv::bitwise_or(maskred,maskblue,bottles);
    cv::Mat colors;
    cv::bitwise_and(maskvalue,bottles,colors);
    cv::bitwise_and(colors,maskwhite,temp);
   
    
	cv::bitwise_and(temp,maskgreen,fusion);
    cv::Mat edges;
    cv::morphologyEx(fusion,edges,cv::MORPH_GRADIENT,cv::Mat()); //usar operacion gradiente para hallar bordes*/
	
	cv::imshow("vhf",verdes);
	






























	
    
    vector<vector<cv::Point> > contornos;//Vector de vectores donde se almacenan los contornos  
    
    cv::findContours(edges,contornos,CV_RETR_EXTERNAL,CV_CHAIN_APPROX_SIMPLE); //encontrar contornos, solo externos, sin jerarquias
    
    vector<cv::Rect> rectangulos(contornos.size()); //Vector de rectangulos
    vector<vector<cv::Point> >::iterator itc= contornos.begin();//Iterador para los n contornos hallados
    vector<double> areas(contornos.size());
    
    for (int i=0;i<areas.size();i++){
    
    		areas[i]=cv::contourArea(contornos[i]);
    	}
    
    int cmin= 86;  //contorno minimo  
	int cmax=1000; // 360; // 1000 contorno maximo
	
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
    
       
    cv::waitKey(0);
    return 0;    
}
