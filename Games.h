#pragma once
#include <string>

class Games
{
public:
	std::string name;
	int release_data;
	std::string studio;
	int price;

	//������������ ������ ��� ����������� ����� ������, ��� �������� �������� ����� ������
	Games();

	Games(std::string name, int release_data, std::string studio, int price);
};

void assignment(Games* arr, Games* other, int size);