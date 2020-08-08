#include <iostream>

#include "Employee.h"
#include "Clerk.h"
#include "Manager.h"

using namespace std;

Manager::Manager()
{
	cout << "Hello! Manager" << endl;
	travelClaims = 1000;
}

Manager::Manager(double travelClaims,
	string name, int yearJoined, double basicSalary, double allowance) :
	Employee(name, yearJoined, basicSalary, allowance)
{
	this->travelClaims = travelClaims;
}

void Manager::print()
{

	cout << "Travel claims : " << travelClaims << endl;
	Employee::print();
}

double Manager::calcMonthlySalary()
{
	return basicSalary + allowance + travelClaims;
}

double Manager::getTravelClaims()
{
	return travelClaims;
}

void Manager::setTravelClaims(double travelClaims)
{
	this->travelClaims = travelClaims;
}