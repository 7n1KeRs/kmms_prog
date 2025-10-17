#include <ctime>
#include "io.hpp"
#include <iostream>
#include "sortings.hpp"

int main(){
	//int arr[] = {1, 8, 1, 2, 5, 2, 3, 11};
	int arr_size;
	std::cout << "Введите длину массива: ";
	std::cin >> arr_size;
	
	int* arr = new int[arr_size];
	srand(time(0));
	for (int i = 0; i < arr_size; ++i){
		arr[i] = rand() % 10;
	}
	
	biv::print_array ("Массив до сортировки слиянием:", arr, arr_size);
	
	biv::sortings::print_merge_sort (arr, 0, arr_size - 1);
	
	biv::print_array ("Массив после сортировки слиянием:", arr, arr_size);
	
	return 0;
}