//#include <iostream>
//#include <array>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//
//	{
//		// �迭���� �޸𸮴� �������̴�,
//		int myArray[5] = { 0 };
//		myArray[0] = 1;
//		myArray[1] = 2;
//		myArray[2] = 3;
//		myArray[3] = 4;
//		myArray[4] = 5;
//		//myArray[5] <- 0���� ������ �ؼ� 5�� ���������Ƿ� ����.
//
//		//*(myArray + 0) = 10; //myArray[0]
//		//*(myArray + 1) = 10; //
//
//		int myArray1[] = { 1, 2, 3, 4 }; //�迭 4���� �����ȴ�.
//		//int myArray1[]{ 1, 2, 3, 4 }; 
//		//int myArray1[5]{ 1, 2, 3 }; // ������ 4,5�� 0���� �ʱ�ȭ
//
//		int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} }; //2���� ��� 4���� ���� ����
//		/*
//		*  1 2 3 4
//		*  5 6 7 8
//		*/
//	}
//
//	{
//
//		array<int, 3> arr = { 1,2,3 }; // = int myArray[3] = { 0 }; // include <array>
//		int arraySize = arr.size(); // array ���̺귯�� Ȱ���ϴ°� �� ����.
//		arr[0] = 1;
//
//		//auto [a1, a2, a3] = arr; // arr[0] = a1; arr[1] = a1; arr[2] = a1;
//
//		vector<int> myVector = { 11, 22 }; // ���� �� �߰� �ϰ� ���� ��.
//		myVector.push_back(33);
//		myVector.push_back(44);
//	}
//
//	{
//		//myVector�� ��� ���� ���� ���� ����غ���.
//
//		vector<int> myVector = { 11, 22 ,33 };
//
//		int sum{ 0 };
//
//		for (int i{ 0 }; i < myVector.size(); i++)
//		{
//			sum += myVector[i]; // i ? 0 ~ 2
//		}
//		cout << "sum = " << sum << endl;
//
//	}
//
//	{
//		vector<int> myVector = { 11, 22 ,33 };
//
//		int sum{ 0 };
//
//		for (int i : myVector) // myVector �� �ִ°� �� �Ѵ�.
//		{
//			sum += i; // i ? 11, 22 ,33
//		}
//
//
//
//	}
//	{
//		vector<int> myVector = { 11, 22, 33 };
//
//
//		int sum{ 0 };
//
//
//		for (auto i = myVector.begin(); i < myVector.end(); i++)
//		{
//			sum += *i; // i? ������ ������ �ּҰ�, *�� �ּ� �ȿ� �ִ� ���� �б�����
//		}
//
//
//	}
//	{
//		vector<int> myVector = { 11, 22 ,33 };
//
//		int sum{ 0 };
//		//myVector�� ��� ���� 1�� ���غ��� 11, 22, 33 -> 12, 23 ,34
//		for (int i = 0; i < myVector.size(); ++i)
//		{
//			myVector[i] ++;
//			cout << "myVector[" << i << "] = " << myVector[i] << endl;
//		}
//
//
//	}
//
//	{
//		int myArray[3] = { 11, 22, 33 };
//		//myArray�� ��� ���� 1�� ���غ���  11, 22, 33 -> 12, 23 ,34
//
//		cout << myArray[1] << endl;
//		for (int& i : myArray)
//		{
//			i++;
//
//			cout << i << endl;
//		}
//	}
//
//
//	{
//		vector<int> myVector = { 11, 22, 33 };
//
//		int vectorSize = myVector.size();
//		cout << "VectorSize = " << vectorSize << endl;
//		int sum = 0;
//
//		int i = 0;
//		while (i < 3)
//		{
//			sum += myVector[i];
//			i++;
//		}
//
//		cout << sum << endl;
//		
//		sum = 0;
//		i = 0;
//
//		do 
//		{
//			sum += myVector[i];
//			i++;
//
//		}
//		
//		while (i > 3); // do while�� do�� �տ� �ֱ⿡ ������ �ѹ��� ���´�.
//
//		cout << sum << endl;
//
//
//
//
//	}
//
//	{
//		int selection = 0;
//
//		do
//		{
//			system("cls"); // �� �� ��� ���� �������.
//			cout << "What do you like? " << endl;
//			cout << "1) Red" << endl;
//			cout << "2) Blue" << endl;
//			cout << "3) Black" << endl;
//			cout << "4) White" << endl;
//			
//			cin >> selection;
//
//		}
//
//		while (!(4 >= selection && selection > 0));
//			
//
//		cout << "Yoou like " << selection << endl;
//
//	}
//	{
//		do
//		{
//			system("cls");
//			int a, b{ 0 };
//
//			cout << "put number [A B] : " << endl;
//			cin >> a >> b; // a ���� ���� �� b ������.
//
//			
//			cout << "A+B = " << a + b << endl;
//			cout << "Quit?(Y/N) : ";
//			char q = ' ';
//			cin >> q;
//			if (q == 'Y')
//			{
//				break;
//			}	
//		}
//
//		while (1);
//
//
//
//	}
//
//
//	return 0;
//}
