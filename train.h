#pragma once
#include <iostream>
#include <string>
class TRAIN {
public:
	std::string nameofplace;
	int numbertrain;
	int timetoarraving;
	int train_numbertrain;
	void set_nameofplace(std::string);
	void set_numbertrain(int);
	void set_timetoarraving(int);
	std::string get_nameofplace();
	int get_numbertrain();
	int get_timetoarraving();
	void setdata();
};
