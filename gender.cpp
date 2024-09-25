#include <iostream>
using namespace std;

int main(){
	char gender;
	cout << "What is your gender? "<< "\n\n";
	cout << "[A] For male"<< endl;
	cout  << "[B] For female"<< endl;
	cout << "[C] For others"<<"\n\n";
	cin >> gender;
	
	switch(gender){
		case 'A':
			cout <<"You're a boy";
		break;
		
		case  'B':
			cout << "You're a girl";
			break;
			
			case 'C':
				cout << "You're part of LGBTQ+";
				break;
				
				default:
				cout << "Invalid gender";
					break;
				
		return main();
	}
return 0;}
	
