#include <iostream>
using namespace std;


class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};


class KidUsers : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() override {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        } else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};


class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() override {
        if (age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        } else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

int main() {

    KidUsers kid;

    kid.age = 10;
    kid.bookType = "Kids";
    kid.registerAccount();
    kid.requestBook();

    kid.age = 18;
    kid.bookType = "Fiction";
    kid.registerAccount();
    kid.requestBook();

    cout << "--------------------------" << endl;

    AdultUser adult;

    adult.age = 5;
    adult.bookType = "Kids";
    adult.registerAccount();
    adult.requestBook();

    adult.age = 23;
    adult.bookType = "Fiction";
    adult.registerAccount();
    adult.requestBook();

    return 0;
}