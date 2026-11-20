//Why we use ISP because there are such classes which inherit properties from above but doesnt support is but it need to execute so we use ISP as it deivides into smaller clasees and all.......

#include<iostream>
using namespace std;

//Seperrate interfaces 

class Printer{
public:
    virtual void print() = 0;

    virtual ~Printer() = default;

};

class Scanner{
public:
    virtual void scan() =0;

    virtual ~Scanner() = default;

};

class Faxer{
public:
    virtual void fax() = 0;
    virtual ~Faxer() = default;

};

class SimplePrinter : public Printer{
public:
    void print() override{
        cout<<"PRinting the data"<<endl;
    }

};

class MultiplePrinter : public Scanner,public Faxer{
public:
    void scan() override{
        cout<<"Scanning the machine"<<endl;


    }
    void fax() override{
        cout<<"Faxing the machine"<<endl;

    }


};

class MultifunctionPrinter: public Printer,public Scanner,public Faxer{
public:
    void print() override{
        cout<<"Pritning the whole data of the machine "<<endl;
    }
    void scan() override{
        cout<<"Scanning the whole data of the machine"<<endl;
    }
    void fax() override{
        cout<<"Faxing the whole machine data"<<endl;
    }
};




int main(){
    SimplePrinter simple;
    MultiplePrinter multiple;
    MultifunctionPrinter Multfunc;

    simple.print();

    multiple.fax();
    multiple.scan();


    Multfunc.print();
    Multfunc.scan();
    Multfunc.fax();

    return 0;

}