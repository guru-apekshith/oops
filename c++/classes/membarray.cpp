#include<iostream>
using namespace std;
class arr{
    int array[10];
    public:
    void display();
    void reading(){
        cout<<"enter 10 intiger elements: ";
        for(int i=0;i<10;i++){
            cin>>array[i];
        }
    }
    
};
void arr::display(){
    cout<<"you entered: \n";
    for(int i=0;i<10;i++){
        cout<<array[i];
    }
}

int main(){
    arr a1;
    a1.reading();
    a1.display();
    return 0;
}