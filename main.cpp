#include <iostream> 
// iostream�� �����Ѵ�, iostream�� C++�� ǥ�� ���̺귯��, �׷��� ������ <>�� ���, �츮�� ���� ������ ��� ������ include �� ���� ""
// ��ó�� ����� #

int main( int argc, char* argv[]) 
// int main�� ������ �� �ʿ��� Ŀ�ǵ� �� ����, argc (�Ű� ����) (������) argv(argc�� 5���� argv�� 6�� (0���� ���α׷� �̸��̱� ������)) ���߿� �ҵ�
{
	

	int value = 0; //value�� ���� int�� ������ Ÿ��
	int a1(0); //�Ǵٸ� �ʱ�ȭ ���
	int a2 = { 0 }; // *�̰� �ֽ�
	int a3{ 0 }; // *�̰� �ֽ�

	

	int value1; //������ ����� �Ѵ� ǥ�� �� �� �ִ� ������, �⺻�� signed int�ε� ���� �ż� ǥ�� �Ȱ�.
	signed int value2; //������ ��� �Ѵ�
	unsigned int value3; //�����
	float value4; //�Ҽ���
	char c1 = 'A';// ���ڿ� �ϳ��� �׷��� ���� ����ǥ'   ' ���ڿ��� �� ���� ����
	c1 = '\101'; //�����ڵ�� ���� 10����
	c1 = '\x41'; //16���� �����ڵ� 'A' �̷� ���� ���������� ������ �뷮�� ���̱� ���� ��� ���� ������ �������� �߿������� �ʴ�.

	value1 = 0b1001011; //0b�� binary 2����
	value1 = 0123; //�տ� 0�� ���̸� 8����
	value1 = 0x9f; //�տ� 0x�� ���̸� 16����

	

	std::cout << "Hello, world" << std::endl;
	std::cout << "There are " << value1 << " ways" << std::endl;
	std::cout << "I love you" << std::endl;
	std::cout << "A\nBC\nDEF\nGH" << std::endl;

	std::cin >> value1; //�Է� ��Ʈ��

	//std::cout << "Hello, World" << std::endl; std�� ���̺귯���� �ִ� ���
	//std::cout << "There are " << 219 << " ways\n I love you." << std::endl; // \n ���� ���̿� �־ ��� ����. \n�� �ݵ�� �ҹ��ڷ�

	return 0; //��� �ȴ�. ������ �⺻������ �ʿ�
}
//������ �ϰ� ��ũ���� �ϴ� �������� ������ �Ѵ�
//�ַ�� ���� F7  -> �ַ�� �ȿ� �ִ� .CPP���� �� ���� ���ش�
//�ַ�� �ٽ� ���� ->  ���� �ߴ� �͵��� ����� �ٽ� ���� ���ش�
//������Ʈ �̸� ���� -> ������Ʈ �� ���� ����
//COMPILE (ctrl + F7)->�ش� cpp �ϳ��� ����
//Debug�� release�� ������ : ���� �ϸ鼭 ������ Ȯ�� �� �� �ִ°� Debug, �����鿡�� ���� �� �� ����ȭ�� ����(�����ϴ� �κи�) Release

//  \n \r \t \\ \*
// \n std::cout << "There are " << 219 << " ways\n I love you." << std::endl; 
// ����
