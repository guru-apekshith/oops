#include<iostream>
using namespace std;
class weight{
    int kg;
    public:
    int read(){
        cout<<"enter your weight: ";
        cin>>kg;
        cout<<"original weight: "<<kg;
        return kg;
    }
    void operator ++(){
        kg++;
    }
    void print(){
        cout<<"\n new weight: "<<kg;
    }
};
int main(){
    weight w1;
    int mass;
    w1.read();
    ++w1;
    w1.print();
}