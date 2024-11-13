#include<iostream>

using namespace std;
struct BitData
{
	unsigned int original;
	unsigned int reversed;
};

unsigned int reversebits(unsigned int bit){
	unsigned int result =0;
	for(int i= 0; i<32; i++){
		result <<=1;
		result |= (bit & 1);
		bit >>=1;
	}
	return result;
}
void printbits(unsigned int bit){
	for(int i = 31;i>=0;i--){
		cout<< ((bit>>i)&1);
	}
	cout<<endl;
}
   
   int main(){
   	BitData data;
	   cout<<"Enter a number: ";
	   cin >> data.original;
	   cout << "Orginal bits: ";
	   printbits(data.original);
	   
	   data.reversed = reversebits(data.original);
	   cout << "Reversed bits: ";
	   printbits(data.reversed);
	   
	   return 0;
   }

