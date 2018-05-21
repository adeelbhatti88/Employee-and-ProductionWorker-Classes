#include <iostream>
#include <string>

#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

	

int main()
{
	Employee adeel("Jack", 564, "e/er/1598");
	
	
	ProductionWorker worker(1,24.50);
	ShiftSupervisor worker1(20000, 50000);
	
	std::cout << adeel.getEmployeeName() << std::endl;
	std::cout << adeel.getEmployeeNumber() << std::endl;
	std::cout << adeel.getHireDate() << std::endl;
	std::cout << worker.getShift() << std::endl;
	std::cout << worker.getHourlyPayRate() << std::endl;
	std::cout << worker1.getYearlyBonus() << std::endl;
	std::cout << worker1.getanualSalary() << std::endl;

	return 0;
}