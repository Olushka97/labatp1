#include <stdio.h>
#include <iostream>
#include <string>
#include "train.h"
int main (){
	setlocale(LC_ALL, "Rus");

	TRAIN *trains; //это поле класса trainCollection
	trains = new TRAIN[6]; //это в конструктор класса trainCollection (просто выделяешь место для 6 объектов, не заполняя ничем)
	//потом перегруженным оператором ввода заполнишь объекты класса train своими данными 
	TRAIN t;
	t.setdata();
	t.get_nameofplace();

	getchar();
	getchar();
}
