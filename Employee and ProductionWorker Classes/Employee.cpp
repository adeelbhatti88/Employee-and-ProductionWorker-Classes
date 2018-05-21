#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;



Employee::Employee()
{
}

Employee::Employee(std::string n, int s, std::string d):employeeName(n), employeeNumber(s), hireDate(d)
{

}




Employee::~Employee()
{
}
