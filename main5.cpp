//
//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//	{
//		int a = 10;
//		int b = 0;
//		//b = a++; -> b는 처음에 10 a--; b는 처음에 10
//		b = ++a; // --a b는 9
//
//
//		cout << "a=" << a << "b = " << b << endl;
//	} // 괄호를 사용하여 for 문이나 if 문처럼 cord block 처럼 사용 할 수 있다.
//
//	{
//	
//		int a = 10;
//		int b = -5;
//		bool result = false;
//		result = (a > b) ? true : false; // 비교하는 구문을 논리연산자라 한다.
//		result = (a == b) ? true : false; 
//		result = (a > 0 && b > 0) ? true : false;
//		result = (a > 0 || b > 0) ? true : false;
//		result = (a < 0 && --b > 0) ? true : false; // &&는 왼쪽에서 오른쪽으로 간다, 왼쪽부터 false면 오른쪽은 할 필요가 없어져, 오른쪽 연산이 true인지 false인지 알 수 없다. 이를 단락논리 (축약 논리)라고 한다.
//		cout << "result = " << boolalpha << result << noboolalpha << " b= " << b << endl; // --b면 -6이 되야하지만 a<0가 이미 false이므로 b의 계산이 안됐다 
//		result = !(a > 0) ? true : false;
//
//		cout << "result = " << boolalpha << result << " b= " << b << endl; 
//	}
//
//	{ // 비트 연산자
//		int num = 10; //int 4byte니깐 32bit
//		cout << "2진수 표기 : " << bitset<32>(num) << endl;
//		cout << "8진수 표기 : " << oct << num << endl;
//		cout << "10진수 표기 : " << dec << num << endl;
//		cout << "16진수 표기 : " << hex << num << endl;
//
//		// & = 비트 단위 and 연산
//		// | = 비트 단위 or 연산
//
//		int x = 0x35; // 16 진법
//		int y = 0xf0;
//
//		cout << "x = " << bitset<8>(x) << endl;
//		cout << "y = " << bitset<8>(y) << endl;
//		cout << "x & y = " << bitset<8>(x & y) << endl;
//		cout << "x | y = " << bitset<8>(x | y) << endl;
//		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // 배타적 논리 합 xor
//		cout << "~ x = " << bitset<8>(~x) << endl; //not
//
//		int x1 = x << 2;
//		cout << "x1 = " << bitset<8>(x1) << endl;
//		cout << " x = " << x << " x1 = " << x1 << endl;
//
//		char cx = 0b10010100; // char은 문자를 사용하지만 2byte
//		cout << " cx = " << bitset<8>(cx) << endl;
//		cx = cx >> 2; // char은 8bit까지라서 8번째의 숫자가 오른쪽으로 이동할 떄 맨 앞에 있는 비트(8번째의 비트)를 복사하여 이동한다.
//		cout << " cx = " << bitset<8>(cx) << endl;
//	}
//
//	
//	{
//		// 형 변환
//		// 암묵적 형변환
//		int intvar = 7;
//		double doublevar = 1.5;
//		float floatvar = 3.7f;
//
//		/*intvar = doublevar;
//		floatvar = intvar;*/
//
//		// 자료형 우선 순위
//		// char -> int -> long -> float -> double -> long double  (오른쪽이 더 우선)
//
//		intvar = doublevar + intvar * floatvar;
//		//                        float
//		//       doublevar + ( float)
//		//               double
//		//intvar =       double
//		//                 int
//		cout << "intvar : " << intvar << endl; // 27
//	}
//	{
//		//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함
//		//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함 (더무겁다)
//		//reinterpret_cast : 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함 (강제로 바꾼다. 잘안쓴다)
//		//const_cast : const 지정을 일시 해제함 (잘 안쓴다)
//
//		double d = 10.5;
//		int a = static_cast<int>(d);
//
//
//	}
//
//	return 0;
//}
