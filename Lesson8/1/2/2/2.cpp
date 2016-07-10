#include "stdafx.h"
#include "iostream"
using namespace std;

void swap_ref(int& x, int& y);

int main()
{
	int num1 = 5;
	int num2 = 10;

	//	cout << "変数numの値は" << num << "です。\n";
	cout << "元データ\n";
	cout << "変数num1の値は" << num1 << "です。\n";
	cout << "変数num2の値は" << num2 << "です。\n";

	swap_ref(num1, num2);

	cout << "変換後データ\n";
	cout << "変数num1の値は" << num1 << "です。\n";
	cout << "変数num2の値は" << num2 << "です。\n";

	int x;
	cin >> x;
	return 0;
}


void swap_ref(int& rx, int& ry) {
	int temp;
	temp = rx;
	rx = ry;
	ry = temp;
}