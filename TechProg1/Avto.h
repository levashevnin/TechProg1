#pragma once
#include <string>
#include <iostream>
#include "List.h"
using namespace std;
class Avto
{
private:
	int date;
	string brand;
	string model;
	List<AvtoRoadMap> cities;
public:
	Avto() : date(0), brand("none"), model("none") {};
	Avto(int d, string b, string m, AvtoRoadMap c) {};
	Avto(const Avto& other) {};
	void setDate(int d);
	void setBrand(string b);
	void setModel(string m);
	void setCity(AvtoRoadMap c);
	int getDate();
	string getBrand();
	string getModel();
	AvtoRoadMap getCity();
	~Avto();
};

struct AvtoRoadMap
{
	string cityName;
	int hours;
	int volume;
};