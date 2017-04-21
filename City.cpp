#include<string>
#include <vector>
#include <fstream>

#include "Citizen.h"
#include "City.h"
// Include the other files
using namespace std;

City::City(string cityName)
{
	// set it to cityName
	_cityName = cityName;

	fstream infile(_cityName, ios::in);
	if (infile.is_open())
	{
		// Creating a text file
		string firstName, lastName, color, id;
		while (infile >> firstName >> lastName >> color >> id)
		{
			Citizen* citizen = new Citizen(firstName, lastName, color, id);
			citizenList.push_back(citizen);
		}
	}

}

City::~City()
{
	fstream outfile(_cityName, ios::out);
	if (outfile.is_open())
	{
		// Pull from file
		for (int i = 0; i < citizenList.size(); i++)
		{
			outfile << citizenList[i]->getFirstName() << " "
				<< citizenList[i]->getLastName() << " "
				<< citizenList[i]->getFavoriteColor() << " "
				<< citizenList[i]->getId() << endl;
			// delete list
			delete citizenList[i];
		}
	}
	else
	{
		// get new info for list
		for (int i = 0; i < citizenList.size(); i++)
		{
			delete citizenList[i];
		}
	} // delete list again
}

string City::getCityName() const
{
	return _cityName;
}

Citizen* City::getCitizenAtIndex(int index)
{
	if (index >= 0 && index < citizenList.size())
	{
		return citizenList[index];
	}
	return NULL;
}

void City::addCitizen(Citizen* citizen)
{
	// Add a new citizen to the list
	Citizen* citizen = new Citizen(citizen);
	citizenList.push_back(citizen);
}

int City::size()
{
	return citizenList.size();
}

Citizen* City::getSongByName(string title)
{
	for (int i = 0; i < citizenList.size(); i++)
	{
		// for some reason there's an error on line 83
		if (citizenList[i]->getTitle() == title)
		{
			return citizenList[i];
		}
	}
	return NULL;
}
