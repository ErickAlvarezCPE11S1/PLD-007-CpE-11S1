#include <iostream>
using namespace std;

int main(){
	double fare =9.0;
	int age;
	string isStudent;
	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Are you a student? ";
	cin >> isStudent;
	
	double discount = 0.0;
	
	if (age >= 65){
	discount =0.10;
	
	}else if (age <=64 && isStudent == "Yes"){
		discount = 0.08;
	}else{
			double discount = 0.0;
	}
	double final_fare = fare * ( 1 - discount);
	
	cout <<"The final fare is "<< final_fare << " pesos"<<endl;
	
	return 0;
}
