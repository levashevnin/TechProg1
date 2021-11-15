#include "Avto.h"

Avto::Avto(int d, string b, string m, List<AvtoRoadMap> c) {
	cout << "�������� ����������� ������ Avto" << endl;
	date = d;
	brand = b;
	model = m;
	cities = c;
}
Avto::Avto(const Avto& other) {
	cout << "�������� ����������� ����������� ������ Avto" << endl;
	date = other.date;
	
	brand = other.brand;
	model = other.model;
	cities = other.cities;
}

void Avto::setDate(int d) {
	date = d;
}
void Avto::setBrand(string b) {
	brand = b;
}
void Avto::setModel(string m) {
	model = m;
}
void Avto::setCity(List<AvtoRoadMap> c) {
	cities = c;
}

int Avto::getDate() {
	return date;
}
string Avto::getBrand() {
	return brand;
}
string Avto::getModel() {
	return model;
}
AvtoRoadMap* Avto::getCity() {
	int size = cities.getSize();

	AvtoRoadMap* arr = new AvtoRoadMap[size];
	for (int i = 0; i < size; i++) {
		arr[i] = cities[i];
	}
	return arr;
}

void Avto::Print() {
	string path = "transport.dat";
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open()) {
		cout << "������ �������� �����" << endl;
	}
	else {
		fout.write((char*)this, sizeof(Avto));
	}
}
void Avto::Read() {
	string path = "transport.dat";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "������ �������� �����";
	}
	else {
		fin.read((char*)this, sizeof(Avto));
	}
	fin.close;
}
Avto::~Avto(){
	cout << "�������� ���������� Avto" << endl;


}