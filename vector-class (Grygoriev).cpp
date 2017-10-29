#include <iostream>
using namespace std;

class vector
{
private:
int *pointer; //вказівник на масив, що міститься в стеку
int size;//розмір (к-сть елементів) стеку
int capacity; //
public:
vector(int capacity) 
{
	pointer = new int[capacity];
	this ->capacity = capacity;
	tsis ->size = 0;
}

int size
{return size;}
	
void push_back (int element)
{
	size++;
	if(size <= capacity)
		pointer[size - 1] = element;
	if(size > capacity)
	{
		int *temp = new int[size];
		for(int i = 0; i<(size - 1); i++)
		{
			temp[i] = pointer[i];
		}
		
	        temp[size - 1] = element;
		
		delete [] pointer;
		
		pointer = new int[size];
		
		for(int i = 0; i<size; i++)
		{
			 pointer[i] = temp[i];
		}
		
		delete [] temp;
		capacity++;
		
	}
}
	
int at (int i) {return pointer[i];}
					  
	
	
~vector();
void s
