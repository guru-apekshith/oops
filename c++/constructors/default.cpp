#include<iostream>
using namespace std;
class me{
    int age;
    public:
    me(){
            int age;
    cout<<"enter age: ";
    cin>>age;
        if(age>=18){
            cout<<"major";
        }
        else{
            cout<<"minor";
        }
    }
};

int main(){
    me p1;
    return 0;
}