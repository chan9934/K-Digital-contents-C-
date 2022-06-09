#include <iostream>

using namespace std;

struct SalesRec 
{ // 62Byte
	char pID[10]; // 10Byte
	int dYear, dMonth, dData; // 3 * 4 Byte 
	char deliverAddr[40]; // 40Byte

};

struct TimeRec
{
	int hours;
	int minutes;
	int seconds;
};
//{
//	//배열에 각배열 번호의 값을 넣어주고 전부 합한 값을 반환
//	double GetArraySum(double arr[], int n);
//	void printSum(double sum);
//
//	// 분산 구하기
//	double variance(double arr[], int n);
//
//	// 두개의수를 서로 바꾸기
//	void SwapValues(int& x, int& y);
//
//	void PrSalesRec(SalesRec & srec);
//
	//시간 t1에 t2를 더한다.
	/*void AddTime(TimeRec & t1, const TimeRec & t2);*/
//	//시간 t1에 minutes 분을 더한다.
	void AddTime(TimeRec & t1, const int& minutes, const int& seconds);
//}

int main()
{
	//{
	//	//double a[50], b[100];
	//	//double sum = 0;


	//	//sum = GetArraySum(a, 50);

	//	//printSum(sum);

	//	//sum = GetArraySum(b, 100);

	//	//cout << "Sum = " << sum << endl;

	//	//return 0;
	//}
	//{
	//	int a, b{ 0 };
	//	cout << "두개의 수를 입력하세요 : ";
	//	cin >> a >> b;
	//	SwapValues(a, b);
	//	cout << "a = " << a << " b = " << b << endl;
	//}
	//SalesRec stRec; // stRec 함수는 62Byte를 차지한다.  int num
	//strcpy_s(stRec.pID, "123456789"); // 오른족 문자열이 왼쪽 변수에 복사가 된다. (string 배우기전에 c언어로 한번 써본것)
	//stRec.dYear = 2022;
	//stRec.dMonth = 6;
	//stRec.dData = 8;
	//strcpy_s(stRec.deliverAddr, "경기도 부천");
	//PrSalesRec(stRec); // 62Byte + 62Byte
	{
		TimeRec time1 = { 2, 20, 20 };
		TimeRec time2 = { 1, 55, 40 };

		/*cout << time1.hours << "시간 " << time1.minutes << "분  " << time1.seconds << "초 + ";
		cout << time2.hours << "시간 " << time2.minutes << "분  " << time2.seconds << "초 = ";
		AddTime(time1, time2);
		cout << time1.hours << "시간 " << time1.minutes << "분" << time1.seconds << "초" << endl;*/

		int a{ 0 };
		int b{ 0 };
		
		cin >> a >> b;
		cout << time1.hours << "시간 " << time1.minutes << "분  " << time1.seconds << "초 + ";
		cout << a << "분  " << b << "초 = ";
		AddTime(time1, a, b);
		cout << time1.hours << "시간 " << time1.minutes << "분" << time1.seconds << "초" << endl;  //Addtime 이라 함수이름은 같지만 안의 타입 차이때문에 컴파일러시 알아서 구분 해준다,

		/*void func(int a, int b);
		int func(int a, int b); 하지만 반환값은 틀리면 안된다 */

	}

}

// 배열에 각 배열 번호의 값을 넣어 주고 전부 합한 값을 반환

double GetArraySum(double arr[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; ++i)
	{
		arr[i] = i;
		sum += arr[i];
	}

	return sum;

}

void printSum(double sum)
{

	cout << "Sum = " << sum << endl;
}

// 분산 구하기
double variance(double arr[], int n)
{
	double sum = 0, sqSum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		sqSum += arr[i] * arr[i];
	}

	double result = sqSum / n - sum / (n * n);
	return result;
}

void SwapValues(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
	
}

void PrSalesRec(SalesRec &srec) // 64비트 CPU면 8Byte
{
	cout << "품목코드 : " << srec.pID << endl;
	cout << "품목코드 : " << srec.dYear << "년 " << endl;
	cout << srec.dMonth << "월 "<< srec.dData << "일" << endl;
	cout << "배달주소 : " << srec.deliverAddr << endl;
}

//void AddTime(TimeRec& t1, const TimeRec& t2 )
//{
//	t1.seconds += t2.seconds;
//	t1.minutes += t2.minutes +(t1.seconds / 60);
//	t1.hours += t2.hours + (t1.minutes / 60);
//	t1.minutes %= 60;
//	t1.seconds %= 60;
//	
//
//}

void AddTime(TimeRec& t1, const int& minutes, const int& seconds)
{
	t1.seconds += seconds;
	t1.minutes += minutes + t1.seconds / 60;
	t1.hours += t1.minutes / 60;
	t1.minutes %= 60;
	t1.seconds %= 60;

}