#include<iostream>
using namespace std;
class giveup{
    public:
    int value=50;
};

int main(){
    giveup fail;
    int giveup::*ptr;
    ptr=&giveup::value;

    cout<<"valuse should be: "<<fail.*ptr<<endl;


}