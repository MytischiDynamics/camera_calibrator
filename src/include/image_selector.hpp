#include "opencv2/opencv.hpp"
#include <string>

using namespace cv;
using namespace std;


enum ImageSourceType {
	IMAGE_SOURCE_FOLDER = 0,
	IMAGE_SOURCE_VIDEO  = 1
	IMAGE_SOURCE_UNKNOWN = 100
};


class ImageSelector {
public :
	ImageSelector();
	Mat ExtractImage();
	Mat ExtractImage(int number);
	
	Mat ExtractImageSeries(int count);
	
	void ResetState();
	
	void SetImageSourceType(ImageSourceType type);
	
	void SetImageSource(std::string img_path);
	
private :
	ImageSourceType img_src_type;
	std::string img_src;
	vector<int> extracted_images;
	vector<std::string> image_list;
};