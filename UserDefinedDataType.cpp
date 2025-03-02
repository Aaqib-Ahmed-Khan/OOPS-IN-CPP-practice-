#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float gpa;
};
int main (){
    student s;
    s.name="aaqib";
    s.rno=62;
    s.gpa=4.0;

    student s1;
    s1.name="ahmed";
    s1.rno=62;
    s1.gpa=4.0;
cout<<s.name<<endl;
return 0;
}