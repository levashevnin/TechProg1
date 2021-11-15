#pragma once
#include <string>
#include <iostream>
#include "List.h"
#include "Gruzoperevozchik.h"
#include <fstream>
using namespace std;
class Samolet:Gruzoperevozchik
{
public:
	Samolet() : type("None"), length(0), height(0), width(0) {};
	Samolet(string t, double l, double h, double w, string arr[]) {};
	Samolet(const Samolet& other) {};
	void setType(string t);
	void setDimensions(double l, double h, double w);
	void setSities(string arr[]);
	string getType();
	double getLength();
	double getHeight();
	double getWidth();
	string * getCities();
	void Print() override;
	void Read() override;
	~Samolet();
private:
	string type;
	double length;
	double height;
	double width;
	List<string> cities;
};
