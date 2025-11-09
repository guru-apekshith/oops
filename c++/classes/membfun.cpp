#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:
    void read(){
        cout<<"enter the name of s1: ";
        cin>>name;
        cout<<"enter the roll number: ";
        cin>>roll;
    }
    void display();
};

void student::display(){
        cout<<"the name is: "<<name<<"\n the roll no is: "<<roll<<endl;
    }

int main(){
    student s1;
    s1.read();
    s1.display();
    return 0;
}