#include<iostream>
using namespace std;

class Machine{
public:
    virtual void print() = 0;
    virtual void scan()=0;
    virtual void fax()=0;

    virtual ~Machine() = default;

};



int main(){
    return 0;
}