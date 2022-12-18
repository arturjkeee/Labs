#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <regex>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void vprint(vector<float> v)
{
	for (float n : v) cout << n << " ";
	cout << endl;
}
bool isValidName(string str)
{
	regex reg("^[A-Z]{1}[a-z]{2,31}");
	return regex_search(str, reg);
}
class Settings
{
public:
	map<string, int> map;
	void add(string s, int value)
	{
		map[s] = value;
	}
	void get(string s)
	{
		cout << map[s] << endl;
	}
	void print()
	{
		for (auto i = map.begin(); i != map.end(); i++)
		{
			cout << i->first << "=" << i->second << endl;
		}
	}
};