#include<iostream>
using namespace std;

class Machine{
public:
    virtual void print() = 0;
    virtual void scan()=0;
    virtual void fax()=0;

    virtual ~Machine() = default;

};

class Simplemachine : public Machine{
public:
    void print() override{
        cout<<"MAchine is printing"<<endl;
    }

    void scan() override{
        //not supported

    }

    void fax() override{
        //not supported
    }

};



int main(){
    return 0;
}