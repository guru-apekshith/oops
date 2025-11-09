#include<iostream>
using namespace std;
class point{
    public:
    int x,y;
};
int main(){
    point p1,*p2;
    p2=&p1;
    p1.x=10;//use of dot operator
    p2->y=20;//use of arrow operator
    std::cout<<"the value of x and y are"<<p2->x<<" and "<<p1.y<<endl; //using both operators but the otherway around
    return 0;
}