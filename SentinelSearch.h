//DONE BY : IDRIS MAHMOR

#pragma once
#include<iostream>
#include<string>
#include"book.h"
#include"borrow.h"
using namespace std;

class SenSearch
{
private:

public:
	SenSearch();
	~SenSearch() {};
	void SentinelSearch(borrow[], int&);
	void saveBorrow(borrow[], int&);
};

