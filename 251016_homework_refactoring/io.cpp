#include "io.hpp"
#include <iostream>

void biv::print_array (const char* const comment, int* arr, const int n){
	const char space = ' ';
	std::cout << comment;
	
	for (int i = 0; i < n; ++i){
		std::cout << space << arr[i];
	}
	
	std::cout << std::endl;
}