#include<iostream>
using namespace std;
class student{
string name;
int roll;
float marks;
public:

    void details(string,n,r,m);
{
    name=n;
    roll=r;
    marks=m
}
void display()
{
    cout<<"name:","roll:"<<roll<<,"marks":<<marks<<endl;
}
};
int main()
{
    student s1,s2,s3;
    s1.details("jahnavi"101,89.5);
    s2.details("bhavya"102;76.0);
    s3.details("navya"103,92.3);
    cout<<"student records:\n";
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
