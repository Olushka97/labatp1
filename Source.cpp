#include <stdio.h>      
#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
	char ch; int i, count, flag; i = flag = count=0;
	setlocale(LC_ALL, "rus");
	std::ifstream in;       // поток для чтения
	in.open("C:/Users/User/Desktop/lab2.txt"); // окрываем файл для чтения
	if (!in.is_open()) // если файл не открыт
	{
		cout << "Файл не может быть открыт!\n"; // сообщить об этом
		getchar();
	}
	else
	{
		for (in.get(ch);in; in.get(ch))
		{
			if (isalpha(ch) && !flag) flag = 1;
			if (ch != ' ' && flag)
			{
				i++; flag = 0; 
			}
			else if (i <= 4)
			{
				count++;
				i = 0;
			}
			else i = 0;
		}
		
	}
	cout <<"В файле "<<count<<" слов, в которых не более 4 букв";
		getchar();
		in.close();
}