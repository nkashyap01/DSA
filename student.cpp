#include <iostream>
using namespace std;
class A
{
    int r,m1,m2,m3,tm,tp;
    
    public:
    A(int roll,int marks1,int marks2,int marks3)
    {
        r=roll;
        m1=marks1;
        m2=marks2;
        m3=marks3;
    }
    void input()
    {
        cout<<"Enter roll number";
        cin>>r;
         
     cout<<"Enter marks of 1st subject";
        cin>>m1;
        cout<<"Enter marks of 2nd subject";
        cin>>m2;
         cout<<"Enter marks of 3rd subject";
        cin>>m3;
        
    }
    void output()
    {
        tm=m1+m2+m3;
        tp=tm/3;
        cout<<"Total marks is "<<tm;
        cout<<"\nTotal percentage is"<<tp;
    }
};
int main()
{
    A a(1,10,20,30);
    a.output();
    a.input();
    a.output();
}