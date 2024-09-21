#include<iostream>
using namespace std;
int main()
{
cout<< "Enter a four digit number :" << endl;
cout<< "Enter digit one :";
int digit1;
cin >> digit1;

cout << "Enter digit two :";
int digit2;
cin >> digit2;

cout << "Enter digit three:";
int digit3;
cin >> digit3;

cout << "Enter digit four :";
int digit4;
cin >> digit4;

int total;
total= digit1+digit2+digit3+digit4;
cout << "Total sum of 4 digit number is :" << total;
}