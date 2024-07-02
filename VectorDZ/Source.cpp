#include "starter.hpp"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::vector<int> vec;

	VectorMake(vec);
	PrintVector(vec);
	std::cout << "\n\n\n";
	VectorPos(vec);
	std::sort(vec.begin(), vec.end());
	PrintVector(vec);
}