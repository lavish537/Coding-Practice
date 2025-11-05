#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class bankAccount {
private:
    string bankName;
    int bankcode;
    int accountID;
    string accountHolderName;
    string accountNumber;
    double balance;
    string accountPassword;
    string email;
    string phoneNumber;
    string aadhaarNumber;
    vector<string> transactionHistory;

public:
    void createAccount();
    void loginAccount();
    void depositMoney();
    void displayAccountDetails();
    void withdrawMoney();
    void checkBalance();
    void allTransactionsHistory();
    void mainMenu();
    void savetofile();
    void readfromfile();
};

void bankAccount::savetofile() {
    string filename = accountNumber + ".txt";
    ofstream File(filename);
    if (File.is_open()) {
        File << bankName << endl;
        File << accountID << endl;
        File << accountHolderName << endl;
        File << accountNumber << endl;
        File << balance << endl;
        File << accountPassword << endl;
        File << email << endl;
        File << phoneNumber << endl;
        File << aadhaarNumber << endl;
        for (auto& transaction : transactionHistory) {
            File << transaction << endl;
        }
        File.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}

void bankAccount::readfromfile() {
    string filename = accountNumber + ".txt";
    ifstream File(filename);
    if (File.is_open()) {
        getline(File, bankName);
        File >> accountID;
        File.ignore();
        getline(File, accountHolderName);
        getline(File, accountNumber);
        File >> balance;
        File.ignore();
        getline(File, accountPassword);
        getline(File, email);
        getline(File, phoneNumber);
        getline(File, aadhaarNumber);
        string transaction;
        while (getline(File, transaction)) {
            transactionHistory.push_back(transaction);
        }
        File.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }
}

void bankAccount::mainMenu() {
    int choice;
    do {
        cout << "------------------------------------------------------" << endl;
        cout << "Main Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Transaction History" << endl;
        cout << "6. Logout" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        system("cls");

        switch (choice) {
        case 1:
            depositMoney();
            break;
        case 2:
            withdrawMoney();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            displayAccountDetails();
            break;
        case 5:
            allTransactionsHistory();
            break;
        case 6:
            cout << "Logging out..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}

void bankAccount::createAccount() {
    cout << "------------------------------------------------------" << endl;
    cout << "Creating a new account..." << endl;
    cout << "Enter account holder name: ";
    getline(cin, accountHolderName);
    cout << "Set account password: ";
    getline(cin, accountPassword);
    cout << "Enter email: ";
    getline(cin, email);
    cout << "Enter phone number: ";
    getline(cin, phoneNumber);
    cout << "Enter Aadhaar number: ";
    getline(cin, aadhaarNumber);
    balance = 500;

    ifstream file("SBI.txt");
    if (file.is_open()) {
        file >> bankcode;
        file.close();
    } else {
        bankcode = 1000; // default start
    }

    accountID = bankcode;
    bankName = "SBI";
    accountNumber = bankName + to_string(accountID);

    ofstream output("SBI.txt");
    if (output.is_open()) {
        output << bankcode + 1;
        output.close();
    }

    transactionHistory.push_back("Deposited :- " + to_string(balance));
    cout << "Account created successfully! Your account number is " << accountNumber << endl;
    cout << "--------------------------------------------------------------" << endl;
    savetofile();
}

void bankAccount::loginAccount() {
    cout << "--------------------------------------------------------------" << endl;
    string enteredPassword;
    string enteredAccountNumber;
    cout << "Login to your account" << endl;
    cout << "Enter account number: ";
    getline(cin, enteredAccountNumber);
    accountNumber = enteredAccountNumber;

    ifstream file(accountNumber + ".txt");
    if (file.is_open()) {
        readfromfile();
        cout << "Enter password: ";
        getline(cin, enteredPassword);
        if (enteredPassword == accountPassword) {
            cout << "Login successful!" << endl;
            mainMenu();
        } else {
            cout << "Invalid account number or password." << endl;
        }
    } else {
        cout << "Unable to open account file." << endl;
    }
    cout << "--------------------------------------------------------------" << endl;
}

void bankAccount::depositMoney() {
    cout << "--------------------------------------------------------------" << endl;
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    cin.ignore();
    if (amount > 0) {
        balance += amount;
        transactionHistory.push_back("Deposited :- " + to_string(amount));
        savetofile();
        cout << "Deposited successfully!" << endl;
        cout << "Current balance: " << balance << endl;
    } else {
        cout << "Invalid amount. Please try again." << endl;
    }
    cout << "--------------------------------------------------------------" << endl;
}

void bankAccount::withdrawMoney() {
    double amount;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    cin.ignore();
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        transactionHistory.push_back("Withdrawn :- " + to_string(amount));
        savetofile();
        cout << "Withdrawn successfully!" << endl;
        cout << "Current balance: " << balance << endl;
    } else {
        cout << "Invalid amount or insufficient balance. Please try again." << endl;
    }
    cout << "--------------------------------------------------------------" << endl;
}

void bankAccount::checkBalance() {
    cout << "--------------------------------------------------------------" << endl;
    cout << "Current balance: " << balance << endl;
    cout << "--------------------------------------------------------------" << endl;
}

void bankAccount::displayAccountDetails() {
    cout << "--------------------------------------------------------------" << endl;
    cout << "Account Details:" << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Email: " << email << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Aadhaar Number: " << aadhaarNumber << endl;
    cout << "Current Balance: " << balance << endl;
    cout << "--------------------------------------------------------------" << endl;
}

void bankAccount::allTransactionsHistory() {
    cout << "--------------------------------------------------------------" << endl;
    cout << "Transaction History:" << endl;
    for (const auto& transaction : transactionHistory) {
        cout << transaction << endl;
    }
    cout << "--------------------------------------------------------------" << endl;
}

int main() {
    cout << "--------------------------------------------------------------" << endl;
    bankAccount account;
    int choice;
    do {
        cout << "Welcome to the Bank Management System" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Login to Account" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        system("cls");

        switch (choice) {
        case 1:
            account.createAccount();
            break;
        case 2:
            account.loginAccount();
            break;
        case 3:
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    cout << "--------------------------------------------------------------" << endl;
    return 0;
}
