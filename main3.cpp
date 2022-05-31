/*
#include <iostream>

using namespace std;

constexpr int fac(int n) { //compile�ϱ����� ������ ����

	return n > 1 ? n * fac(n - 1) : 1; // n�� 1���� ũ�� �տ��� �ƴϸ� �ڿ��� ���� ������ n!


}

int main()
{

	unsigned int x = 4294967295; //unsigned�� ����� ǥ���ϴϱ� int �� ������ -y ~ +y ��� 0 ~ 2y�� �ȴ�
	cout << "x = " << x << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;


	cout << fac(3) << endl;

	someInteger ++; // 257 ++ ǥ���� ���� 1�� ���ϴ� ���� ������
	someInteger *= 2; // 514 
	someShort = static_cast <short> (someInteger); // 514
	someLong = someShort * 10000; //514e^4
	someFloat = someLong + 0.785f; //5140000.785 (Float�� ���е��� 7�ڸ� ���ۿ� �ȳ��´� �Ҽ��� ����)
	someDouble = static_cast <double> (someFloat) / 100000; //51.4 (double�� ���е��� 15�ڸ� ���ۿ� �ȳ��´� �Ҽ��� ����)
	cout << someDouble << endl;
	cout << 514e+4 << endl;

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "SecondNum : ";
	cin >> secondNum;
	cout << "firstNum + secondNum = " << firstNum + secondNum << endl;
	cout << "firstNum * secondNum = " << firstNum * secondNum << endl;
	cout << "firstNum / secondNum = " << firstNum / secondNum << endl;
	cout << "firstNum % secondNum = " << firstNum % secondNum << endl;

	const int a = 0; // const�� ����� ������ �ȵȴ�.
	constexpr int b = fac(4); 
	int c = fac(4);

	return 0;


}
*/