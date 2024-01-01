#include "login.h"
#include<iostream>
using namespace std;

void login::getuserName()
{
    cout<< "\nHINT : THE PASSWORD IS NOT (Library@1)\n";
    cout << "\nUSERNAME : ";
    cin >> userN;
    cout << "PASSWORD : ";
    cin >> password;
    cout << "\n";
    //compare the content of password into the pass
    int i = strcmp(pass, password);


    while (i != 0 && j < 2)
    {
        cout << "USERNAME @ PASSWORD is INVALID" << endl;
        cout << "\nUSERNAME : ";
        cin >> userN;
        cout << "PASSWORD : ";
        cin >> password;
        cout << "\n";
        i = strcmp(pass, password);
        j++;

    }
    if (i != 0)
    {
        cout << "YOU ARE NOT A STAFF!!!" << endl;
        exit(0);

    }


}
