#include "stdafx.h"
#include "iostream"
using namespace std;

void swap_ref(int& x, int& y);

int main()
{
	int num1 = 5;
	int num2 = 10;

	//	cout << "�ϐ�num�̒l��" << num << "�ł��B\n";
	cout << "���f�[�^\n";
	cout << "�ϐ�num1�̒l��" << num1 << "�ł��B\n";
	cout << "�ϐ�num2�̒l��" << num2 << "�ł��B\n";

	swap_ref(num1, num2);

	cout << "�ϊ���f�[�^\n";
	cout << "�ϐ�num1�̒l��" << num1 << "�ł��B\n";
	cout << "�ϐ�num2�̒l��" << num2 << "�ł��B\n";

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