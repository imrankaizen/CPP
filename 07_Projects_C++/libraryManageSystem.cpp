// Library Management System :- 
#include<iostream>
#include<vector>
using namespace std;

class LIBRARY {

    public:
        int id; 
        string title;
        string author;
        int quantity; 
    
        LIBRARY(int i,string t,string a,int q) {

            id = i;
            title = t;
            author = a;
            quantity = q;
        } 
};

void addBook(vector<LIBRARY> &);
void showAllBook(vector<LIBRARY> &);
void issueBook(vector<LIBRARY> &,int);
void returnBook(vector<LIBRARY> &,int);

int main (void) {

    vector<LIBRARY> BOOKS;
    int choice,id;
    do {
        cout << "-  -  -  x   L I B R A R Y    M E N U   x  -  -  -" << endl << endl << endl; 
        cout << "ADD BOOK : 1" << endl << endl;
        cout << "SHOW BOOK : 2" << endl << endl;
        cout << "ISSUE BOOK : 3" << endl << endl;
        cout << "RETURN BOOK : 4" << endl << endl;
        cout << "EXIT : 5 " << endl << endl << endl; 

        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice) {

            case 1 :        
                        addBook(BOOKS); 
                        break;
            case 2 :    
                        showAllBook(BOOKS); 
                        break;
            case 3 :    
                        cout << "Enter Book ID to ISSUE : "; 
                        cin >> id; issueBook(BOOKS,id); 
                        break;

            case 4 : 
                        cout << "Enter Book ID to RETURN : "; 
                        cin >> id; returnBook(BOOKS,id); 
                        break;

            case 5 : cout << "Program Existed Successfully , Thank You !";

            default : cout << "INVALID INVALID \n , Plese Choose Options (1 to 5)";
        }
    } while (choice != 5);
    return 0;
}


void addBook (vector<LIBRARY> &BOOKS) {

    int id,qty;
    string title,author;
    cout << "Enter BOOK ID :- "; cin >> id; cin.ignore();
    cout << "Enter BOOK TITLE :- "; getline(cin,title);
    cout << "Enter BOOK AUTHOR :- "; getline(cin,author);
    cout << "Enter QUANTITY of BOOKS :- "; cin >> qty; 
    BOOKS.push_back(LIBRARY(id,title,author,qty));
    cout << "BOOKS ADDED SUCCESSFULLY !" << endl << endl;

}


void showAllBook (vector<LIBRARY> &BOOKS) {

    if(BOOKS.empty()) { 

        cout << "NO BOOKS in LIBRARY" << endl << endl; 
        return; 
    }

    cout << endl << "- - x  L I B R A R Y   B O O K S  x - - " << endl << endl << endl;
    for(LIBRARY &b : BOOKS) {

        cout << "ID : " << b.id << endl;
        cout << "TITLE : " << b.title << endl;
        cout << "AUTHOR : " << b.author << endl;
        cout << "QUANTITY : " << b.quantity << endl << endl;

    }

}


void issueBook (vector<LIBRARY> &BOOKS,int id) {

        for(LIBRARY &b : BOOKS) {
            if(b.id == id) {
                if(b.quantity > 0) {
                    b.quantity--;
                    cout << "BOOK ISSUED SUCCESSFULLY !" << endl << endl; 
                } else {
                    cout << "BOOK IS NOT AVAILABLE !" << endl << endl; 
                }
                return;
            }
        }
        cout << "BOOK ID NOT FOUND !" << endl << endl; 
}


void returnBook (vector<LIBRARY> &BOOKS,int id) {

        for(LIBRARY &b : BOOKS) {
            if(b.id == id) {
                b.quantity++;
                cout << "BOOK RETURNED SUCCESSFULLY !" << endl << endl;
                return; 
            } 
        }
        cout << "BOOK ID NOT FOUND !" << endl << endl; 
}