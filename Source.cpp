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
	std::ifstream in;       // ����� ��� ������
	in.open("C:/Users/User/Desktop/lab2.txt"); // �������� ���� ��� ������
	if (!in.is_open()) // ���� ���� �� ������
	{
		cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
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
	cout <<"� ����� "<<count<<" ����, � ������� �� ����� 4 ����";
		getchar();
		in.close();
}