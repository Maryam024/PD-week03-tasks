#include<iostream>
using namespace std;
main(){

int number;
cout<<"Enter a 4-digit number: ";
cin>> number;
int a,b,c,d;
a=number%10;
number=number/10;
b=number%10;
number=number/10;
c=number%10;
number=number/10;
d=number;
int sum;
sum=a+b+c+d;
cout<<"sum of individual digits: "<<sum;


}