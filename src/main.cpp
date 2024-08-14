#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
    Mat image = imread("C:/1.jpg");
    imshow("image show", image);
    waitKey(0);

    return 0;
}
