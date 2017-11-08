#include <iostream>
#include <vector>
 
using namespace std;
 
struct MyStruct{
    char name[255];
    int mark;
    bool status;
};
 
 
int main()
{
    
 
     vector <MyStruct> v;  //Вектор v содержит структуры типа MyStruct
  MyStruct Student; //Чтобы поместить в структуру объект, объект должен существовать
 
 
  v.push_back(Student); //Поместили одну структуру. По логике нужно ее сейчас и заполнить, но я пониже заполню
  
 
  v.at(0).mark=9; //Записали данне в одну структуру
  v.at(0).name="Grygoriev";
  v.at(0).status=1;
  
 for(int i=1; i<=7; i++){
      v.push_back(Student);
      cin>>
  
//Вывели элементы вектора на экран. Там сейчас два объекта.
 for (vector<MyStruct>::iterator it=v.begin();it!=v.end();it++){
    cout<<it->Fam<<"  "<<it->Age<<"  лет\n";
  }
}
