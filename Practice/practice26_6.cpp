


#include<iostream>
using namespace std;
int a=28;
int main()
{
    /*int a=89;
    cout<<a<<endl;
    cout<<::a<<endl;
    // ******** float, double and  lonmg double Literals *********

    float d=34.2f; // f == float 
    long double e=34.2l;    // l = long double
    cout<<"value of d :"<<d<<endl<<"value of e is :"<<e<<endl;
    cout<<"sixe of 34.4 ::"<<sizeof(34.4)<<endl; 
    cout<<"sixe of 34.4f::"<<sizeof(34.4f)<<endl; 
    cout<<"sixe of 34.4F::"<<sizeof(34.4F)<<endl; 
    cout<<"sixe of 34.4l::"<<sizeof(34.4l)<<endl; 
    cout<<"sixe of 34.4L::"<<sizeof(34.4L)<<endl; 
 */
    // **********  // type casting in cpp  *************
    float x=783.7748;
    cout<<x<<endl;
    cout<< "x:"<<(int)x<<endl;
    cout<< "x:"<<int(x)<<endl;
    int y=73;
    cout<<y<<endl;
    cout<< "y:"<<(float)y<<endl;
    cout<<"addition is :"<<x+y<<endl;
    cout<<"addition is :"<<(int)x+y<<endl;
    cout<<"addition is :"<<int(x)+y<<endl;
    
    return 0;
}