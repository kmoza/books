#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1 = "Hello";
	string str2 = "World";

	string str3 = str1 + " " + str2;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;

	if(str3 == "Hello World")
	{
		cout << "str3 is what it should be." << endl;
	}
	else
	{
		cout << "Hmm... str3 isn't what it should be." << endl;
	}

	return 0;
}