#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

namespace {
	const dnv::MenuItem* func(const dnv::MenuItem* current){
		for (int i = 1; i < current -> children_count; i++) {
			std::cout << current -> children[i] -> title << std::endl;
		}
		std::cout << current->children[0]->title << std::endl;
		std::cout << "Обучайка > ";
		
		int user_input;
		std::cin >> user_input;
		std::cout << std::endl;
		
		return current->children[user_input];
	}
}

const dnv::MenuItem* dnv::show_menu1(const MenuItem* current) {
	std::cout << "Главное меню:" << std::endl;
	return func(current);
}

const dnv::MenuItem* dnv::show_menu2(const MenuItem* current) {
	std::cout << "Второй уровень меню:" << std::endl;
	return func(current);
}

const dnv::MenuItem* dnv::show_menu3(const MenuItem* current) {
	std::cout << "Третий уровень меню:" << std::endl;
	return func(current);
}

const dnv::MenuItem* dnv::exit(const MenuItem* current) {
	std::exit(0);
}

const dnv::MenuItem* dnv::study_first_grade(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_second_grade(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_third_grade(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_russian(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_russian_literature(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_math(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_pe(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent;
}

const dnv::MenuItem* dnv::study_go_back_to_subjects(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}

const dnv::MenuItem* dnv::study_go_back(const MenuItem* current) {
	
	std::cout << current -> title << std::endl;
	return current -> parent -> parent;
}