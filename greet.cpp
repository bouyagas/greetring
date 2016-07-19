/*
greet.cpp
Jul 5, 2016
mohamedbgassama
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int gun(){
	string x = "hello world";
	char y = 'b';
	cout<< y << endl;
	cout << x <<endl;
}

int square(int x){
	return x*x;
}

int main(){
	double mpg, distance, gallon, pricePerGallon, totalCost;
 cout<<"Enter your mile per gallon: "<<endl;
    cin>>mpg;
 cout<<"Enter the distance of your trip: "<<endl;
   cin>>distance;
 cout<< "Enter the price per unit: "<<endl;
    cin>>pricePerGallon;
 gallon = distance/mpg;
 totalCost = gallon * pricePerGallon;
 cout<<"Your total price is $ "<<fixed<<setprecision(2)<<totalCost<<endl;
 cout<< gun()<<endl;
 cout<< square(3)<<endl;
return 0;
}


