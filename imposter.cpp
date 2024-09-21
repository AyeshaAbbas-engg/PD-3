#include<iostream>
using namespace std;
int main()
{

cout << "Enter Imposter count :";
int Imposter;
cin >> Imposter;

cout << "Enter Player count :";
int Player ;
cin >> Player;

 int chances;
chances = (Imposter/Player)*100;

cout << "Chances of being a Imposter is :";
cout << chances;
cout << "%";



}