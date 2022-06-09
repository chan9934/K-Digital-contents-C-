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
//		// 배열형의 메모리는 연속적이다,
//		int myArray[5] = { 0 };
//		myArray[0] = 1;
//		myArray[1] = 2;
//		myArray[2] = 3;
//		myArray[3] = 4;
//		myArray[4] = 5;
//		//myArray[5] <- 0부터 시작을 해서 5개 생성했으므로 없다.
//
//		//*(myArray + 0) = 10; //myArray[0]
//		//*(myArray + 1) = 10; //
//
//		int myArray1[] = { 1, 2, 3, 4 }; //배열 4개가 생성된다.
//		//int myArray1[]{ 1, 2, 3, 4 }; 
//		//int myArray1[5]{ 1, 2, 3 }; // 나머지 4,5는 0으로 초기화
//
//		int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} }; //2개의 행과 4개의 열을 지정
//		/*
//		*  1 2 3 4
//		*  5 6 7 8
//		*/
//	}
//
//	{
//
//		array<int, 3> arr = { 1,2,3 }; // = int myArray[3] = { 0 }; // include <array>
//		int arraySize = arr.size(); // array 라이브러리 활용하는게 더 좋다.
//		arr[0] = 1;
//
//		//auto [a1, a2, a3] = arr; // arr[0] = a1; arr[1] = a1; arr[2] = a1;
//
//		vector<int> myVector = { 11, 22 }; // 값을 더 추가 하고 싶을 때.
//		myVector.push_back(33);
//		myVector.push_back(44);
//	}
//
//	{
//		//myVector에 모든 값을 더한 값을 출력해보자.
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
//		for (int i : myVector) // myVector 에 있는걸 다 한다.
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
//			sum += *i; // i? 각각의 원소의 주소값, *는 주소 안에 있는 값을 읽기위해
//		}
//
//
//	}
//	{
//		vector<int> myVector = { 11, 22 ,33 };
//
//		int sum{ 0 };
//		//myVector에 모든 값에 1씩 더해보자 11, 22, 33 -> 12, 23 ,34
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
//		//myArray에 모든 값에 1씩 더해보자  11, 22, 33 -> 12, 23 ,34
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
//		while (i > 3); // do while은 do가 앞에 있기에 무조건 한번은 나온다.
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
//			system("cls"); // 그 전 출력 값이 사라진다.
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
//			cin >> a >> b; // a 쓰고 띄어쓰기 후 b 누른다.
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
