#include <iostream>

using namespace std;

int converter(char str[]){
	int result = 0;
	int sign = 1;
	int i = 0;
	
	if(str[1] == '-'){
		sign = -1;
		i++;
	}
	
	for(; str[i] != '\0'; i++){
		result=result*10 +(str[i]-'0');
	}
	return result*sign;
}

int main(){
	char str1[100], str2[100],str3[100],str4[100];
	
	cout << "Enter four  numbers in words: ";
	cin >> str1>>str2>>str3>>str4;
	
	int num1 = converter(str1);
	int num2 = converter(str2);
	int num3 = converter(str3);
	int num4 = converter(str4);
	
	int total = num1 + num2 + num3 + num4;
	
	cout << "The value of your input is "<< total;
	
	return 0;
}
