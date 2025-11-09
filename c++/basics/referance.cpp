#include<iostream>
using namespace std;
int array[5]={1,2,3,4,5,};
void funct(int &n);
int main(){
    int n;
    cout<<"enter element from 1-5:";
    cin>>n;
    funct(n);
}

void funct(int &n){
    int count;
    for(int i=0;i<5;i++){
        if(array[i]==n){
         cout<<"element in position"<<i+1;
        }
    }
}