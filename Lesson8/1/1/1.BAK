#include "stdafx.h"
#include "iostream"
using namespace std;

void miss_swap(int x, int y);
void swap(int* x, int* y);

int main()
{
	int num1 = 5;
	int num2 = 10;
	int num3 = 15;
	int num4 = 20;

	//	cout << "変数numの値は" << num << "です。\n";
	cout << "元データ\n";
	cout << "変数num1の値は" << num1 << "です。\n";
	cout << "変数num2の値は" << num2 << "です。\n";
	cout << "変数num3の値は" << num3 << "です。\n";
	cout << "変数num4の値は" << num4 << "です。\n";

	miss_swap(num1, num2);
	swap(&num3, &num4);

	cout << "変換後データ\n";
	cout << "変数num1の値は" << num1 << "です。\n";
	cout << "変数num2の値は" << num2 << "です。\n";
	cout << "変数num3の値は" << num3 << "です。\n";
	cout << "変数num4の値は" << num4 << "です。\n";

	int x;
	cin >> x;
    return 0;
}

void miss_swap(int x ,int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap(int* px, int* py) {
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}