#include <iostream>
using namespace std;

class vector
{
private:
int *pointer; //вказівник на масив, що міститься в стеку
int size;//розмір (к-сть елементів) стеку
int capacity; //
public:
vector(int capacity);
~vector();
void s
