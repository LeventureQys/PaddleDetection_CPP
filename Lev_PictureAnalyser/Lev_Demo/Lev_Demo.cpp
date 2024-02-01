// Lev_Demo.cpp: 定义应用程序的入口点。
//

#include "Lev_Demo.h"
#include "Lev_PictureAnalyser.h"
#include "Leventure_ModelInfer.h"
#include <filesystem>
namespace fs = std::filesystem;


int main()
{

	std::vector<std::string> vec_imgs = { "J:\\TrainDataSet\\coco\\val\\7_1.jpeg" };
	ObjDetector obj;
	obj.model_dir = std::string("E:\\Leventure\\WorkShop\\Python\\PaddleDetection\\pdparams\\yolov3_mobilenet_v1_270e_coco");

	std::cout << vec_imgs[0] << "\n" << obj.model_dir << endl;

	Lev_ModelInfer item;

	std::cout << " Start" << endl;
	item.PredictImage_(vec_imgs, 1, 1, false, obj, "E:\\temop");
	std::cout << "End" << endl;
	std::cout << add(1, 2) << endl;
	std::cout << Lev_PictureManager::isImageFileExtend("jpeg");
	return 0;
}
