#ifndef CITIZEN_H_
#define CITIZEN_H_

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Citizen
{
private:
	// Create the private class, except color since it'll consistantly change
	string _firstName;
	string _lastName;
	int _id;

public:
	// color gonna change
	string _color;

	Citizen();

	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	//Once a citizen is created, you can't change their id or name
	//but you can change their favorite color
	Citizen(int id, string firstName, string lastName, string color);

	//Creates a new Citizen object by copying data from the
	//passed in citizen
	Citizen(Citizen* citizen);

	//Returns the first name of this citizen
	string getFirstName() const;

	//Returns the last name of this citizen
	string getLastName() const;

	//Returns the id for this citizen
	int getId() const;

	//Returns the favorite color for this citizen
	string getFavoriteColor() const;

	//Sets the favorite color for this citizen
	void setFavoriteColor(string value);

};

#endif
