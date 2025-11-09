#include<iostream>
using namespace std;
class employee{
    char name[100];
    char company[100];
    int sal;
    public:
    void id();
    void display(){
        cout<<"\n"<<name;
        cout<<"\n"<<sal;
        cout<<"\n"<<company;
    }
};
void employee::id(){
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter company name: ";
    cin>>company;
    cout<<"enter salary: ";
    cin>>sal;
}

int main(){
    employee e[3];
    e[0].id();
    e[1].id();
    e[2].id();
    e[3].id();
    e[0].display();
    e[1].display();
    e[2].display();
    e[3].display();
    return 0;

}