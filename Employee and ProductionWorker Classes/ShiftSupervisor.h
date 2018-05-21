#pragma once
#include "Employee.h"
class ShiftSupervisor :
	public Employee
{
private:
	int yearlyBonus;
	int anualSalary;
public:
	int getYearlyBonus()
	{
		return yearlyBonus;
	}

	void setYearlyBonus(int s)
	{
		yearlyBonus = s;
	}
	int getanualSalary()
	{
		return anualSalary;
	}
	void setAnualSalary(int s)
	{
		anualSalary = s;
	}


	ShiftSupervisor();
	ShiftSupervisor(int, int);
	~ShiftSupervisor();
};

