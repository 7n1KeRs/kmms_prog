#include <cmath>
#include <iostream>

int main(int argc, char* argv[]){
	int day, month, year;
	
	std::cout << "Введите дату дня" << std::endl;
	std::cin >> day;
	std::cout << "Введите номер месяца" << std::endl;
	std::cin >> month;
	std::cout << "Введите год" << std::endl;
	std::cin >> year;
	
	int year_of_century, century, day_of_week;
	year_of_century = year % 100;
	century = year / 100;
	day_of_week = (day + 13 * (month + 1) / 5 + year_of_century + year_of_century / 4 + century / 4 - 2 * century) % 7;
	
	switch(day_of_week){
		case 0:
			std::cout << "Суббота" << std::endl;
			break;
		case 1:
			std::cout << "Воскресенье" << std::endl;
			break;
		case 2:
			std::cout << "Понедельник" << std::endl;
			break;
		case 3:
			std::cout << "Вторник" << std::endl;
			break;
		case 4:
			std::cout << "Среда" << std::endl;
			break;
		case 5:
			std::cout << "Четверг" << std::endl;
			break;
		case 6:
			std::cout << "Пятница" << std::endl;
			break;
		default:
			std::cout << "Такого дня недели не существует!" << std::endl;
			break;
	}
	
	system("pause");
	
	return 0;
}
