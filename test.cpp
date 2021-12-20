#include<iostream>
#include<opencv4/opencv2/opencv.hpp>

int main(){
  cv::Mat img;
  img = cv::imread("lena.jpg", cv::IMREAD_COLOR);
  
  if(!img.data){
    std::cout << "Image not found" << std::endl;
    return -1;
  }
  
  cv::imshow("Lena", img);
  cv::waitKey(0);
  cv::destroyAllWindows();
}
