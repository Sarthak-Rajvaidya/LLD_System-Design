//Encapsulation :- Hide data from user to make data confidentail

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

    void setpassword(string p){
        password=p;
    }
    string getpassword(){
        return password;
    }

};



int main(){
    Account a1;
    a1.username = "Sarthak";
    a1.userID = 201;
    a1.setbalance(25000);
    a1.setpassword("KAnha@123");

    cout<<a1.getbalance()<<endl;
    cout<<a1.getpassword()<<endl;



    return 0;
}