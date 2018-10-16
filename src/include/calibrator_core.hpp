#include "opencv2/opencv.hpp"
#include <vector>


using namespace std;
using namespace cv;

class CameraCalibrator {
public :
	CameraCalibrator();
	
	
private :
	vector<Mat> calibration_images;
};