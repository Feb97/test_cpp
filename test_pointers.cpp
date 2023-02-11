#include <iostream>
#include "Vehicle.h"

int main()
{
	Vehicle* ptrV = Vehicle::GetInstance();
	cout << ptrV->getPlate() << endl;
	cout << ptrV->getBrand() << endl;

	cout << "\nREASSIGN..\n" << endl;

	ptrV->setPlate(100);
	ptrV->setBrand("Ferrari");
	cout << ptrV->getPlate() << endl;
	cout << ptrV->getBrand() << endl;


}
