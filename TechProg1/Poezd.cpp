
#include "Poezd.h"
//������������:
Poezd::Poezd(string n, int d, int q, string arr[], int v) {
	cout << "�������� ����������� ������ Poezd"<< endl;
	name = n;
	date = d;
	qty = q;
	volume = v;
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
		roadMap.pushBack(arr[i]);
	}
}
Poezd::Poezd(const Poezd& other) {
	cout << "�������� ����������� ����������� ������ Poezd"<< endl;
	name = other.name;
	date = other.date;
	qty = other.qty;
	volume = other.volume;
	roadMap = other.roadMap;
};
//�������:
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
void Poezd::setRoadMap(string str) {
	
		roadMap.pushBack(str);
	
}
//�������:
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
void Poezd::Print(int n) {
	string path = "Poezda.dat";
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open()) {
		cout << "������ �������� �����" << endl;
	}
	else {
		fout << n;
	}
	fout.close();
}
int *Poezd::Read() {
	int arr[3];
	string path = "Poezda.dat";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "������ �������� �����";
	}
	else {
		for (int i = 0; i < 3; i++) {
			fin >> arr[i];
		}
	}
	fin.close;
	return arr;
}
Poezd::~Poezd() {
	cout<<"�������� ��������� Poezda"<<endl;
}