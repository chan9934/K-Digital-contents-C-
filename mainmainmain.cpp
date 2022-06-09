#include <iostream>
#include "Circle.h"
#include "Coin.h"

using namespace std;

void add(int a, int b, int* sum)
{
	*sum = a + b;
	cout << *sum << endl;
}


int main()
{
	//Circle circle1;
	//Coin coin1;
	//circle1.printName();
	//coin1.printName();

	int a = 3, b = 4;
	int sum = 0;
	add(a, b, &sum);
	cout << &sum << endl;
	


	
}