//write a C++ program to enter temperature in fahrenheit and convert to celcius
 
//library
#include<iostream>
using namespace std;

//writing of the main function 
int main(){

//declaration of the variables
float temperature;

//assigning values to the variables
cout << "Enter temperature in fahrenheit ";
 
//reading out the input values
cin >> temperature;
cout << "the entered value is" << temperature ;

//process
cout << "temperature in celius" << (temperature-32)*(0.56) <<".\n";

//end
return 0;
}

