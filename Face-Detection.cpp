#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>



using namespace std;
using namespace cv;



void main() {

	VideoCapture cap(0);
	Mat img;
	CascadeClassifier faceCascade;
	faceCascade.load("Resources/haarcascade_frontalface_default.xml");

	//to identify whether the file is loaded successfully porperly if it's not loaded properly then it will popup an error-------
	if (faceCascade.empty()) { cout << "XML file not loaded" << endl; }
	//---------------------------------------------------------------------------------------------------------------------------

	//Now after checking we are ready to detect faces
	//To detect the faces and to store them we need to store bounding boxes(max surface area coverd) to store bounding boxes we need vectors

	vector<Rect> faces;	

	/*imshow("Image", img);
	waitKey(0);*/
	while (true) {
		cap.read(img);
		faceCascade.detectMultiScale(img, faces, 1.1, 10);//If the face got detected here we won't be able to know that becuase we aren't displaying anything here
		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255));
		}
		imshow("webcam", img);
		waitKey(1);
	}
}