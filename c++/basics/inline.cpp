#include<iostream>
using namespace std;
void add(int *a,int *b,int *sum){
    cout<<"sum = "<<*a+b;


}
int main(){
    int *a= new int,*b= new int;
    int *sum;
    add(a,b,sum);
}