
#include "Poezd.h"
//конструкторы:
Poezd::Poezd(string n, int d, int q, string arr[], int v) {
	cout << "Вызвался конструктор класса Poezd"<< endl;
	name = n;
	date = d;
	qty = q;
	volume = v;
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		roadMap.pushBack(arr[i]);
	}
}
Poezd::Poezd(const Poezd& other) {
	cout << "Вызвался конструктор копирования класса Poezd"<< endl;
	name = other.name;
	date = other.date;
	qty = other.qty;
	volume = other.volume;
	roadMap = other.roadMap;
};
//сеттеры:
void Poezd::setName(string n) {
	name = n;
}
void Poezd::setDate(int d) {
	date = d;
}
void Poezd::setQty(int q) {
	qty = q;
}
void Poezd::setVolume(int v) {
	volume = v;
}
void Poezd::setRoadMap(string arr[]) {
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		roadMap.pushBack(arr[i]);
	}
}
//геттеры:
string Poezd::getName() {
	return name;
}
int Poezd::getDate() {
	return date;
}
int Poezd::getQty() {
	return qty;
}
int Poezd::getVolume() {
	return volume;
}
string* Poezd::getRoadMap() {
	int size = roadMap.getSize();
	string* arr = new string[size];
	for (int i = 0; i < size; i++) {
		arr[i] = roadMap[i];
	}
	return arr;
}
void Poezd::Print() {
	string path = "Poezda.dat";
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		fout.write((char*) this, sizeof(Poezd));
	}
}
void Poezd::Read() {
	string path = "Poezda.dat";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла";
	}
	else {
		fin.read((char*)this, sizeof(Poezd));
	}
	fin.close;
}
Poezd::~Poezd() {
	cout << "Вызвался деструтор Poezda" << endl;
}