#pragma once
#include <string>
#include <iostream>
#include "List.h"
#include "Gruzoperevozchik.h"
#include <fstream>
using namespace std;
class Avto:Gruzoperevozchik
{
private:
	int date;
	string brand;
	string model;
	List<AvtoRoadMap> cities;
public:
	Avto() : date(0), brand("none"), model("none") {};
	Avto(int d, string b, string m, List<AvtoRoadMap> c) {};
	Avto(const Avto& other) {};
	void setDate(int d);
	void setBrand(string b);
	void setModel(string m);
	void setCity(List<AvtoRoadMap> c);
	int getDate();
	string getBrand();
	string getModel();
	AvtoRoadMap* getCity();
	void Print(int n) override;
	int* Read() override;
	~Avto();
};

struct AvtoRoadMap
{
	string cityName;
	int hours;
	int volume;
};