#include <iostream>

using namespace std;

int main(){
int num1,num2,average,sum,difference,product,remainder;
float quotient;

		cout<<"BASIC CALCULATOR"<< endl<<"\n\n";
	
			cout<<"Please type your first number: ";
			cin>>num1;
			cout<<"Please type your second number: ";
			cin>>num2;
		
			
			average = (num1+num2)/2;
			sum = num1+num2;
			difference = num1-num2;
			product = num1*num2;
			quotient = (float)num1/num2;
			remainder = num1%num2;
			
			cout<<"Your average is: "<< average<<endl;
			cout<< "Your sum is: "<< sum<<endl;
			cout<< "Your difference is: "<< difference<<endl;
			cout << "Your product is: "<< product<<endl;
			cout << "Your quotient is: "<<quotient<<endl;
			cout << "Your remainder is: "<< remainder;
			
return 0;
}
