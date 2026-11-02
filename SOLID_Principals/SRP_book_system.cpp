// #include<iostream>
// using namespace std;

// class Book{
// public:
//     void booktitle(){
//         int title;
//     }
    


// };

// class Bookauthor{
// public:
//     void author(){
//         int author;
//     }

    
// };

// class BookPrice{
// public:
//     void price(){
//         double price;
//     }

// };


// int main(){
//     return 0 ;
// }

//Following is better SRP

#include<iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    double price;
public:
    Book(string t,string a, double p){
        title = t;
        author = a;
        price = p;

    }

    void displaydetails(){
        cout<<title<<" "<<author<<" "<<price;
    }

};

class BookPrinter {
public:
    void printBook(Book b) {
        // Printing responsibility
    }
};

class BookRepository {
public:
    void saveBook(Book b) {
        // Database/file storage responsibility
    }
};

int main(){
    return 0;
}