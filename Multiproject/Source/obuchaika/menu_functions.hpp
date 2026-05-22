#pragma once 

#include "menu.hpp"

namespace dnv {
	const MenuItem* show_menu1(const MenuItem* current);
	const MenuItem* show_menu2(const MenuItem* current);
	const MenuItem* show_menu3(const MenuItem* current);
	
	const MenuItem* exit(const MenuItem* current);
	
	const MenuItem* study_first_grade(const MenuItem* current);
	const MenuItem* study_second_grade(const MenuItem* current);
	const MenuItem* study_third_grade(const MenuItem* current);
	const MenuItem* study_russian(const MenuItem* current);
	const MenuItem* study_russian_literature(const MenuItem* current);
	const MenuItem* study_math(const MenuItem* current);
	const MenuItem* study_pe(const MenuItem* current);
	const MenuItem* study_go_back_to_subjects(const MenuItem* current);
	const MenuItem* study_go_back(const MenuItem* current);
}