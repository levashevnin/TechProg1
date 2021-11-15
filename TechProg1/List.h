#pragma once

#include <ctime>
#include <iostream>
#include <string>
using namespace std;

template<class T>
class List
{
	class Node
	{
	public:
		T data;
		Node* next;

		Node(T t = T(), Node* n = nullptr);
	};
	Node* head;
	int size;

public:
	List();
	~List();
	void pushBack(T value);
	void pushFront(T value);
	int getSize() const;
	T& operator[] (int);
	void popFront();
	void popBack();
	void clear();
	void insert(T value, int index);
	void removeAt(int index);
};
