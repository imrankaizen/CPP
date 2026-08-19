// BANK MANAGEMENT SYSTEM //
#include<iostream>
#include<string>
#define max 100
using namespace std;

class account {

    private :
        string name;
        string accountNumber;
        string accountBalance;  
        account *link;  

    public :
        void menu();
        void createAccount();
        void showAccount() const;
        void deleteAccount();
        void withdraw();
        void deposit(); 
        void modify();
    
};

account *start = NULL;


int main (void) {


}

void account :: menu (void) {

    int choice;
    cout << "====== Bank Account =====" << endl << endl; 
    do {
        cout << "Press 1 : to Create Account" << endl;
        cout << "Press 2 : to Show Account" << endl;
        cout << "Press 3 : to Withdrawal " << endl;
        cout << "Press 4 : to Deposite" << endl;
        cout << "Press 5 : to Delete Acoount" << endl;
        cout << "Press 6 : to Modify Account" <<endl;
        cout << "Press 7 : to Exit" << endl;

        cout << "Enter your Choice = ";
        cin >> choice;

        switch (choice) {

            case 1 : 

                break;

            case 2 : 
                    

        
        }

    } while(choice != 7);
    cout << "Program Completed Successfully";
}

void account :: createAccount (void) {

    account *temp;
    temp = (account *) malloc (sizeof(account));
    cout << "Enter Name = "; 
    getline(cin,name);
    cin.ignore();
    cout << "Enter Account Number = ";
    getline(cin,accountNumber);
    cin.ignore();
    cout << "Enter initial Amount = "; 
    getline(cin,accountBalance);
    if(start == NULL) {
        start = temp;
    } else {
        account *p = start;
        while(p->link != NULL) {
            p = p->link;
        }
        p->link = 

    }

    cout << "Account Created Successfully of " << name << endl << endl;
}

void account :: showAccount (void) const {

    cout << "Name : " << name;
    cout << "Account Number : " << accountNumber;
    cout << "Account balance : " << accountBalance;
}

void account :: deleteAccount (void) {}