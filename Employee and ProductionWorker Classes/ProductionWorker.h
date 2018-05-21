#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:

	std::string getShift()
	{
		if (shift == 1)
		{
			return "Day shift";
		}

		if (shift == 2)
		{
			return "Night shift";
		}
		
	}

	double getHourlyPayRate()
	{
		return hourlyPayRate;
	}
	ProductionWorker();
	ProductionWorker(int, double);
	~ProductionWorker();
};

