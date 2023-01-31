﻿#include <iostream>
using namespace std;

class Box {
public:
	float width, height, depth;

	Box(float width, float height, float depth)
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	float GetVolume()
	{
		return width * height * depth;
	}
	float GetSurface()
	{
		return (width * height + height * depth + depth * width) * 2;
	}
};

int main()
{
	Box textBox = { 2, 10, 30 };
	float width, height, depth;
	cout << "幅を入力" << endl;
	cin >> width;
	cout << "高さを入力" << endl;
	cin >> height;
	cout << "奥行きを入力" << endl;
	cin >> depth;
	Box* box = new Box(width, height, depth);
	cout << "表面積" << box->GetSurface() << endl;
	cout << "体積 " << box->GetVolume() << endl;;
	return 0;
}