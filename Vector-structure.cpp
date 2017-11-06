#include <iostream>
#include <vector>
 
using namespace std;
 
struct MyStruct{
    char name[255];
    int mark;
};
 
 
int main()
{
    
 
     vector <MyStruct> v;  //Вектор v содержит структуры типа MyStruct
  MyStruct Student; //Чтобы поместить в структуру объект, объект должен существовать
 
 
  v.push_back(Student); //Поместили одну структуру. По логике нужно ее сейчас и заполнить, но я пониже заполню
  
 
  v.at(0).Age=16; //Записали данне в одну структуру
  strcpy(v.at(0).Fam,"Grygoriev");
 
  v.at(1).Age=32; //Записали данные в другую структуру
  strcpy(v.at(1).Fam,"Смирнов");
 
//Вывели элементы вектора на экран. Там сейчас два объекта.
 for (vector<MyStruct>::iterator it=v.begin();it!=v.end();it++){
    cout<<it->Fam<<"  "<<it->Age<<"  лет\n";
  }
}
