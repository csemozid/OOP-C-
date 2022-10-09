#include <iostream>
using namespace std;

class Card {
    string bookTitle;
    string authorName;
    int noOfCopies;

    public:
    void store(string title, string author, int copies);
    void show();
};

void Card::store(string title, string author, int copies) {
    bookTitle = title;
    authorName = author;
    noOfCopies = copies;
}

void Card::show() {
    cout << "Book Title: " << bookTitle << endl;
    cout << "Author Name: " << authorName << endl;
    cout << "Number of Copies: " << noOfCopies << endl;
}

int main() {
    Card ob1, ob2;
    ob1.store("No Lies", "Abdul Mozid", 23);
    ob1.show();
    return 0;
}