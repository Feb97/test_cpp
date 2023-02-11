#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

Vehicle* Vehicle::m_this = NULL;

Vehicle::Vehicle(int plate, string brand)
{
	this->plate = plate;
	this->brand = brand;
}

int Vehicle::getPlate()
{
	return plate;
}

string Vehicle::getBrand()
{
	return brand;
}

void Vehicle::setPlate(int plate)
{
	this->plate = plate;
}

void Vehicle::setBrand(string brand)
{
	this->brand = brand;
}

Vehicle* Vehicle::GetInstance()
{
	if (m_this == NULL) 
	{
		m_this = new Vehicle(0, "nullbrand");
	}
	return m_this;
}