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
//int main() //����ġ ����
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
//	//	__fallthrough; // break�� ���ٴ°� compile�� �˷��ش�.
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
//		cout << "(A + B)�� C���� ū��? " << endl;
//		cout << "(A + B) ���� ";
//		cout << a + b << " �̰�, ";
//		cout << "C ���� " << c << "�̹Ƿ� " << "(A+B) ���� �� Ů�ϴ�!";
//
//		break;
//
//	default:
//		cout << "(A + B)�� C���� ū��? " << endl;
//		cout << "(A + B) ���� ";
//		cout << a + b << " �̰�, ";
//		cout << "C ���� " << c << "�̹Ƿ� " << "C ���� �� Ů�ϴ�!";
//		break;
//	}
//
//}

//{
//	int Colorprint = { 0 };
//	cin >> Colorprint;
//	cout << " �̸� ";
//
//	switch (Colorprint)
//	{
//	case 1:
//		cout << "Red ���" << endl;
//		break;
//
//	case 2:
//		cout << "Blue ���" << endl;
//		break;
//
//	case 3:
//		cout << "Black ���" << endl;
//		break;
//
//	default:
//		cout << "White ���" << endl;
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
//			cout << "����" << endl;
//			break;	
//
//		case 2:
//			__fallthrough;
//		case 4:
//			cout << "����" << endl;
//			break;
//		defulat :
//			cout << "�ܰ���" << endl;
//			break;
//		}
//
//	}
//
//	else
//		cout << "�ܰ���";
//}