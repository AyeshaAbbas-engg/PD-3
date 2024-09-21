#include<iostream>
using namespace std;

int main()
{

cout << "Enter weight of fertilizer in pounds :";
int fertilizer;
cin >> fertilizer;

cout << "Enter cost of the bag :"; 
int cost;
cin >> cost;

cout << "Enter the area in square feets that can be covered by the bag :";
int area;

cin >> area;

 int perfeet;
perfeet= fertilizer*area;

cout<< "Cost of fertilizer per feet is :" << perfeet;



}