#include <string>
#include "City.h"

using namespace std;

City::City()
{
	_cityName = "Spokane";
}

City::City(string cityName)
{
	_cityName = cityName;
}

City::City(City* = c)
{
	if (c != NULL)
	{
		_cityName = c->getCityName();
	}
}

string City::getCityName()
{
	return _cityName;
}
