#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(0));
	int randomValue = rand();
	
	cout << "Random Value "<<randomValue<<endl;
	
	return 0;
}
