#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const dnv::MenuItem dnv::STUDY_DIFFERENTIAL_CALCULUS = {
	"1 - Хочу изучить дифференциальное исчисление!", dnv::study_differential_calculus, &dnv::STUDY_MATH_ANALYSIS
};
const dnv::MenuItem dnv::STUDY_INTEGRAL_CALCULUS = {
	"2 - Хочу изучить интегральное исчисление!", dnv::study_integral_calculus, &dnv::STUDY_MATH_ANALYSIS
};
const dnv::MenuItem dnv::STUDY_GO_BACK_TO_SUBJECTS = {
	"0 - Выйти к выбору предметов", dnv::study_go_back_to_subjects, &dnv::STUDY_MATH_ANALYSIS
};

namespace {
	const dnv::MenuItem* const study_math_analysis_children[] = {
		&dnv::STUDY_GO_BACK_TO_SUBJECTS,
		&dnv::STUDY_DIFFERENTIAL_CALCULUS,
		&dnv::STUDY_INTEGRAL_CALCULUS,
	};
	const int study_math_analysis_size = sizeof (study_math_analysis_children) / sizeof (study_math_analysis_children[0]);
}

const dnv::MenuItem dnv::STUDY_SUMM = {
	"1 - Хочу научиться складывать!", dnv::study_summ, &dnv::STUDY_ALGEBRA
};
const dnv::MenuItem dnv::STUDY_SUBSTRACT = {
	"2 - Хочу научиться вычитать!", dnv::study_substract, &dnv::STUDY_ALGEBRA
};
const dnv::MenuItem dnv::STUDY_MULTIPLY = {
	"3 - Хочу научиться умножать!", dnv::study_multiply, &dnv::STUDY_ALGEBRA
};
const dnv::MenuItem dnv::STUDY_DIVIDE = {
	"4 - Хочу научиться делить!", dnv::study_divide, &dnv::STUDY_ALGEBRA
};
const dnv::MenuItem dnv::STUDY_GO_BACK_TO_SUBJECTS = {
	"0 - Выйти к выбору предметов", dnv::study_go_back_to_subjects, &dnv::STUDY
};

namespace {
	const dnv::MenuItem* const study_algebra_children[] = {
		&dnv::STUDY_GO_BACK_TO_SUBJECTS,
		&dnv::STUDY_SUMM,
		&dnv::STUDY_SUBSTRACT,
		&dnv::STUDY_MULTIPLY,
		&dnv::STUDY_DIVIDE,
	};
	const int study_algebra_size = sizeof (study_algebra_children) / sizeof (study_algebra_children[0]);
}

const dnv::MenuItem dnv::STUDY_ALGEBRA = {
	"1 - Хочу изучать алгебру!", dnv::show_menu, &dnv::STUDY, study_algebra_children, study_algebra_size
};
const dnv::MenuItem dnv::STUDY_MATH_ANALYSIS = {
	"2 - Хочу изучать математический анализ!", dnv::show_menu, &dnv::STUDY, study_math_analysis_children, study_math_analysis_size
};
const dnv::MenuItem dnv::STUDY_GO_BACK = {
	"0 - Выйти в главное меню", dnv::study_go_back, &dnv::STUDY
};

namespace {
	const dnv::MenuItem* const study_children[] = {
		&dnv::STUDY_GO_BACK,
		&dnv::STUDY_ALGEBRA,
		&dnv::STUDY_MATH_ANALYSIS,
	};
	const int study_size = sizeof (study_children) / sizeof (study_children[0]);
}

const dnv::MenuItem dnv::STUDY = {
	"1 - Хочу учиться математике!", dnv::show_menu, &dnv::MAIN, study_children, study_size
};
const dnv::MenuItem dnv::EXIT = {
	"0 - Я лучше пойду полежу...", dnv::exit, &dnv::MAIN
};

namespace {
	const dnv::MenuItem* const main_children[] = {
		&dnv::EXIT,
		&dnv::STUDY
	};
	const int main_size = sizeof (main_children) / sizeof (main_children[0]);
}

const dnv::MenuItem dnv::MAIN = {
	nullptr, dnv::show_menu, nullptr, main_children, main_size
};