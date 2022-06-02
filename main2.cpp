//#include <iostream>
//
//using namespace std;
//
//namespace myNS1 { int n = 10; } //myNS1을 namespace로 새로 지정 해준것 namespcae를 지정해줘야 :: 사용 가능
//namespace myNS2 { int n = 20; }
//int n = 30; //전역변수 n
//
//
//int main(int argc, char* argv[])
//{
//	int n = 40; //지역변수 n
//
//	cout << myNS1::n << endl; //std::cout가 std에 있는 cout를 쓰는것처럼 myNS1에 있는 n의 값을 쓰겠다
//	cout << myNS2::n << endl;
//	cout << ::n << endl; //전역 공간의 n을 사용 main() 안에것도 제외
//	cout << n << endl;
//
//
//	//이런 경우 N이 4개나 사용되어 보기 힘들다.
//	float myFloat = 3.14f;
//	int i1 = (int)myFloat;// 비추천
//	int i2 = int(myFloat);// 비추천
//	int i3 = static_cast<int>(myFloat);// 정확한 형변환 방법
//	// short 타입의 변수를 long 타입 변수에 대입하면 자동으로 long 타입으로 바뀐다. 반대는 아니다
//
//	
//	double d1 = 1200.;
//	double d2 = 1200.0;
//	double d3 = 12e2;// 12 * (10^2)    12e+2라고 쓸 수 있다. e는 10이라 생각하면 된다
//	double d4 = 1.2e+3; // 1.2 * (10^3) //e랑 +사이에 띄어쓰기 하면 안된다 
//	double d5 = 1000000000000000; // 이런경우를 대비 해서
//	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;
//}