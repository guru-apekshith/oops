#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
     complex(int r,int i){
        real=r;
        img=i;
    }
    void display(){

        cout<<real<<"+ i"<<img<<endl;
    }
    complex operator +(complex c){
        complex ctemp(0,0);
        ctemp.real=real+c.real;
        ctemp.img=img+c.img;
        return ctemp;
    }
};


int main(){
    complex c1(1,2);
    complex c2(2,5);
    complex c3(0,0);
    c3=c1+c1;
    c3.display();
    return 0;
}