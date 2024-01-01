//DONE BY AUNI AFEEQAH

#include "Display.h"
#include "book.h"
#include "borrow.h"
#include<iostream>

using namespace std;

void Display::MensiarkanBook(book detail[],int &jumlahbuku)
{
    int i;

    cout << " LIST OF BOOK ADDED " << jumlahbuku;
    for (i = 0; i < jumlahbuku; i++) 
    {   
        cout << "\nBook ID :" << detail[i].bookid << "\n";
        cout << "Book Title :" << detail[i].title << "\n";
        cout << "Book Publisher :" << detail[i].publisher << "\n";
        cout << "Book Author :" << detail[i].author << "\n\n";
    }

}

void Display::MemaparkanBorrower(borrow studbook[], int &jumlahstud)
{
    
     int i;
     cout << " LIST OF BORROWER ";
     for (i = 0; i < jumlahstud; i++) 
     {
         cout << "\nStudent Matric No. :" << studbook[i].matricNo << "\n";
         cout << "Student name :" << studbook[i].studName << "\n";
         cout << "Book Title :" << studbook[i].title << "\n";
         cout << "Date Start :" << studbook[i].dateStart << "\n\n";
     }

    
}
