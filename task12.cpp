#include<iostream>
using namespace std;
main(){

int Sqmeters;
cout<<"Number of square meters you can paint: ";
cin>> Sqmeters;
int width;
cout<<"Width of the single wall(in meters): ";
cin>> width;
int length;
cout<<"Length of the single wall(in meters): ";
cin>> length;
int n_ofwalls;
n_ofwalls=Sqmeters/(length*width);
cout<<"Numbers of walls you can paint: "<<n_ofwalls;





}