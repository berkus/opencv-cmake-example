#include <string>
#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image;
    std::string image_path;
    cv::imwrite(image_path, image);
}
