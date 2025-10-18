#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    int publishedYear;

   
    Book(string t, string a, int y) {
        title = t;
        author = a;
        publishedYear = y;
    }

    
    Book() {
        title = "";
        author = "";
        publishedYear = 0;
    }


    void display() {
        cout << "Title: " << title << ", Author: " << author
             << ", Year: " << publishedYear << endl;
    }
};

int main() {

    Book books[3];

   
    books[0] = Book("1984", "George Orwell", 1949);
    books[1] = Book("To Kill a Mockingbird", "Harper Lee", 1960);
    books[2] = Book("The Great Gatsby", "F. Scott Fitzgerald", 1925);


    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << ":\n";
        books[i].display();
        cout << endl;
    }

    return 0;
}
