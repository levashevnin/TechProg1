#pragma once
#include <string>
#include <iostream>
#include "List.h"
#include "Gruzoperevozchik.h"
#include <fstream>
using namespace std;
class Poezd:Gruzoperevozchik
{
public:
	Poezd() : name("None"), date(0), qty(0), volume(0) {};
	Poezd(string n, int d, int q, string arr[], int v) {};
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
	void Print() override;
	void Read() override;
	~Poezd();
private:
	string name;
	int date;
	List<string> roadMap;
	int qty;
	int volume;
};

