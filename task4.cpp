#include<iostream>
using namespace std;
main(){

int impostercount;
cout<<"Enter Imposter Count : ";
cin>>impostercount;
int playercount;
cout<<"Enter Player Count : ";
cin>>playercount;
int result;
result=  100*(impostercount/playercount);
cout<<"Chance of being an imposter"<<result;



}