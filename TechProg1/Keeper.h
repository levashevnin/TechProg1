#pragma once
#include <string>
#include <iostream>
#include "List.h"
#include "Gruzoperevozchik.h"
#include <fstream>
#include "Avto.h"
#include"Poezd.h"
#include "Samolet.h"
class Keeper
{
public:
	void setPlanes(Samolet samolet);
	void setTrains(Poezd poezd);
	void setCars(Avto avto);
	Samolet* getPlanes();
	Poezd* getTrains();
	Avto* getCars();
	void PrintInFile();
	void ReadFile();

private:
	List<Samolet> planes;
	List<Poezd> trains;
	List<Avto> cars;
	int Size1;
	int Size2;
	int Size3;
};

