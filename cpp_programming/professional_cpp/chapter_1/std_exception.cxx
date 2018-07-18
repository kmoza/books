#include<iostream>
#include<stdexcept>

using namespace std;

double divideNumbers(double num, double denom)
{
    if(denom == 0)
    {
        throw std::exception();
    }
    return num/denom;
}

int main()
{
    try
    {
        cout << divideNumbers(2.5,0.5) << endl;
        cout << divideNumbers(2.3,0) << endl;
    }
    catch(const std::exception& exception)
    {
        cout << "An exception was caught" << endl;
    }

    return 0;
}