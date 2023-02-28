#include "Games.h"

Games::Games()
{
	this->name = "Unnamed";
	this->release_data = 0000;
	this->studio = "Unnamed";
	this->price = 0;
}

Games::Games(std::string name, int release_data, std::string studio, int price)
{
	this->name = name;
	this->release_data = release_data;
	this->studio = studio;
	this->price = price;
}

void assignment(Games* arr, Games* new_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = new_arr[i];
	}
}
