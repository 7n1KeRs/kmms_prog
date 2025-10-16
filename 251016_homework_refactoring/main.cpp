#include <ctime>
#include <iostream>

void print_array (const char* const comment, int* arr, const int n); 

void merge_sort (int* arr, int left, int mid, int right){
	int left_part = mid - left + 1;
	int right_part = right - mid;
	
	int* left_arr = new int[left_part];
	int* right_arr = new int[right_part];
	
	for (int i = 0; i < left_part; ++i){
		left_arr[i] = arr[left + i];
	}
	for (int i = 0; i < right_part; ++i){
		right_arr[i] = arr[mid + 1 + i];
	}
	
	int i = 0, j = 0;
	int temp_part = left;
	
	while (i < left_part && j < right_part){
		if (left_arr[i] <= right_arr[j]){
			arr[temp_part] = left_arr[i];
			i++;
		}
		
		else{
			arr[temp_part] = right_arr[j];
			j++;
		}
		temp_part++;
	}
	
	while (i < left_part){
		arr[temp_part] = left_arr[i];
		i++;
		temp_part++;
	}
	
	while (j < right_part){
		arr[temp_part] = right_arr[j];
		j++;
		temp_part++;
	}
}

void print_merge_sort (int* arr, int left, int right){
	if (left >= right){
		return;
	}
	
	int mid = left + (right - left) / 2;
	
	print_merge_sort (arr, left, mid);
	print_merge_sort (arr, mid + 1, right);
	merge_sort (arr, left, mid, right);
}

int main(){
	int arr_size;
	std::cout << "Введите длину массива: ";
	std::cin >> arr_size;
	
	int* arr = new int[arr_size];
	srand(time(0));
	for (int i = 0; i < arr_size; ++i){
		arr[i] = rand() % 10;
	}
	
	print_array ("Массив до сортировки слиянием:", arr, arr_size);
	print_merge_sort (arr, 0, arr_size - 1);
	print_array ("Массив после сортировки слиянием:", arr, arr_size);
	
	return 0;
}

void print_array (const char* const comment, int* arr, const int n){
	const char space = ' ';
	std::cout << comment;
	
	for (int i = 0; i < n; ++i){
		std::cout << space << arr[i];
	}
	
	std::cout << std::endl;
}