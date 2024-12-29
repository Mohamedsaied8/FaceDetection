#pragma once
#include <iostream>
#include <opencv2/opencv.h>

class FaceDetector
{
    public:
    FaceDetector(int n);
    ~FaceDetector();
    void detectFace(cv::Mat& image, std::vector<cv::Rect>& faces);
    void detectFace(cv::Mat& image, std::vector<cv::Rect>& faces, cv::Mat& faceImage);
    private:
    cv::CascadeClassifier faceDetector;
};
