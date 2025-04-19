#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int bookID;
    bool isIssued;

    Book(string t,string a, int id){
        title = t;
        author=a;
        bookID=id;
        isIssued=false;
    }

    void displayBook() const {
        cout << "Book ID: " << bookID << " | Title: " << title << " | Author: " << author 
             << " | Available: " << (isIssued ? "No" : "Yes") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(string title,string author, int bookID) {
        books.push_back(Book(title, author, bookID));
        cout << "Book \"" << title << "\" added successfully.\n";
    }

    void removeBook(int bookID) {
        for (int i = 0; i < books.size(); ++i) {
            if (books[i].bookID == bookID) {
                books.erase(books.begin() + i);
                cout << "Book removed successfully.\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "No books available.\n";
        } else {
            for (int i = 0; i < books.size(); ++i) {
                cout << i + 1 << ". ";
                books[i].displayBook();
            }
        }
    }

    void issueBook(int bookID) {
        for (int i = 0; i < books.size(); ++i) {
            if (books[i].bookID == bookID) {
                if (!books[i].isIssued) {
                    books[i].isIssued = true;
                    cout << "Book \"" << books[i].title << "\" has been issued.\n";
                    return;
                } else {
                    cout << "Book is already issued.\n";
                    return;
                }
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(int bookID) {
        for (int i = 0; i < books.size(); ++i) {
            if (books[i].bookID == bookID) {
                if (books[i].isIssued) {
                    books[i].isIssued = false;
                    cout << "Book \"" << books[i].title << "\" has been returned.\n";
                    return;
                } else {
                    cout << "Book was not issued.\n";
                    return;
                }
            }
        }
        cout << "Book not found.\n";
    }
};

void menu() {
    cout << "\n1. Display Books\n"
         << "2. Add Book\n"
         << "3. Remove Book\n"
         << "4. Issue Book\n"
         << "5. Return Book\n"
         << "6. Exit\n";
}

int main() {
    Library library;
    int choice;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        string title;
        string author;
        int bookID;
        switch (choice) {
            case 1:
                library.displayBooks();
                break;
            case 2:
                cout << "Enter Book Title: ";
                getline(cin, title);
                cout << "Enter Book Author: ";
                getline(cin, author);
                cout << "Enter Book ID: ";
                cin >> bookID;
                library.addBook(title, author, bookID);
                break;
            case 3:
                cout << "Enter Book ID to remove: ";
                cin >> bookID;
                library.removeBook(bookID);
                break;
            case 4:
                cout << "Enter Book ID to issue: ";
                cin >> bookID;
                library.issueBook(bookID);
                break;
            case 5:
                cout << "Enter Book ID to return: ";
                cin >> bookID;
                library.returnBook(bookID);
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
