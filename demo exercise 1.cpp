#include <Iostream>

using namespace std;




void intro(){
	string name;
	cout<< "Please type your Surname: ";
	cin>>name;
	cout<<"Hello, "<< name<< endl;
	
}

int mid(){
	string calc = "calculator";
	string in;
	cout << "Please type the code (calculator): ";
	cin >> in;
	if (in == "calculator"){
			float num1,num2,num3,num4,num5,average,sum,difference,product,quotient;
			
		cout<<"\n\n"<<"BASIC CALCULATOR"<< endl<<"\n\n";
	
			cout<<"Please type your first number: ";
			cin>>num1;
			cout<<"Please type your second number: ";
			cin>>num2;
			cout<<"Please type your third number: ";
			cin>>num3;
			cout<<"Please type your fourth number: ";
			cin>>num4;
			cout<<"Please type your fifth number: ";
			cin>>num5;
			
			average = (num1+num2+num3+num4+num5)/5;
			sum = num1+num2+num3+num4+num5;
			difference = num1-num2-num3-num4-num5;
			product = num1*num2*num3*num4*num5;
			quotient = num1/num2/num3/num4/num5;
			
			cout<<"Your average is: "<< average<<endl;
			cout<< "Your sum is: "<< sum<<endl;
			cout<< "Your difference is: "<< difference<<endl;
			cout << "Your product is: "<< product<<endl;
			cout << "Your quotient is: " << quotient;
	
	}else{
cout << "Invalid code";		
	}
	return 0;
}

int main(){
intro();
mid();

return 0;
}
