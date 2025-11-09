#include<iostream>
using namespace std;
class idk{
    public:
    void display(int n);
};
inline void idk::display(int n){
    cout<<n<<endl;
}

int main(){
    int n;
    idk i1;
    cin>>n;
    i1.display(n);
    return 0;

}