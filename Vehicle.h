#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
	public:
		Vehicle(int plate, string brand);
		static Vehicle* GetInstance();
		int getPlate();
		string getBrand();
		void setPlate(int plate);
		void setBrand(string Brand);

	private:
		int plate;
		string brand;
		static Vehicle* m_this;
};

#endif
