#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    bool isIssued;

    Book(string t, string a) : title(t), author(a), isIssued(false) {}
};

class Guest {
public:
    string name;
    string contactNo;
    string address;
    bool canBrowseOnly;

    Guest(string n, string cn, string addr, bool cbo) : name(n), contactNo(cn), address(addr), canBrowseOnly(cbo) {}
};

class Librarian {
private:
    vector<Book> books;
    vector<Guest> guests;

public:
    Librarian() {
        // Adding some initial books to the library
        books.push_back(Book("Book1", "Author1"));
        books.push_back(Book("Book2", "Author2"));
    }

    void addGuest(string name, string contactNo, string address, bool canBrowseOnly) {
        guests.push_back(Guest(name, contactNo, address, canBrowseOnly));
        cout << "Guest \"" << name << "\" added successfully." << endl;
    }

    void issueBook(string title, string guestName) {
        for (int i = 0; i < guests.size(); i++) {
            Guest &guest = guests[i];
            if (guest.name == guestName && guest.canBrowseOnly) {
                cout << "Guest \"" << guestName << "\" can only browse books and cannot issue books." << endl;
                return;
            }
            else if (guest.name == guestName && !guest.canBrowseOnly){    
                for (int i = 0; i < books.size(); i++) {
                    Book &book = books[i];
                    if (book.title == title && !book.isIssued) {
                        book.isIssued = true;
                        cout << "Book \"" << title << "\" issued to guest \"" << guestName << "\" successfully." << endl;
                        return;
                    }
                }
            }
            else{
                cout << "Guest \"" << guestName << "\" not found." << endl;}
        cout << "Book \"" << title << "\" not available or already issued." << endl;
    }
}

    void checkDues() {
        cout << "Checking dues..." << endl;
        // For simplicity, we are not tracking individual users and their dues
        // In a real application, this would involve more complex logic
        cout << "All dues are clear." << endl;
    }

    void manageTransactions() {
        cout << "Managing transactions..." << endl;
        // For simplicity, this method is just a placeholder
        // In a real application, this would involve complex transaction handling
        cout << "Transactions managed successfully." << endl;
    }

    void displayBooks() {
        cout << "Available books in the library:" << endl;
        for (const auto &book : books) {
            cout << book.title << " by " << book.author;
            if (book.isIssued) {
                cout << " (Issued)";
            }
            cout << endl;
        }
    }

    void displayGuests() {
        cout << "Registered guests in the library:" << endl;
        for (int i = 0; i < guests.size(); i++) {
            Guest &guest = guests[i];  
            cout << guest.name << " | " << guest.contactNo << " | " << guest.address;
            if (guest.canBrowseOnly) {
                cout << " (Can Only Browse)";
            }
            cout << endl;
        }
    }
};

int main() {
    Librarian librarian;
    int choice;
    string title, name, contactNo, address;
    bool canBrowseOnly;

    while (true) {
        cout << "\nLibrary Management System:" << endl;
        cout << "1. Add Guest" << endl;
        cout << "2. Issue Book" << endl;
        cout << "3. Check Dues" << endl;
        cout << "4. Manage Transactions" << endl;
        cout << "5. Display Books" << endl;
        cout << "6. Display Guests" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter guest details:\nName: ";
                cin.ignore();
                getline(cin, name);
                cout << "Contact No.: ";
                getline(cin, contactNo);
                cout << "Address: ";
                getline(cin, address);
                cout << "Can Only Browse (1 for Yes, 0 for No): ";
                cin >> canBrowseOnly;
                librarian.addGuest(name, contactNo, address, canBrowseOnly);
                break;
            case 2:
                cout << "Enter the title of the book to issue: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter guest name: ";
                getline(cin, name);
                librarian.issueBook(title, name);
                break;
            case 3:
                librarian.checkDues();
                break;
            case 4:
                librarian.manageTransactions();
                break;
            case 5:
                librarian.displayBooks();
                break;
            case 6:
                librarian.displayGuests();
                break;
            case 7:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
