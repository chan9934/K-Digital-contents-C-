//
//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//	{
//		int a = 10;
//		int b = 0;
//		//b = a++; -> b�� ó���� 10 a--; b�� ó���� 10
//		b = ++a; // --a b�� 9
//
//
//		cout << "a=" << a << "b = " << b << endl;
//	} // ��ȣ�� ����Ͽ� for ���̳� if ��ó�� cord block ó�� ��� �� �� �ִ�.
//
//	{
//	
//		int a = 10;
//		int b = -5;
//		bool result = false;
//		result = (a > b) ? true : false; // ���ϴ� ������ �������ڶ� �Ѵ�.
//		result = (a == b) ? true : false; 
//		result = (a > 0 && b > 0) ? true : false;
//		result = (a > 0 || b > 0) ? true : false;
//		result = (a < 0 && --b > 0) ? true : false; // &&�� ���ʿ��� ���������� ����, ���ʺ��� false�� �������� �� �ʿ䰡 ������, ������ ������ true���� false���� �� �� ����. �̸� �ܶ��� (��� ��)��� �Ѵ�.
//		cout << "result = " << boolalpha << result << noboolalpha << " b= " << b << endl; // --b�� -6�� �Ǿ������� a<0�� �̹� false�̹Ƿ� b�� ����� �ȵƴ� 
//		result = !(a > 0) ? true : false;
//
//		cout << "result = " << boolalpha << result << " b= " << b << endl; 
//	}
//
//	{ // ��Ʈ ������
//		int num = 10; //int 4byte�ϱ� 32bit
//		cout << "2���� ǥ�� : " << bitset<32>(num) << endl;
//		cout << "8���� ǥ�� : " << oct << num << endl;
//		cout << "10���� ǥ�� : " << dec << num << endl;
//		cout << "16���� ǥ�� : " << hex << num << endl;
//
//		// & = ��Ʈ ���� and ����
//		// | = ��Ʈ ���� or ����
//
//		int x = 0x35; // 16 ����
//		int y = 0xf0;
//
//		cout << "x = " << bitset<8>(x) << endl;
//		cout << "y = " << bitset<8>(y) << endl;
//		cout << "x & y = " << bitset<8>(x & y) << endl;
//		cout << "x | y = " << bitset<8>(x | y) << endl;
//		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // ��Ÿ�� �� �� xor
//		cout << "~ x = " << bitset<8>(~x) << endl; //not
//
//		int x1 = x << 2;
//		cout << "x1 = " << bitset<8>(x1) << endl;
//		cout << " x = " << x << " x1 = " << x1 << endl;
//
//		char cx = 0b10010100; // char�� ���ڸ� ��������� 2byte
//		cout << " cx = " << bitset<8>(cx) << endl;
//		cx = cx >> 2; // char�� 8bit������ 8��°�� ���ڰ� ���������� �̵��� �� �� �տ� �ִ� ��Ʈ(8��°�� ��Ʈ)�� �����Ͽ� �̵��Ѵ�.
//		cout << " cx = " << bitset<8>(cx) << endl;
//	}
//
//	
//	{
//		// �� ��ȯ
//		// �Ϲ��� ����ȯ
//		int intvar = 7;
//		double doublevar = 1.5;
//		float floatvar = 3.7f;
//
//		/*intvar = doublevar;
//		floatvar = intvar;*/
//
//		// �ڷ��� �켱 ����
//		// char -> int -> long -> float -> double -> long double  (�������� �� �켱)
//
//		intvar = doublevar + intvar * floatvar;
//		//                        float
//		//       doublevar + ( float)
//		//               double
//		//intvar =       double
//		//                 int
//		cout << "intvar : " << intvar << endl; // 27
//	}
//	{
//		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��
//		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������ (�����̴�)
//		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ�� (������ �ٲ۴�. �߾Ⱦ���)
//		//const_cast : const ������ �Ͻ� ������ (�� �Ⱦ���)
//
//		double d = 10.5;
//		int a = static_cast<int>(d);
//
//
//	}
//
//	return 0;
//}
