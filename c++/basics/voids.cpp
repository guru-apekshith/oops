#include<iostream>
using namespace std;
void funcvoid(int *pt1){
    cout<<"value used is"<<*pt1<<endl;
    int **ptr;
    ptr =&pt1;
    cout<<"the pointer now has:"<<**ptr<<endl;
}

int main(){
    int *pt1;
    int value=5;
    pt1=&value;
    funcvoid(pt1);
}