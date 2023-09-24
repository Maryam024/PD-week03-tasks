#include<iostream>
using namespace std;
main(){

int pounds;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>> pounds;
int cost;
cout<<"Enter the cost of the bag: ";
cin>> cost;
int Sq_feet;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>> Sq_feet;
int costperpound;
costperpound= cost/pounds;
cout<<"Cost of fertilizing per pound: "<<costperpound<<endl;
int costperSq;
costperSq= cost/Sq_feet;
cout<<"Cost of fertilizing per square foot: "<<costperSq<<endl;



}