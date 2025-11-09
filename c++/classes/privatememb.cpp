#include<iostream>
using namespace std;

class idk{
    int a;
    private:
    int input(){
        int n;
        cin>>n;
        return n;
    }

    public:
    void full(){
        int x=input();
        cout<<x;
    }
};

int main(){
    idk i1;
    cout<<"enter an intiger";
    i1.full();
    return 0;
}