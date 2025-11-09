#include<iostream>
using namespace std;
class person{
    public:
    person(int a){
        cout<<"good morning sir";
    }
    person(char b){
        cout<<"buy a mirror....sir";
    }
};

int main(){
    int no;
    cout<<"enter 0/1 for a surprise: ";
    cin>>no;
    if(no==0){
        person p1(no);
    }
    else{
        person p2('@');
    }
    return 0;
}