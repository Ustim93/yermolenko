#include <iostream>

 
using namespace std;
 
struct MyStruct{
    char name[255];
    int mark;
    bool status;
};
 
void print(const f obj[], int n)
{
 
   fot(int j = 0; j<n; j++)
   cout<<"Name:\t"<<obj[j].name<<"\t Mark: \t"<<obj[j].mark<<"\t Status \t"<<obj[j].status<<endl;
} 
 
int main()
{
    
 int n = 9;
  
  MyStruct student[n]={};
 
 for(int i=0;i<n;i++)
 {
    cout<<"\n Name:\t";
    cin>>student.name;
  
  
    cout<<"\n Mark:\t";
    cin>>student.mark;
  
  
    cout<<"\n Status:\t";
    cin>>student.status;
 }
  
  
  
  
 
  
  
 
 
 
 
  
  
 for(int i=1; i<=7; i++){
      v.push_back(Student);
      cin>>
  
//Вывели элементы вектора на экран. Там сейчас два объекта.
 for (vector<MyStruct>::iterator it=v.begin();it!=v.end();it++){
    cout<<it->Fam<<"  "<<it->Age<<"  лет\n";
  }
}
