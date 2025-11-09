#include<iostream>
using namespace std;
class employee{
    string name;
    string company;
    int salery;

    void string(){
        cout<<"enter the employee name: "<<endl;
        cin>>name;
        cout<<"enter the company: ";
        cin>>company;
    }

    public:
    void id();
    void display();
};
void employee::display(){
    cout<<"\n"<<name;
    cout<<"\n"<<company;
    cout<<"\n"<<salery;
}

void employee::id(){
    employee::string();
    cout<<"enter employee salery: ";
    cin>>salery;
}

int main(){
    employee e1;
    e1.id();
    e1.display();
    return 0;
}