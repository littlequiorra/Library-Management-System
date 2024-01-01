//DONE BY : ATIQA IDAYU

#include<iostream>
#include "binarySearch.h"
#include"book.h"
using namespace std;

bool binarySearch::BinarySearch(book detail[], int& SIZE, int target, int& locWanted)
{
    int mid = 0, begin = 0, end = SIZE - 1;

    while (begin <= end)
    {
        mid = (begin + end) / 2;

        if (target > detail[mid].bookid)
            begin = mid + 1;
        else if (target < detail[mid].bookid)
            end = mid - 1;
        else
            begin = end + 1;
    }
    locWanted = mid;
    return (target == detail[mid].bookid);
}


