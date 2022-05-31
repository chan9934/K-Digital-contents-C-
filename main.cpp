#include <iostream> 
// iostream을 포함한다, iostream은 C++의 표준 라이브러리, 그렇기 때문에 <>를 사용, 우리가 따로 지정한 헤더 파일을 include 할 떄는 ""
// 전처리 실행시 #

int main( int argc, char* argv[]) 
// int main은 시작할 때 필요한 커맨드 값 지정, argc (매개 변수) (갯수만) argv(argc가 5개면 argv는 6개 (0번이 프로그램 이름이기 때문에)) 나중에 할듯
{
	

	int value = 0; //value가 변수 int는 변수의 타입
	int a1(0); //또다른 초기화 방법
	int a2 = { 0 }; // *이게 최신
	int a3{ 0 }; // *이게 최신

	

	int value1; //음수와 양수를 둘다 표기 할 수 있는 정수형, 기본이 signed int인데 생략 돼서 표현 된것.
	signed int value2; //음수와 양수 둘다
	unsigned int value3; //양수만
	float value4; //소수점
	char c1 = 'A';// 문자열 하나만 그럴땐 작은 따옴표'   ' 문자열은 못 들어가기 때문
	c1 = '\101'; //유니코드로 변경 10진수
	c1 = '\x41'; //16진수 유니코드 'A' 이런 경우는 전문적으로 데이터 용량을 줄이기 위해 사용 지금 공부의 과정에서 중요하지는 않다.

	value1 = 0b1001011; //0b는 binary 2진법
	value1 = 0123; //앞에 0만 붙이면 8진법
	value1 = 0x9f; //앞에 0x를 붙이면 16진법

	

	std::cout << "Hello, world" << std::endl;
	std::cout << "There are " << value1 << " ways" << std::endl;
	std::cout << "I love you" << std::endl;
	std::cout << "A\nBC\nDEF\nGH" << std::endl;

	std::cin >> value1; //입력 스트림

	//std::cout << "Hello, World" << std::endl; std는 라이브러리에 있는 용어
	//std::cout << "There are " << 219 << " ways\n I love you." << std::endl; // \n 문장 사이에 넣어도 상관 없다. \n은 반드시 소문자로

	return 0; //없어도 된다. 하지만 기본적으로 필요
}
//컴파일 하고 링크까지 하는 전과정을 빌드라고 한다
//솔루션 빌드 F7  -> 솔루션 안에 있는 .CPP들을 다 빌드 해준다
//솔루션 다시 빌드 ->  빌드 했던 것들을 지우고 다시 빌드 해준다
//프로젝트 이름 빌드 -> 프로젝트 별 빌드 가능
//COMPILE (ctrl + F7)->해당 cpp 하나만 빌드
//Debug와 release의 차이점 : 개발 하면서 눈으로 확인 할 수 있는것 Debug, 유저들에게 배포 할 때 최적화를 위해(동작하는 부분만) Release

//  \n \r \t \\ \*
// \n std::cout << "There are " << 219 << " ways\n I love you." << std::endl; 
// 변수
