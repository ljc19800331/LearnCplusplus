// Created by maguangshen on 8/19/18.
// opencv testing code

#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;

int opencv_test(char** argv)
{
    cv::Mat image;
    image = cv::imread("/home/maguangshen/CLionProjects/Program_1/test.png" , CV_LOAD_IMAGE_COLOR);

    if(! image.data ) {
        std::cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE );
    cv::imshow( "Display window", image );
    cv::waitKey(0);
    return 0;
}