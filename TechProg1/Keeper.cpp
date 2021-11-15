#include "Keeper.h"

void Keeper::setPlanes(Samolet s) {
	planes.pushBack(s);
}
void Keeper::setTrains(Poezd p) {
	trains.pushBack(p);
}
void Keeper::setCars(Avto a) {
	cars.pushBack(a);
}

Samolet* Keeper::getPlanes() {
	int Size = planes.getSize();
	Samolet* sam = new Samolet[Size];
	for (int i = 0; i < Size; i++) {
		sam[i] = planes[i];
	}
	return sam;
}
Poezd* Keeper:: getTrains() {
	int Size = trains.getSize();
	Poezd* poz = new Poezd[Size];
	for (int i = 0; i < Size; i++) {
		poz[i] = trains[i];
	}
	return poz;
}
	Avto* Keeper::getCars() {
	int Size = cars.getSize();
	Avto* av = new Avto[Size];
	for (int i = 0; i < Size; i++) {
		av[i] = cars[i];
	}
	return av;
}

void Keeper::PrintInFile() {
	Size1 = planes.getSize();
	Size2 = trains.getSize();
	Size3 = cars.getSize();
	planes[0].Print(Size1);
	trains[0].Print(Size2);
	planes[0].Print(Size3);
	string path = "transport.dat";
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		for (int i = 0; i < Size1; i++) {
			fout.write((char*)& planes, sizeof(Samolet));
		}
		for (int i = 0; i < Size2; i++) {
			fout.write((char*)& trains, sizeof(Poezd));
		}
		for (int i = 0; i < Size3; i++) {
			fout.write((char*)& cars, sizeof(Avto));
		}
	}
	
}
void Keeper::ReadFile() {
	Samolet a;
	Poezd b;
	Avto c;
	Size1 = a.Read()[0];
	Size2 = a.Read()[1];
	Size3 = a.Read()[2];
	string path = "transport.dat";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла";
	}
	else {
		for (int i = 0; i < Size1; i++) {
			fin.read((char*)& a, sizeof(Samolet));
			planes.pushBack(a);
		}
		for (int i = 0; i < Size2; i++) {
			fin.read((char*)& b, sizeof(Poezd));
			trains.pushBack(b);
		}
		for (int i = 0; i < Size3; i++) {
			fin.read((char*)& c, sizeof(Avto));
			cars.pushBack(c);
		}
	}
	
}