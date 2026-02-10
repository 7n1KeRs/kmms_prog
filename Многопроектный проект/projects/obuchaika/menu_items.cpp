#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const dnv::MenuItem dnv::STUDY_RUSSIAN = {
	"1 - Русский язык", dnv::study_russian, &dnv::STUDY_FIRST_GRADE
};
const dnv::MenuItem dnv::STUDY_RUSSIAN_LITERATURE = {
	"2 - Русская литература", dnv::study_russian_literature, &dnv::STUDY_FIRST_GRADE
};
const dnv::MenuItem dnv::STUDY_MATH = {
	"3 - Математика", dnv::study_math, &dnv::STUDY_FIRST_GRADE
};
const dnv::MenuItem dnv::STUDY_PE = {
	"4 - Я люблю физкультуру", dnv::study_pe, &dnv::STUDY_FIRST_GRADE
};
const dnv::MenuItem dnv::STUDY_GO_BACK_TO_SUBJECTS = {
	"0 - Выйти в предыдущее меню", dnv::study_go_back_to_subjects, &dnv::STUDY_FIRST_GRADE
};

namespace {
	const dnv::MenuItem* const study_subject_children[] = {
		&dnv::STUDY_GO_BACK_TO_SUBJECTS,
		&dnv::STUDY_RUSSIAN,
		&dnv::STUDY_RUSSIAN_LITERATURE,
		&dnv::STUDY_MATH,
		&dnv::STUDY_PE
	};
	const int study_subject_size = sizeof (study_subject_children) / sizeof (study_subject_children[0]);
}

const dnv::MenuItem dnv::STUDY_FIRST_GRADE = {
	"1 - Изучать предметы 1-го класса", dnv::show_menu3, &dnv::STUDY, study_subject_children, study_subject_size
};
const dnv::MenuItem dnv::STUDY_SECOND_GRADE = {
	"2 - Изучать предметы 2-го класса", dnv::show_menu3, &dnv::STUDY
};
const dnv::MenuItem dnv::STUDY_THIRD_GRADE = {
	"3 - Изучать предметы 3-го класса", dnv::show_menu3, &dnv::STUDY
};
const dnv::MenuItem dnv::STUDY_GO_BACK = {
	"0 - Выйти в главное меню", dnv::study_go_back, &dnv::STUDY
};

namespace {
	const dnv::MenuItem* const study_children[] = {
		&dnv::STUDY_GO_BACK,
		&dnv::STUDY_FIRST_GRADE,
		&dnv::STUDY_SECOND_GRADE,
		&dnv::STUDY_THIRD_GRADE
	};
	const int study_size = sizeof (study_children) / sizeof (study_children[0]);
}

const dnv::MenuItem dnv::STUDY = {
	"1 - Предметы какого класса школы вы хотите учить?", dnv::show_menu2, &dnv::MAIN, study_children, study_size
};
const dnv::MenuItem dnv::EXIT = {
	"0 - Я уже закончил школу и все знаю", dnv::exit, &dnv::MAIN
};

namespace {
	const dnv::MenuItem* const main_children[] = {
		&dnv::EXIT,
		&dnv::STUDY
	};
	const int main_size = sizeof (main_children) / sizeof (main_children[0]);
}

const dnv::MenuItem dnv::MAIN = {
	nullptr, dnv::show_menu1, nullptr, main_children, main_size
};