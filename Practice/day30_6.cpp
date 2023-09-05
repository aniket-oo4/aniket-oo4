#include<iostream>
using namespace std;


 typedef struct emp
{
    int id;
    char name1;
    float sal;

} ep;
union myunion// union is used to manage memory properly  it uses only one data type variable at a time 
{
    int rice;
    char car;
    float dollar;

};

int main()
{
    // struct emp aniket;
    ep aniket;// type def used to remove long needed sentence struct structure name to typedef name 
    aniket.id=1;
    aniket.name1='a';
    aniket.sal=12000;
    cout<<aniket.id<<endl<<aniket.name1<<endl<<aniket.sal<<endl;
    cout<<"union code output here **********"<<endl;
    union myunion m1;
    m1.rice=20;
    cout<<m1.rice<<endl;
    m1.car='l';
     cout<<m1.car<<endl;
      cout<<"rice"<<m1.rice<<endl;
      cout<<"enum code output here (***********)"<<endl;
      enum meal{sunday,monday,tuesday,wednesday,thurseday,friday,saturday};// enumeration wil retuen the string data into numerical format
      cout<<wednesday<<endl;
      meal mymeal=friday;
      if(mymeal==5)
      cout<<true;
      else
      cout<<false;
  
    
return 0;
}