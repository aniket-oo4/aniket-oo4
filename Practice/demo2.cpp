#include<iostream>
using namespace std;
class employee
{
    public:
    int id,age;
    char name[20];
    employee()
    {
        cout<<"enter employee name \n";
        cin>>name;
        cout<<"enter employee id \n";
        cin>>id;
        cout<<"enter employee age \n";
        cin>>age;             
    }
    void display()
    {
        cout<<" employee name ::"<<name<<endl;
        cout<<" employee id ::"<<id<<endl;
        cout<<" employee age ::"<<age<<endl;
    }
};
class salary:public employee{
    int sal,months;
     public:
        int sum;
    salary()
    {
        cout<<"enter your salary :";
        cin>>sal;
        cout<<"entrr no of months your work ::";
        cin>>months;
     }
    inline int calculate()
     {
       
        sum=sal*months;
        return sum;
     }
     void display1()
     {
        cout<<" employee name ::"<<name<<endl;
        cout<<" employee id ::"<<id<<endl;
        cout<<" employee age ::"<<age<<endl;
        cout<<"salary :::"<<sal<<endl;
        cout<<"number of months your spent ::"<<months<<endl;
        cout<<"total salary you earned ::"<<calculate()<<endl; 
     }

};



int main(){
    // employee obj;
    // obj.display();
    salary obj1;
    obj1.display1();
    
return 0;
}