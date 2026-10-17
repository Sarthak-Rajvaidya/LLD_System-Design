#include<iostream>
#include<string>

using namespace std;


class Account{
private:
    double balance;
    string password;


public:
    string username;
    int userID;


    void setbalance(double b){
        balance = b;
    }
    double getbalance(){
        return balance;
    }

};



int main(){
    Account a1;
    a1.username = "Sarthak";
    a1.userID = 201;
    a1.setbalance(25000);

    cout<<a1.getbalance()<<endl;



    return 0;
}