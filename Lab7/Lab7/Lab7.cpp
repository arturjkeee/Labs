#include "Header.h"


int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//#1
	
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
	
	
	fstream fs;
	string s;

	fs.open("a.txt", ios::out);
	while (1) {
		cout << "Введите строку:\n";
		getline(cin, s);


		if (s == "read") {
			fs.close();
			fs.open("a.txt", ios::in);
			string line;
			while (getline(fs, line)) {
				cout << line << endl;
			}
		}

		else if (s == "erase") {
			fs.close();
			remove("a.txt");
			fs.open("a.txt", ios::in);
		}
		else if (s == "exit") {
			break;
		}
		else {
			fs.close();
			fs.open("a.txt", ios::app);
			fs << s << endl;
		}
	}
	try {
		fs.close();
	}
	catch (...) {
		cout << "Нельзя закрыть файл";
	}
	
	//4
	
	vector<float> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(9);
	v.push_back(16);
	v.push_back(25);
	vprint(v);
	
	vector<float>::iterator i = v.begin() + 3;
	v.insert(i, 10.667f);
	vprint(v);

	v.pop_back();
	vprint(v);
	
	Settings s1;
	s1.add("1", 120);
	s1.get("1");
	s1.print();
}

