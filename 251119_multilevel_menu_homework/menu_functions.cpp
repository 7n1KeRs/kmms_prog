#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const dnv::MenuItem* dnv::show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветсвует тебя, мой юный ученик!" << std::endl;
	for (int i = 1; i < current -> children_count; i++) {
		std::cout << current -> children[i] -> title << std::endl;
	}
	std::cout << current -> children[0] -> title << std::endl;
	std::cout << "Обучайка > ";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current -> children[user_input];
}

const dnv::MenuItem* dnv::exit(const MenuItem* current) {
	std::exit(0);
}

const dnv::MenuItem* dnv::study_algebra(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_math_analysis(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_summ(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_substract(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_multiply(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_divide(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_differential_calculus(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_integral_calculus(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_go_back_to_subjects(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent -> parent;
}

const dnv::MenuItem* dnv::study_go_back(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent -> parent -> parent;
}