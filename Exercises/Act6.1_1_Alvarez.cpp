#include <iostream>
using namespace std;

int add(int firstnum, int secondnum){
	
	return firstnum + secondnum;
}

int subtract(int firstnum, int secondnum){
	return firstnum - secondnum;
}

int multiply(int firstnum, int secondnum){
	return firstnum *secondnum;
}

int divide(int firstnum, int secondnum){
	return firstnum/secondnum;
}

int main(){
int num1, num2;

cout << "Enter two numbers ";
cin >> num1>> num2;

cout << "Addition: "<< add(num1,num2)<<endl;
cout << "Subtraction: "<< subtract(num1,num2)<<endl;
cout << "Multiplication: "<< multiply(num1,num2)<<endl;
cout << "Division: "<<divide(num1,num2)<<endl;

return 0;
}
