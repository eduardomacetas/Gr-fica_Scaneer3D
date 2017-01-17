#ifndef RECOGNITION_H
#define RECOGNITION_H
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
#include <utility>
#include <math.h>
#include <fstream>

using namespace std;
using namespace cv;

class recognition
{
public:
    int iLowH, iHighH;
    int iLowS, iHighS;
    int iLowV, iHighV;
    float theta, rotation;
    vector<vector<int > > pointCloud;
public:
    recognition();
    void init();
    void trackBar();
    void recog();
    void triangulation(int x, int y, int &_X, int &_Z);
    void getMediaPoints(vector<vector<Point> > contours, map<int,int> &mPoints);
    void saveObj();
};

#endif // RECOGNITION_H
