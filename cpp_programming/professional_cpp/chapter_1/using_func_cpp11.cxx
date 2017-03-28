#include<iostream>
using namespace std;

int addNum(int x, int y)
{
	cout << "Entering function : " << __func__ << endl;
	int result = x + y;
	return result;
}

int main()
{
	int num1 = 10;
	int num2 = 15;
	cout << "addition = " << addNum(num1, num2) << endl;
	return 0;
}