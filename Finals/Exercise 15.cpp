#include <iostream>
#include <ctime>


using namespace std;

int main(){
	time_t now = time(0);
	cout << "current time: "<<ctime(&now)<< endl;
	
	
	return 0;
}
