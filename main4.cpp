//#include <iostream>
//#include "employeestruct.h"
//
//using namespace std;
//
////enum PieceType { PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn}; // �ƹ��͵� �Ⱦ��� 1,2,3,4 King�� 1�� ������ 1,2,3,4)
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
//	// cout << Piece << endl; enum class�� �̷������� ǥ���� �ȵȴ�.
//	//int b = myPiece2; (//������ ǥ��x) //Enum Class�� Ÿ���� ������ �� ����.
//	
//	// ���� ���ڵ� ���� �� �� ä���
//	Employee anEmployee;
//	anEmployee.firstInitial = 'M';
//	anEmployee.lastInitial = 'G';
//	anEmployee.employeeNumber = 42;
//	anEmployee.salary = 80000;
//	// ���� ���ڵ忡 ����� �� ����ϱ�
//	cout << "Employee: " << anEmployee. firstInitial << anEmployee. lastInitial << endl;
//	cout << "Number: " << anEmployee. employeeNumber << endl;
//	cout << "Salary: $" << anEmployee. salary << endl;
//	return 0;
//
//
//}