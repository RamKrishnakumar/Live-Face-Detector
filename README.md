# Live-Face-Detector
Creating Live Face Detector using OpenCV

Installation of OPENCV Windows
Step1. Go to https://github.com/opencv/opencv and download the Lastest Release
       Extract it Anyweher you want to extract 
       In My case C:\Users\vk560\Documents\
Step2. Add bin folder to the Environment Variables path
       In My case : C:\Users\vk560\Documents\opencv\build\x64\vc15\bin
       Restart Computer
Step3. Clone Repositry using Visual Studio 2019 .
Step4. Set the platform target to x64
       Add Directories by going to Project-Properties-Configuration Properties-
             VC++ Directories
                1. Add Build Directories: D:\opencv\build\include
                2. Add Library Directories: D:\opencv\build\x64\vc15\lib
             Linker Input 
                3. Add Linker input: opencv_world450d.lib
                   d for debug without d for release

In this project what I try to do is detecting faces on a live camera. To detect face here I use voila jones method of haar cascades, here I used already trained model XML file named frontalface_default.xml

Here in the project <opencv2/objdetect.hpp> header file which allow to with haar cascading
1. Capturing martrix of images using camera 
2. loading the pre-trained model xml file into project.
3. created vector data type to store faces
4. using for loop , for every face i have drawn rectangle around the faces using contures
5. imshow function used to show the output in window.
