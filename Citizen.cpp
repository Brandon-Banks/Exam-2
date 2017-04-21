#include <string>
#include "Citizen.h"

using namespace std;

Citizen::Citizen()
{
	// Initialize an OG citizen
	_firstName = "Deshawn";
	_lastName = "Utah";
	_color = "Green";
	_id = 4;
}

Citizen::Citizen(string firstName, string lastName, int id, string color)
{
	// Set the properties to their names
	_firstName = firstName;
	_lastName = lastName;
	_id = id;
	_color = color;
}

Citizen::Citizen(Citizen* citizen)
{
	if (citizen != NULL)
	{
		// Set what'll happen if the statement is false
		_firstName = citizen->getFirstName;
		_lastName = citizen->getLastName;
		_id = citizen->getId;
		_color = citizen->getFavoriteColor;
	}
}

string Citizen::getFirstName() const
{
	return _firstName;
}

string Citizen::getLastName() const
{
	return _lastName;
}

string Citizen::getFavoriteColor() const
{
	return _color;
}

int Citizen::getId() const
{
	return _id;
}

