#include <iostream>
#include <bitset>
#include <string>

using namespace std;

//int main()
//{
//	int Score = { 0 };
//	cin >> Score;
//
//	if (Score >= 90)
//	{
//		cout << "A" << endl;
//	}
//
//	else if (Score >= 80 && 90 > Score)
//	{
//		cout << "B" << endl;
//	}
//	
//	else if (Score >= 70 && 80 > Score)
//	{
//		cout << "C" << endl;
//	}
//
//	else if (Score >= 60 && 70 > Score)
//	{
//		cout << "D" << endl;
//	}
//
//	else if (Score >= 50 && 60 > Score)
//	{
//		cout << "E" << endl;
//	}
//
//	else
//	{
//		cout << "F" << endl;
//	}
//
//	return 0;
//}
//*/
//
//int main() //스위치 구문
//{
//	//{int Score = { 0 };
//	//cin >> Score;
//
//	//Score /= 10;
//
//	//switch (Score)
//	//{
//	//	/*case 10:
//	//		cout << " A " << endl;
//	//		break;
//
//	//	case 9:
//	//		cout << " A " << endl;
//	//		break;*/
//
//	//case 10:
//	//	__fallthrough; // break가 없다는걸 compile에 알려준다.
//
//	//case 9:
//	//	cout << "A" << endl;
//	//	break;
//
//	//case 8:
//	//	cout << " B " << endl;
//	//	break;
//
//	//case 7:
//	//	cout << " C " << endl;
//	//	break;
//
//	//case 6:
//	//	cout << " D " << endl;
//	//	break;
//
//	//case 5:
//	//	cout << " E " << endl;
//	//	break;
//
//	//default:
//	//	cout << " F " << endl;
//	//	break;
//	//}
//
//	//}
//
//	{
//
//		int a = { 0 };
//		int b = { 0 };
//
//			cout << "A is ? ";
//			cin >> a;
//		
//			cout << "B is ? ";
//			cin >> b;
//
//			bool result = { 0 };
//			result = a - b;
//
//			switch (result)
//			{
//			case (true):
//				cout << "true" << endl;
//				break;
//
//			default:
//				cout << "false" << endl;
//				break;
//
//				return 0;
//			}
//
//
//
//	}
//}



//int main()
//{
//	
//
//	int a = { 0 };
//	int b = { 0 };
//	int c = { 0 };
//
//	cout << " A is ? ";
//	cin >> a;
//
//	cout << " B is ? ";
//	cin >> b;
//
//	cout << " C is ? ";
//	cin >> c;
//
//	switch (a + b > c)
//	{
//	case true:
//		cout << "(A + B)가 C보다 큰가? " << endl;
//		cout << "(A + B) 값은 ";
//		cout << a + b << " 이고, ";
//		cout << "C 값은 " << c << "이므로 " << "(A+B) 값이 더 큽니다!";
//
//		break;
//
//	default:
//		cout << "(A + B)가 C보다 큰가? " << endl;
//		cout << "(A + B) 값은 ";
//		cout << a + b << " 이고, ";
//		cout << "C 값은 " << c << "이므로 " << "C 값이 더 큽니다!";
//		break;
//	}
//
//}

//{
//	int Colorprint = { 0 };
//	cin >> Colorprint;
//	cout << " 이면 ";
//
//	switch (Colorprint)
//	{
//	case 1:
//		cout << "Red 출력" << endl;
//		break;
//
//	case 2:
//		cout << "Blue 출력" << endl;
//		break;
//
//	case 3:
//		cout << "Black 출력" << endl;
//		break;
//
//	default:
//		cout << "White 출력" << endl;
//		break;
//	}
//}
//
//int main()
//{
//	int a = { 0 };
//	cin >> a;
//
//	
//
//	if (1000000 <= a && 9999999 > a)
//	{
//		a /= 1000000;
//		switch (a)
//		{
//		case 1:
//			__fallthrough;
//		case 3:
//			cout << "남자" << endl;
//			break;	
//
//		case 2:
//			__fallthrough;
//		case 4:
//			cout << "여자" << endl;
//			break;
//		defulat :
//			cout << "외계인" << endl;
//			break;
//		}
//
//	}
//
//	else
//		cout << "외계인";
//}