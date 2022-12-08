#include <iostream>
#include <string>
#include <Windows.h>
#include <regex>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

bool isValidName (string str)
{
	regex reg("^[A-Z]{1}[a-z]{2,31}");
	return regex_search(str, reg);
}

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//#1
	/*
	cout << "Введите строку (латиница):" << endl;
	string s;
	cin >> s;
	cout << "Ваша строка от 2 до 4 символа: " << s.substr(2,3) << endl;
	if (s.find('a') >= 0 && s.find('a') <= s.size())
	{
		cout << "Индекс вхождения 'a': " << s.find('a') << endl;
	}
	else
	{
		cout << "Символа не найдено" << endl;
	}
	
	//#2
	
	cout << "Введите ваше имя (латиница): " << endl;
	string name;
	cin >> name;
	if (isValidName(name))
	{
		cout << name << endl;
	}
	else
	{
		cout << "Некорректное имя";
	}
	
	string mails = "1234abcdmy@mail.ruanotheraddress@mail.ru";
	smatch matches;
	regex regmail("^[a-z0-9][a-z0-9]*[a-z0-9_]@[mail.ru]{7}");

	while (regex_search(mails, matches, regmail))
	{
		cout << matches[0] << endl;
		cout << matches[1] << endl;
		mails = matches.suffix().str();
	}
	
	//#3
	cout << "Введите радиус окружности: " << endl;
	int r;
	cin >> r;
	double l = 2 * M_PI * r;
	cout << "Длина окружности равна: " << trunc(l*1000)/1000 << endl;
	*/

	fstream fs;
	fs.open("a.txt");
	while (true)
	{
		string text;
		string line;
		cout << "Введите произвольную строку: " << endl;
		getline(cin, text);
		if (text == "erase")
		{
			fs.trunc;
		}
		else if (text == "read")
		{
			while (getline(fs, line))
			{
				cout << line << endl;
			}
		}
		else if (text == "exit") { break; }
		else { fs << text << endl; }
	}
	fs.close();
}

