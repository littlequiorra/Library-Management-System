#include "InsertionSort.h"
#include <iostream>
#include <string>
#include "book.h"
#include<fstream>
using namespace std;

insertion::insertion(){}

//DONE BY : WAFIR DZIHNI
void insertion::sorting(book detail[], int jumlahbuku)
{
        int i, j;
        book key;

        for (i = 1; i < jumlahbuku; i++)
        {
            key = detail[i];
            j = i - 1;

            while (j >= 0 && detail[j].bookid > key.bookid)
            {
                detail[j+1] = detail[j];
                j = j - 1;
            }
            detail[j + 1] = key;
        }
}

//DONE BY : IMRAN IHTISYAM
void insertion::saveSort(book detail[],int jumlahbuku)
{
    int i;
    ofstream bookFile("BookList.txt", ios::out|ios::app);
    bookFile << " LIST OF BOOK ADDED ";
    for (i = 0; i < jumlahbuku; i++) {
        bookFile << "\nBook ID:" << detail[i].bookid << "\n";
        bookFile << "Book Title:" << detail[i].title << "\n";
        bookFile << "Book Publisher:" << detail[i].publisher<< "\n";
        bookFile << "Book Author:" << detail[i].author << "\n\n";
    }
    bookFile.close();
}
