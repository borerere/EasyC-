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

	//	cout << "�ϐ�num�̒l��" << num << "�ł��B\n";
	cout << "���f�[�^\n";
	cout << "�ϐ�num1�̒l��" << num1 << "�ł��B\n";
	cout << "�ϐ�num2�̒l��" << num2 << "�ł��B\n";
	cout << "�ϐ�num3�̒l��" << num3 << "�ł��B\n";
	cout << "�ϐ�num4�̒l��" << num4 << "�ł��B\n";

	miss_swap(num1, num2);
	swap(&num3, &num4);

	cout << "�ϊ���f�[�^\n";
	cout << "�ϐ�num1�̒l��" << num1 << "�ł��B\n";
	cout << "�ϐ�num2�̒l��" << num2 << "�ł��B\n";
	cout << "�ϐ�num3�̒l��" << num3 << "�ł��B\n";
	cout << "�ϐ�num4�̒l��" << num4 << "�ł��B\n";

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