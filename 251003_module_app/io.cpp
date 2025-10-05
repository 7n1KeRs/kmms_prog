#include "io.hpp"

#include <iostream>

void biv::print_array(const char* const comment, int* arr, const int size) {
	for (int i = 0; i < size; ++i)
		cout << arr[i] << ' ';
	cout << endl;
}
