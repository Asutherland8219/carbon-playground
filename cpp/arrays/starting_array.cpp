#include <iostream>

int main()
{
	// Initialize 2D array
	const char* asset
		= { "AAPL", "MLPA", "FB", "NFLX"};

	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		std::cout << asset[i] << "\n";

	return 0;
}
