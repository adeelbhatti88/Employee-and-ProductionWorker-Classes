#pragma once
#include <string>
class Employee
{
private:
	std::string employeeName;
	int employeeNumber;
	std::string hireDate;
public:
	Employee();
	Employee(std::string, int, std::string);
	std::string getEmployeeName()
	{
		return employeeName;
	}
	int getEmployeeNumber()
	{
		return employeeNumber;
	}
	std::string getHireDate()
	{
		return hireDate;
	}
	void setEmployeeName(std::string s)
	{
		employeeName = s;
	}
	void setEmployeeNumber(int s)
	{
		employeeNumber = s;
	}
	void setHireDate(std::string s)
	{
		hireDate = s;
	}
	~Employee();
};

