find_package(OpenCV REQUIRED
    COMPONENTS
        core
        imgproc
        highgui # For cv::imwrite
)

add_executable(cv main.cpp)
target_include_directories(cv PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(cv ${OpenCV_LIBS})

