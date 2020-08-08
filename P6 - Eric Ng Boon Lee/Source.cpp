#include <iostream>
#include "Employee.h"
#include "Clerk.h"
#include "Manager.h"

using namespace std;

void printElements(Employee **empArray);

int main()
{
	cout << "a & b).\n" << endl;
	Employee em;
	Manager mn(1000.00, "Xue Hua", 2013, 1500.00, 500.00);
	Clerk cl(3, 20, "Ken Chan", 2012, 3000.00, 800.00);

	cout << "c).\n" << endl;
	cout << "Overrides" << endl;
	mn.Employee::print();
	cl.Employee::print();
	cout << endl;
	cout << "Normal function call" << endl;
	mn.print();
	cout << endl;
	cl.print();


	cout << "d).\n" << endl;
	cout << "Salary of Clerk : " << cl.calcMonthlySalary() << endl;
	cout << "Salary of : " << mn.calcMonthlySalary() << endl;

	cout << "e).\n" << endl;

	/*empArray[0] = new Employee;
	empArray[1] = new Manager;
	empArray[2] = new Clerk;*/

	Employee* empArray[3];
	empArray[0] = new Employee("Xue Hua", 2013, 1500.00, 500.00);
	empArray[1] = new Manager(1000.00, "Xue Hua", 2013, 1500.00, 500.00);
	empArray[2] = new Clerk(3, 20, "Ken Chan", 2012, 3000.00, 800.00);
	
	
	/*empArray[0]->setName("Harro there");
	empArray[0]->setYearJoined(2019);
	empArray[0]->setBasicSalary(9000.00);
	empArray[0]->setAllowance(900.00);

	empArray[1]->setName("Harro there");
	empArray[1]->setYearJoined(2019);
	empArray[1]->setBasicSalary(9000.00);
	empArray[1]->setAllowance(900.00);

	empArray[2]->setName("Harro there");
	empArray[2]->setYearJoined(2019);
	empArray[2]->setBasicSalary(9000.00);
	empArray[2]->setAllowance(900.00);*/

	printElements(empArray);


	return 0;
	
}


void printElements(Employee **empArray)
{
	for (int i = 0; i < 3; i++)
	{
		empArray[i]->print();
		cout << "Salary : " << empArray[i]->calcMonthlySalary()<<endl;
	}
}