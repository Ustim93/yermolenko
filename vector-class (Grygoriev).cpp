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
~vector();
void s
