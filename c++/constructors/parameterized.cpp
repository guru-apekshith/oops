#include<iostream>
using namespace std;
class me{
    int age;
    public:
    me(int old){
        age=old;
        if(age>=18){
            cout<<"you can enter ";
        }
        else{
            cout<<"FUCK off, go get your Parents";
        }
    }
};

int main(){
    int old;
    cout<<"how old are you? ";
    cin>>old;
    me m1(old);
    return 0;
}