#include <istream>
#include <iostream>
#include <string>
#include "train.h"
void TRAIN::set_nameofplace(std::string train_nameofplace)
{
	nameofplace = train_nameofplace;
}
void TRAIN::set_numbertrain(int train_numbertrain)
{
	numbertrain = train_numbertrain;
}
void TRAIN::set_timetoarraving(int train_timetoarraving)
{
	timetoarraving = train_timetoarraving;
}
std::string TRAIN::get_nameofplace()
{
	return TRAIN::nameofplace;
}
int TRAIN::get_numbertrain()
{
	return TRAIN::numbertrain;
}
int TRAIN::get_timetoarraving()
{
	return TRAIN::timetoarraving;
}
void TRAIN::setdata() {
	std::string train_nameofplace;
	int train_numbertrain;
	int train_timetoarraving;
	TRAIN *train = new TRAIN;
	std::cout << "Введите название места: \n";
	getline(std::cin, train_nameofplace);
	train->set_nameofplace(nameofplace);
	std::cout << "Введите номер поезда: \n";
	std::cin >> train_numbertrain;
	train->set_numbertrain(numbertrain);
	std::cout << "Введите время пребывания: \n";
	std::cin >> train_timetoarraving;
	train->set_timetoarraving(timetoarraving);
	std::cout << train->get_nameofplace();
	std::cout << "done";
};
