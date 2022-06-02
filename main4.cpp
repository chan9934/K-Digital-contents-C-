//#include <iostream>
//#include "employeestruct.h"
//
//using namespace std;
//
////enum PieceType { PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn}; // 아무것도 안쓰면 1,2,3,4 King에 1을 넣으면 1,2,3,4)
//enum PieceType1 { 
//	PieceTypeKing = 1,
//	PieceTypeQueen,
//	PieceTypeRook = 10,
//	PieceTypePawn
//}; //(1,2,10,11)
//
//enum class PieceType {
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//};
//
//enum class PieceType3 : unsigned long {
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//};
//
//int main()
//{
//
//	PieceType1 myPiece = PieceTypeRook;
//	int a = myPiece;
//
//	cout << myPiece << endl;
//
//	PieceType Piece = PieceType::King;
//	// cout << Piece << endl; enum class는 이런식으로 표현이 안된다.
//	//int b = myPiece2; (//정수로 표현x) //Enum Class는 타입을 변경할 수 없다.
//	
//	// 직원 레코드 생성 및 값 채우기
//	Employee anEmployee;
//	anEmployee.firstInitial = 'M';
//	anEmployee.lastInitial = 'G';
//	anEmployee.employeeNumber = 42;
//	anEmployee.salary = 80000;
//	// 직원 레코드에 저장된 값 출력하기
//	cout << "Employee: " << anEmployee. firstInitial << anEmployee. lastInitial << endl;
//	cout << "Number: " << anEmployee. employeeNumber << endl;
//	cout << "Salary: $" << anEmployee. salary << endl;
//	return 0;
//
//
//}