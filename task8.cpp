#include<iostream>
using namespace std;
main(){

float vegprice;
cout<<"vegetable price per kilogram: ";
cin>> vegprice;
float fruitprice;
cout<<"fruit price per kilogram: ";
cin>> fruitprice;
int totalkg_veg;
cout<<"total kilograms of vegetables: ";
cin>> totalkg_veg;
int totalkg_fruit;
cout<<"total kilograms of fruits: ";
cin>> totalkg_fruit;
float earnings;
earnings=((vegprice*totalkg_veg)+(fruitprice*totalkg_fruit))*0.515;
cout<<"Total earnings in rupees (Rps): "<<earnings;




}