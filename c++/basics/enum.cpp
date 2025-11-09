#include<iostream>
using namespace std;
enum day{
    mon,tue,wed,thu,fri,sat,sun
};
enum month{
    jan=1,apr=4,sept=9,dec=12
};
int main(){
    day today=wed;
    month now=sept;
    cout<<"today is day number: "<<today+1<<endl;
    cout<<"month number is: "<<now+2<<endl;
}