#include<iostream>
#include"employeestruct.h"

using namespace std;

int main()
{
    EmployeeT anEmployee;
    anEmployee.firstInitial = 'M';
    anEmployee.middleInitial = 'R';
    anEmployee.lastInitial = 'G';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 10000;

    cout << "Employee:" << anEmployee.firstInitial <<
                           anEmployee.middleInitial <<
                           anEmployee.lastInitial <<
                           anEmployee.employeeNumber <<
                           anEmployee.salary << endl;
    return 0;
}