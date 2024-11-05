#include <iostream>

using namespace std;

int main(){
char chessboard[64];

for(int i =0; i<15; i++){	
	chessboard[i] =' ';


chessboard [0]= 'R';
chessboard [1]= 'N';
chessboard [2] = 'B';
chessboard [3] = 'Q';
chessboard [4] = 'K';
chessboard [5] = 'B';
chessboard [6] = 'N';
chessboard [7] = 'R';
}


for(int col=16; col<48;col++){
	chessboard[1] = 'P';
}
	
	
	chessboard[56] = 'r';
	chessboard[57] = 'n';
	chessboard[58] = 'b';
	chessboard[59] = 'q';
	chessboard[60] = 'k';
	chessboard[61] = 'b';
	chessboard[62] = 'n';
	chessboard[63] = 'r';
	
	
	for(int col=16; col<55;col++){
	chessboard[55] = 'p';
}
for(int i=0; i<8; i++){
	for(int col = 0; col<8; col++)
	cout<< chessboard[i*8+col]<<' ';
	}

	cout << endl;

return 0;
}



	
	
	
	
	
	
	
	
	
	
