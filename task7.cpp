#include<iostream>
using namespace std;
main(){

string moviename;
cout<<"Enter the movie name: ";
cin>> moviename;
int adult_TP;
cout<<"Enter the adult ticket price: ";
cin>> adult_TP;
int child_TP;
cout<<"Enter the child ticket price: ";
cin>> child_TP;
int adult_Tsolds;
cout<<"Enter the number of adult tickets sold: ";
cin>> adult_Tsolds;
int child_Tsolds;
cout<<"Enter the number of child tickets sold: ";
cin>> child_Tsolds;
int charity;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>> charity;
int totalamount;
totalamount=(adult_TP*adult_Tsolds)+(child_TP*child_Tsolds);
cout<<"Total amount generated from ticket sales: "<<totalamount<<endl;
int donation;
donation= (totalamount/100)*charity;
cout<<"Donation to charity: "<<donation<<endl;
int remainings;
remainings=totalamount-donation;
cout<<"Remaining amounts after donation: "<<remainings<<endl; 


}