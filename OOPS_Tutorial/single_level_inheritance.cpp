// this is single level inheritance
#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Class A"<<endl;
    }
};
class B:public A{
    public: 
    B(){
        cout<<"Class B"<<endl;
    }
};
int main(){
    B type1;
    return 0;
}
// OUTPUT

//Class A
//Class B
