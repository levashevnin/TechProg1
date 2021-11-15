// TechProg1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>

using namespace std;
#include "Keeper.h"
#include "Samolet.h"
#include "Poezd.h"
#include "Avto.h"
#include "List.h"
#include "Gruzoperevozchik.h"

struct AvtoRoadMap
{
	string cityName;
	int hours;
	int volume;
};
int main()
{
	List<AvtoRoadMap> avto;
	Keeper p;
	Samolet a;
	string type;
	string city;
	Poezd b;
	string name;
	int date;
	int q;
	int v;
	int hours, volume;
	Avto c;
	unsigned choise = 0;
	do {
		cout << "Введите какое действие с Грузоперевозчиком вы хотите сделать:" << endl;
		cout << "1 - прочитать .dat файл" << endl;
		cout << "2 - записать в .dat файл" << endl;
		cout << "3 - добавить Самолет" << endl;
		cout << "4 - добавить Поезд" << endl;
		cout << "5 - добавить Машину" << endl;
		
		cin >> choise;
		switch (choise){

		case 1:
			p.ReadFile();
			break;
		case 2:
			p.PrintInFile();
			break;
		case 3:
			int l, h, w;
			cout << "Введите тип самолета ";
			cin >> type;
			a.setType(type);
			type = "";
			cout << "Введите длину самолета ";
			cin >> l;
			cout << "Введите высоту самолета ";
			cin >> h;
			cout << "Введите ширину самолета ";
			cin >> w;
			a.setDimensions(l, h, w);
			l = h = w = 0;
			cout << "Введите города, которые посещает самолет через пробел или ентер. Когда закончите"<< endl
				<< "просто нажмите stop или STOP"<< endl;
			
			do {
				cin >> city;
				if(city != "stop" || city != "STOP")
				a.setSities(city);
				city = "";
			} while (city != "stop" || city != "STOP");
			
			break;
		case 4:
			cout << "Введите наименование поезда ";
			cin >> name;
			b.setName(name);
			name = "";
			cout << "Введите дату изготовления поезда ";
			cin >> date;
			b.setDate(date);
			date = 0;
			cout << "Введите количество вагонов ";
			cin >> q;
			b.setQty(q);
			q = 0;
			cout << "Введите объем поезда ";
			cin >> v;
			b.setVolume(v);
			v = 0;
			cout << "Введите полный маршрут поезда. Вводите города последовательно, друг "<<
				endl<<"за другом, а когда закончите просто напишите stop или STOP";
			do {
				cin >> city;
				if (city != "stop" || city != "STOP")
					b.setRoadMap(city);
				city = "";
			} while (city != "stop" || city != "STOP");
			break;
		default:
			throw exception("вы ввели некорректное действие.");
			break;
		case 5:
			cout << "Введите дату изготовления машины ";
			cin >> date;
			c.setDate(date);
			cout << "Введите брэнд машины ";
			cin >> name;
			c.setBrand(name);
			name = "";
			cout << "Введите модель машины ";
			cin >> name;
			c.setModel(name);
			cout << "Сколько городов может взять на себя эта машина?   ";
			cin >> q;
			cout << endl;
			
			while (q > 0) {
				AvtoRoadMap buf;
				cout << "Введите наименование города, а так же опеределенное количество часов для доставки и объема груза" << endl;
				cout << "Введите город: ";
				cin >> city;
				buf.cityName = city;
				cout << "Введите количество часов: ";
				cin >> hours;
				buf.hours = hours;
				cout << "Введите объем груза: ";
				cin >> volume;
				buf.volume = volume;
				avto.pushBack(buf);
			}

		}
	} while (choise != 13);
	
}