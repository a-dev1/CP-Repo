/***********************************************************************
// OOP244 Workshop 9:
// File	w9_tester.cpp
// Version 1.0
// Date	2021/11/19
// Author	Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/

#include <iostream>
#include <fstream>
#include "Contact.h"

using namespace std;
using namespace sdds;
Contact readContact(ifstream& ifstr) {
   Contact fC;
   ifstr >> fC;
   return fC;
}

int main() {
   Contact C;
   ifstream file("contacts.txt");
   cout << "Empty Contact: >" << C << "<" << endl;
   cout << "Enter the following:" << endl
      << "Homer,Jay,Simpson" << endl
      << "70 the pond road,North York,ON,M3J3M6" << endl << endl;
   cout << "Name and address" << endl << "> ";
   cin >> C;
   if (cin)
      cout << "OK!" << endl;
   else {
      cout << "Date entry implemented incorrectly" << endl;
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "Contact:" << endl << C << endl << endl;
   //---------------------------------------
   cout << "Enter the following:" << endl
      << "Homer,Jay,Simpson" << endl
      << "70 the pond road,North York,ONT,M3J3M6" << endl << endl;
   cout << "Name and address" << endl << "> ";
   cin >> C;
   if (cin)
      cout << "Date entry implemented incorrectly" << endl;
   else {
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "Empty Contact: >" << C << "<" << endl << endl;
   //---------------------------------------
   cout << "Enter the following:" << endl
      << "Homer,Jay,Simpson" << endl
      << "70 the pond road,North York,ON,M3J 3M6" << endl << endl;
   cout << "Name and address" << endl << "> ";
   cin >> C;
   if (!cin){
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "Empty Contact: >" << C << "<" << endl << endl;
   //---------------------------------------
   cout << "Enter the following:" << endl
      << "Homer,Jay,Simpson" << endl
      << "70 the pond road,,ON,M3J3M6" << endl << endl;
   cout << "Name and address" << endl << "> ";
   cin >> C;
   if (!cin){
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "Empty Contact: >" << C << "<" << endl << endl;
   //---------------------------------------
   cout << "Enter the following:" << endl
      << "Homer,Jay,Simpson" << endl
      << ",North York,ON,M3J3M6" << endl << endl;
   cout << "Name and address" << endl << "> ";
   cin >> C;
   if (!cin){
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "Empty Contact: >" << C << "<" << endl << endl;
   cout << "Name and addresses in file: " << endl;
   while (file) {
      C = readContact(file);
      if (file) cout << C << endl;
   }
   return 0;
}

