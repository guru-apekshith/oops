#include<iostream>
using namespace std;
class something{
    int a,b=0;
    public:
    something(int x){
        a=x;
        b=a;
        cout<<"object 1"<<a<<b<<"\n";
    }
    something(something &obj){
        a=obj.a;
        b=a;
        cout<<"object 2"<<a<<b<<"\n";
    }

};

int main(){
    int x;
    cout<<"enter an intiger: ";
    cin>>x;
    something obj1(x);
    something obj2=obj1;
    return 0;
}