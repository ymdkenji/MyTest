#include "pch.h"
#include "opencv2/opencv.hpp"

using namespace std;

int main(int argh, char* argv[])
{
	cv::VideoCapture cap;
	cap.open(0);

	if (!cap.isOpened())
	{
		//読み込み失敗
		return -1;
	}

	cv::Mat frame;

	/*
	char ky = 'r';

	while (ky == 'r') {
		cap.read(frame);
		cv::imshow("win", frame);

		cout << "OK?  O key: OK / R key: Retry / Q key: Quit" << endl << ">";
		cin >> ky;

		if (ky == 'o') {
			cv::imwrite("img.png", frame);
		}
 	}
	*/
	
	cout << "Press on picture window -> [S]Key: Save / [Q]Key: Quit" << endl;

	while (cap.read(frame))
	{
		//
		//取得したフレーム画像に対する処理
		//

		cv::imshow("view", frame);

		const int key = cv::waitKey(100);

		if (key == 'q')
		{
			break;
		}
		else if (key == 's')
		{
			cv::imwrite("img.png", frame);
			break;
		}
	}
	
	cv::destroyAllWindows();

	cout << "完了" << endl;

	return 0;
}