#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
#include<iomanip>
#include"book.h"
#include"binarySearch.h"
#include"InsertionSort.h"
#include"SentinelSearch.h"
#include"borrow.h"
#include"login.h"
#include"Display.h"

using namespace std;

int i;
int jumlahbuku ;
int jumlahstud ;
int no, locWanted;
int target;
int choice;
bool found;
insertion sort;
SenSearch sentinel;
binarySearch binary;
Display tunjuk;
login daftar;
book detail[5];
borrow studbook[5];

void displaymenu();
void getbook(book detail[]);
void binarysearching();
void peminjam(borrow studbook[]);

int main()
{
    // DONE BY AUNI AFEEQAH
    cout << "WELCOME TO LIBRARY MANAGEMENT SYSTEM" << endl;
    daftar.getuserName();
    displaymenu();
    cout << "\nChoice: ";
    cin >> choice;
    cin.ignore();
    system("cls");
  
    //SWITCH CASE DONE BY IMRAN IHTISYAM, IDRIS MAHMOR , WAFIR DZIHNI

    while (choice != 8)
    {
        switch (choice)
        {
        case 1:
            system("cls");
            getbook(detail);
            system("pause");
            break;

        case 2:
            system("cls");
            sort.sorting(detail, jumlahbuku);
            sort.saveSort(detail, jumlahbuku);
            cout << "\nList Book After Sorting have been saved into BookFile" << endl;
            system("pause");
            break;

        case 3:
            system("cls");
            tunjuk.MensiarkanBook(detail, jumlahbuku);
            system("pause");
            break;

        case 4:
            system("cls");
            binarysearching();
            system("pause");
            break;

        case 5:
            system("cls");
            peminjam(studbook);
            sentinel.saveBorrow(studbook, jumlahstud);
            cout << "\nBorrower information have been saved into BorrowFile " << endl;
            system("pause");
            break;

        case 6:
            system("cls");
            tunjuk.MemaparkanBorrower(studbook,jumlahstud);
            system("pause");
            break;

        case 7:
            system("cls");
            sentinel.SentinelSearch(studbook, jumlahstud);
            system("pause");
            break;

        case 0:
            system("cls");
            exit(0);
            system("pause");
            break;


        default:
            cout << "\nInvalid choice!\n";
            system("pause");
        }//end switch

        system("cls");
        displaymenu();
        cout << "\nChoice: ";
        cin >> choice;
    }//end while

    system("cls");
    cout << "THANK YOU! SEE YOU AGAIN \n\n";

    return 0;

}

//DONE BY IMRAN IHTISYAM
void displaymenu()
{
    cout <<  "\nMENU\n";
    cout <<  "==========================================\n";
    cout <<  "1 - Add Book\n";
    cout <<  "2 - Sort Added Books\n";
    cout <<  "3 - Display Added books\n";
    cout <<  "4 - Search Book ID\n";
    cout <<  "5 - Add Borrower Details\n";
    cout <<  "6 - Display Borrower Details\n";
    cout <<  "7 - Search Borrower Matric Number\n";
    cout <<  "0 - exit\n";
    cout <<  "==========================================\n";
}

//DONE BY IDRIS MAHMOR
void getbook(book detail[])
{
    cout << "Please enter number of book to be added : ";
    cin >> jumlahbuku;
    cin.ignore();
    cout << "\nEnter book details :-\n";

    for (int i = 0; i < jumlahbuku; i++)
    {
        cout << "\nPlease enter book ID: ";
        cin >> detail[i].bookid;
        cin.ignore();

        cout << "Please enter book title: ";
        getline(cin, detail[i].title);


        cout << "Please enter book publisher: ";
        getline(cin, detail[i].publisher);

        cout << "Please enter book author: ";
        getline(cin, detail[i].author);

    }
}

//DONE BY ATIQA IDAYU
void binarysearching()
{
    cout << "Insert a (Book ID) to search, or 0 to stop : ";
    cin >> target;
    cin.ignore();

    while (target != 0)
    {
        found = binary.BinarySearch(detail, jumlahbuku, target, locWanted);

        if (found)
        {
            cout << "BookID : " << target << endl;
            cout << "Book title : " << detail[locWanted].title << endl;
            cout << "Book publisher : " << detail[locWanted].publisher << endl;
            cout << "Book author : " << detail[locWanted].author << endl;

        }
        else
            cout << "\n\tBookID not found" << endl;
        cout << "\nInsert a (Book ID) to search, or 0 to stop : ";
        cin >> target;
    }
}

//DONE BY WAFIR DZIHNI
void peminjam(borrow studbook[])
{
    cout << "\nInsert Number of Students want to borrow book: ";
    cin >> jumlahstud;
    cin.ignore();


    cout << "\nEnter borrow details :-\n";

    for (int i = 0; i < jumlahstud; i++)
    {
        cout << "\nPlease enter Student Matric No.: ";
        getline(cin, studbook[i].matricNo);

        cout << "Please enter Student Name : ";
        getline(cin, studbook[i].studName);

        cout << "Please enter book title : ";
        getline(cin, studbook[i].title);

        cout << "Please enter date start : ";
        getline(cin, studbook[i].dateStart);

    }
}


