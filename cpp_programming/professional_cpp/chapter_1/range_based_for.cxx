#include<iostream>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	for(auto&i : arr)
	{
		i = i * 2;
		cout << i << endl;
	}

	return 0;
}