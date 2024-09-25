#include <iostream>
using namespace std;

//create a c++ program that applies MDAS

int main(){
	double sum,quotient,product,difference;
	double value;
	double value2;
	char operators;
	char stop;
			
			
			
			calc1:
	cout << "The basic Calculator"<<"\n\n";
	cout << "Please type your number(Press E to stop): "; 
	cin >> value;
	cout << "Second number: ";
	cin >> value2;
	cout << "What operator do you want to use?(MDAS ONLY): ";
	cin >> operators;
	

	switch(operators){
		case '+':
			sum=value+value2;
			cout << "\n\n"<<"Your sum is: "<< sum<<"\n\n";
			break;
			
			case'-':
					difference=value-value2;
				cout << "\n\n"<< "Your difference is: "<< difference<<"\n\n";
				break;
				
				case '*':
					product=value*value2;
					cout<< "\n\n" << "Your product is: "<< product<<"\n\n";
					break;
					
					case '/':
						quotient=value/value2;
						cout<< "Your quotient is: "<<quotient<<"\n\n";
						break;
						
						default:
							cout << "\n\n"<< "Invalid Operator"<<"\n\n";
	} 
	return 0;
}


	

