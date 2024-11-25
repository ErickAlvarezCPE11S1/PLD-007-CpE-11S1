#include <Iostream>
using namespace std;

float dollarstopesos(float pesos, float exchangeRate){
	return pesos /exchangeRate;
}

float dollarstopesos(float dollars, float exchangeRate){
	return dollars*exchangeRate;
}

int main()
{

float amount, exchangeRate;
int choice;

cout << "Enter the exchange Rate: ";
cin >> exchangeRate;

cout << "Currency Converter"<<endl;
cout << "1.Dollars to Pesos"<<endl;
cout << "2. Pesos to Dollars"<< endl;
cin >> choice;

if(choice==1){
	cout << "Enter amount of dollars: ";
	cin >> amount;
	cout << amount<< "Dollars = "<< dollarstopesos(amount,exchangeRate)<<"Pesos"<<endl;
}else if(choice==2){
	cout << "Enter amount of pesos: ";
	cin >> amount;
	cout << amount << "Pesos= "<<pesostodollars(amount,exchangeRate)<<"Dollars"<<endl;
}else{
	
	cout << "Invalid";
}

return 0;
}
