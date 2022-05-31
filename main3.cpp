/*
#include <iostream>

using namespace std;

constexpr int fac(int n) { //compile하기전에 연산이 들어간다

	return n > 1 ? n * fac(n - 1) : 1; // n이 1보다 크면 앞에꺼 아니면 뒤에꺼 삼항 연산자 n!


}

int main()
{

	unsigned int x = 4294967295; //unsigned는 양수만 표기하니깐 int 의 범위가 -y ~ +y 라면 0 ~ 2y로 된다
	cout << "x = " << x << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;


	cout << fac(3) << endl;

	someInteger ++; // 257 ++ 표현식 값에 1을 더하는 단항 연산자
	someInteger *= 2; // 514 
	someShort = static_cast <short> (someInteger); // 514
	someLong = someShort * 10000; //514e^4
	someFloat = someLong + 0.785f; //5140000.785 (Float은 정밀도가 7자리 수밖에 안나온다 소숫점 포함)
	someDouble = static_cast <double> (someFloat) / 100000; //51.4 (double은 정밀도가 15자리 수밖에 안나온다 소숫점 포함)
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

	const int a = 0; // const는 상수라 변경이 안된다.
	constexpr int b = fac(4); 
	int c = fac(4);

	return 0;


}
*/