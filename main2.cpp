//#include <iostream>
//
//using namespace std;
//
//namespace myNS1 { int n = 10; } //myNS1�� namespace�� ���� ���� ���ذ� namespcae�� ��������� :: ��� ����
//namespace myNS2 { int n = 20; }
//int n = 30; //�������� n
//
//
//int main(int argc, char* argv[])
//{
//	int n = 40; //�������� n
//
//	cout << myNS1::n << endl; //std::cout�� std�� �ִ� cout�� ���°�ó�� myNS1�� �ִ� n�� ���� ���ڴ�
//	cout << myNS2::n << endl;
//	cout << ::n << endl; //���� ������ n�� ��� main() �ȿ��͵� ����
//	cout << n << endl;
//
//
//	//�̷� ��� N�� 4���� ���Ǿ� ���� �����.
//	float myFloat = 3.14f;
//	int i1 = (int)myFloat;// ����õ
//	int i2 = int(myFloat);// ����õ
//	int i3 = static_cast<int>(myFloat);// ��Ȯ�� ����ȯ ���
//	// short Ÿ���� ������ long Ÿ�� ������ �����ϸ� �ڵ����� long Ÿ������ �ٲ��. �ݴ�� �ƴϴ�
//
//	
//	double d1 = 1200.;
//	double d2 = 1200.0;
//	double d3 = 12e2;// 12 * (10^2)    12e+2��� �� �� �ִ�. e�� 10�̶� �����ϸ� �ȴ�
//	double d4 = 1.2e+3; // 1.2 * (10^3) //e�� +���̿� ���� �ϸ� �ȵȴ� 
//	double d5 = 1000000000000000; // �̷���츦 ��� �ؼ�
//	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;
//}