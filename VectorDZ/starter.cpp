#include "starter.hpp"

void VectorMake(std::vector<int> &vec)
{

	for (int i = 0; i < 100; i++)
	{
		vec.push_back(rand() % 41 - 20);
	}
}

void PrintVector(std::vector<int> &vec)
{
	for (int i : vec)
	{
		std::cout << i << ' ';
	}
}

void VectorPos(std::vector<int>& vec)
{
	for (int i = -20; i != 1 ; i++)
	{
		std::erase(vec, i);
	}
}
