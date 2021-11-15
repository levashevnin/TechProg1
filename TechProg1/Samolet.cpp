#include "Samolet.h"

Samolet::Samolet(string t, double l, double h, double w, string arr[]) {
	cout << "Вызвался конструктор класса Samolet" << endl;
	type = t;
	length = l;
	height = h;
	width = w;
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		cities.pushBack(arr[i]);
	}
}
Samolet::Samolet(const Samolet& other) {
	cout << "Вызвался конструктор копирования класса Samolet" << endl;
	type = other.type;
	length = other.length;
	height = other.height;
	width = other.width;
	cities = other.cities;
}
//сеттеры:
void Samolet::setType(string t) {
	type = t;
}
void Samolet::setDimensions(double l, double h, double w) {
	length = l;
	height = h;
	width = w;
}
void Samolet::setSities(string arr[]) {
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		cities.pushBack(arr[i]);
	}
}
string Samolet::getType() {
	return type;
}
double Samolet::getLength() {
	return length;
}
double Samolet::getHeight() {
	return height;
}
double Samolet::getWidth() {
	return width;
}
string* Samolet::getCities() {
	int size = cities.getSize();
	string* arr = new string[size];
	for (int i = 0; i < size; i++) {
		arr[i] = cities[i];
	}
	return arr;
}

void Samolet::Print(int n) {
	string path = "transport.dat";
	ofstream fout;
	fout.open(path);
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		fout << n;
	}
	fout.close();
}
int *Samolet::Read() {
	int arr[3];
	string path = "transport.dat";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла";
	}
	else {
		for (int i = 0; i < 3; i++) {
			fin >> arr[i];
		}
	}
	fin.close();
	return arr;
}
Samolet::~Samolet() {
	cout << "Вызвался деструктор" << endl;
}