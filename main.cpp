#include <stdio.h>
#include <iostream>
#include <string>
#include "train.h"
int main (){
	setlocale(LC_ALL, "Rus");

	TRAIN *train = new TRAIN;
	TRAIN trains[8];
	TRAIN t;
	t.setdata();
	t.get_nameofplace();

	getchar();
	getchar();
}
