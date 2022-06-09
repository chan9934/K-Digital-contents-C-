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
//	//�迭�� ���迭 ��ȣ�� ���� �־��ְ� ���� ���� ���� ��ȯ
//	double GetArraySum(double arr[], int n);
//	void printSum(double sum);
//
//	// �л� ���ϱ�
//	double variance(double arr[], int n);
//
//	// �ΰ��Ǽ��� ���� �ٲٱ�
//	void SwapValues(int& x, int& y);
//
//	void PrSalesRec(SalesRec & srec);
//
	//�ð� t1�� t2�� ���Ѵ�.
	/*void AddTime(TimeRec & t1, const TimeRec & t2);*/
//	//�ð� t1�� minutes ���� ���Ѵ�.
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
	//	cout << "�ΰ��� ���� �Է��ϼ��� : ";
	//	cin >> a >> b;
	//	SwapValues(a, b);
	//	cout << "a = " << a << " b = " << b << endl;
	//}
	//SalesRec stRec; // stRec �Լ��� 62Byte�� �����Ѵ�.  int num
	//strcpy_s(stRec.pID, "123456789"); // ������ ���ڿ��� ���� ������ ���簡 �ȴ�. (string �������� c���� �ѹ� �ẻ��)
	//stRec.dYear = 2022;
	//stRec.dMonth = 6;
	//stRec.dData = 8;
	//strcpy_s(stRec.deliverAddr, "��⵵ ��õ");
	//PrSalesRec(stRec); // 62Byte + 62Byte
	{
		TimeRec time1 = { 2, 20, 20 };
		TimeRec time2 = { 1, 55, 40 };

		/*cout << time1.hours << "�ð� " << time1.minutes << "��  " << time1.seconds << "�� + ";
		cout << time2.hours << "�ð� " << time2.minutes << "��  " << time2.seconds << "�� = ";
		AddTime(time1, time2);
		cout << time1.hours << "�ð� " << time1.minutes << "��" << time1.seconds << "��" << endl;*/

		int a{ 0 };
		int b{ 0 };
		
		cin >> a >> b;
		cout << time1.hours << "�ð� " << time1.minutes << "��  " << time1.seconds << "�� + ";
		cout << a << "��  " << b << "�� = ";
		AddTime(time1, a, b);
		cout << time1.hours << "�ð� " << time1.minutes << "��" << time1.seconds << "��" << endl;  //Addtime �̶� �Լ��̸��� ������ ���� Ÿ�� ���̶����� �����Ϸ��� �˾Ƽ� ���� ���ش�,

		/*void func(int a, int b);
		int func(int a, int b); ������ ��ȯ���� Ʋ���� �ȵȴ� */

	}

}

// �迭�� �� �迭 ��ȣ�� ���� �־� �ְ� ���� ���� ���� ��ȯ

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

// �л� ���ϱ�
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

void PrSalesRec(SalesRec &srec) // 64��Ʈ CPU�� 8Byte
{
	cout << "ǰ���ڵ� : " << srec.pID << endl;
	cout << "ǰ���ڵ� : " << srec.dYear << "�� " << endl;
	cout << srec.dMonth << "�� "<< srec.dData << "��" << endl;
	cout << "����ּ� : " << srec.deliverAddr << endl;
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