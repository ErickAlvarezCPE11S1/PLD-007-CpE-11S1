#include <iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit){
	return (fahrenheit -32)*5.0/9.0;
}

float celsiusToFahrenheit(float celsius){
	return (celsius * 9.0/5.0)*32;
}

int main(){
	float temp;
	int options;
	
	cout << "Enter temperature: ";
	cin >> temp;
	
	cout << "Temperature Converter"<<endl;
	cout << "1. Fahrenheit to Celsius"<<endl;
	cout << "2. Celsius to Fahrenheit"<<endl;
	cin >> options;
	
	if (options==1){
	cout << temp << " Fahrenheit= "<< fahrenheitToCelsius<<endl;
	
}else if(options==2){
	cout << temp << "Celsius= "<< celsiusToFahrenheit<<endl;
}else{
	cout << "Invalid";
	
}
return 0;
}
