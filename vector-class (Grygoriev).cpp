// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Vector
{
private:
	int *pointer; //вказівник на масив, що міститься в стеку
	int size;//розмір (к-сть елементів) стеку
	int capacity; //сколько элементов мы можем хранить в выделенной памяти на куче.
public:
	vector(int capacity)
	{
		pointer = new int[capacity];
		this->capacity = capacity;
		tsis->size = 0;
	}

	int size
	{ return size; }

		void push_back(int element)
	{
		size++;
		if (size <= capacity)
			pointer[size - 1] = element;
		if (size > capacity)
		{
			int *temp = new int[size];
			for (int i = 0; i<(size - 1); i++)
			{
				temp[i] = pointer[i];
			}

			temp[size - 1] = element;

			delete[] pointer;

			pointer = new int[size];

			for (int i = 0; i<size; i++)
			{
				pointer[i] = temp[i];
			}

			delete[] temp;
			capacity++;

		}
	}

	int at(int i) { return pointer[i]; }



	~vector() { delete[] pointer; }
}

int main()
{
	Vector object(10);

	for (int j = 1; j = 5; j++) object.push_back(2 * j);

	cout << object.size << endl;

	for (int j = 1; j = 5; j++) cout<<object(j-1);

    return 0;
}

