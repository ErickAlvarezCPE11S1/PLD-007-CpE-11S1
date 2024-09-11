#include <iostream>
using namespace std;
int main(){
float x;

cout << "Enter your grade: ";
cin >> x;
if (x>= 101){
	cout << "Over 100 only"<<endl;
return main();
}
 else if (x>= 94){
	cout << "Excellent";
}
else if( x>=88.5){
	cout << "Superior";
}
else if(x>=83){
	cout<<"Meritorious";
}
else if(x>=77.5){
cout << "Very Good";	
}
else if (x>=72){
	cout << "Good";
}
else if (x>=65.5){
	cout << "Very Satisfactory";
}
else if (x>=61){
	cout<< "Satisfactory";
}
else if (x>=55.5){
	cout << "Fair";
}
else if (x>=50){
	cout << "Passing";
}
else if (x>=0){
	cout << "Failed";
}
return 0;
}
