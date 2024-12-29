#include <opencv2/opencv.h>

int main()
{
    // Create a window
    cv::namedWindow("Example Window", cv::WINDOW_NORMAL);
    cv::imshow("Example Window", cv::Mat::zeros(480, 640));
    while(1)
    {
        
    }
    return 0;
}