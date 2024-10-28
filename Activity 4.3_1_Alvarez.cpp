#include <iostream>

using namespace std;

int main(){
	string days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	
	int numdays;
	cout << "Type the day that you want (0-6): ";
	cin >>numdays;

	if(numdays >= 0 && numdays<7){
		cout << days[numdays];
	}else{cout << "Error, no such day.";
	
	}
	cout << endl;
	return main();
	return 0;
}
