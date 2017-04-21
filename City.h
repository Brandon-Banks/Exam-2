#ifndef CITY_H_
#define CITY_H_

#include <string>
#include <vector>
#include <iomanip>
#include <iostream>

#include "Citizen.h"

using namespace std;

class City
{
public:
	City(string cityName);

	~City();

	int populationSize;

	string getCityName() const;

	City* getCitizenAtIndex(int index);

	void addCitizen(Citizen* citizen);

	int size();

	Citizen* getCitizenWithID(int id);

private:
	string _cityName;
	vector<Citizen*> citizenList;
};



#endif
