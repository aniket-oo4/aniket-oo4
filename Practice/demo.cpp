#include<stdio.h>
#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    char name[70],gender[30];
    student()
    {
      cout<<"enter name :";
      cin.getline(name,sizeof(name));
      cin.getline(gender,sizeof(gender));
      cout<<"enter roll number  :";
      cin>>roll;
      cout<<"Enter gender  :"<<endl;
     

      
    }
    void display(){
        cout<<"name of the student is :"<<name<<endl;
        cout<<"roll number is :"<<roll<<endl;
        cout<<" Gender is :"<<gender;
    }
};
int main(){

    // int n,i;
    // cout<< "how many students do you want";
    // cin>>n;
    student obj1;
    obj1.display();
    return 0;
}