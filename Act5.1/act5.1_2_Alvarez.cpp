#include <Iostream>
using namespace std;

bool multiple(int num, int x){
	return(num % x == 0);
}

int main(){
	int num, x;
	
	cout << "Enter a number: ";
	cin >> num;
	cout<<"Enter multiple: ";
	cin >> x;
	
	if(multiple(num, x)){
		cout << num<<" is a multiple of"<<x<<endl;	
}else{
	cout << num<< " is not multiple of "<<x<<endl;
}
return 0;
}
