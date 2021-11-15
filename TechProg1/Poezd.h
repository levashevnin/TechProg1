#pragma once
#include <string>
#include <iostream>
#include "List.h"
using namespace std;
class Poezd
{
public:
	Poezd() : name("None"), date(0), qty(0), volume(0) {};
	Poezd(string n, string d, int q, string arr[], int v) {};
	Poezd(const Poezd& other) {};
	void setName(string n);
	void setDate(int d);
	void setQty(int q);
	void setVolume(int v);
	void setRoadMap(string arr[]);
	string getName();
	int getDate();
	int getQty();
	int getVolume();
	string* getRoadMap();
	~Poezd();
private:
	string name;
	int date;
	List<string> roadMap;
	int qty;
	int volume;
};

