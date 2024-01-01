
#include<iostream>
#include<string>
#include<fstream>
#include "SentinelSearch.h"
#include"book.h"
#include"borrow.h"
using namespace std;

SenSearch::SenSearch()
{

}

//DONE BY IDRIS MAHMOR
void SenSearch::SentinelSearch(borrow studbook[], int &jumlahstud)
{
	string target;
	cin.ignore();
	cout << "\nPlease Enter Student Matric No. to search, 0 to exit : ";
	getline(cin, target);
	
	while (target != "0")
	{

		//book last = detail[jumlahbuku];
		studbook[jumlahstud].matricNo = target;
		int i = 0;
		while (studbook[i].matricNo != target)
		{
			i++;
		}

		if ((i < jumlahstud - 1) || (studbook[jumlahstud - 1].matricNo == target))
		{
			cout << "\nMatric No :  " << target <<  endl;
			cout << "Student Name : " << studbook[i].studName << endl;
			cout << "Book Title : " << studbook[i].title << endl;
			cout << "Date Start : " << studbook[i].dateStart << endl;
		
		}
		else
		cout << "\nMatric No. Not Found";
		cout << endl;
		cout << "\nPlease Enter Student Matric No. to search, 0 to exit : ";
		getline(cin, target);
	} 


}

//DONE BY IMRAN IHTISYAM
void SenSearch::saveBorrow(borrow studbook[], int &jumlahstud)
{
	int i;
	ofstream BorrowFile("BorrowList.txt", ios::out | ios::app);
	BorrowFile << " LIST OF BORROWER ";
	for (i = 0; i < jumlahstud; i++) {
		BorrowFile << "\nBook ID:" << studbook[i].matricNo << "\n";
		BorrowFile << "Book Publisher:" << studbook[i].studName << "\n";
		BorrowFile << "Book Title:" << studbook[i].title << "\n";
		BorrowFile << "Book Author:" << studbook[i].dateStart << "\n\n";
	}
	BorrowFile.close();
}