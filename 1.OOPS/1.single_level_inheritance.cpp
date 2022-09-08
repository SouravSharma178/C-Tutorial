// this is single-level inheritance
#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Class A"<<endl;
    }
};
// class B{
//     public:
//     B(){
//         cout<<"Class B"<<endl;
//     }
// };
class C:public A{
    public: 
    C(){
        cout<<"Class C"<<endl;
    }
};
int main(){
    C type1;
    return 0;
}
