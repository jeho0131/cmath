#include <stdio.h>

int M[7][7] = { {2,2,2,2,2,2,2},
				{2,0,0,0,0,0,2},
				{2,0,2,0,0,2,2},
				{2,0,2,2,2,0,2},
				{2,0,0,0,0,0,2},
				{2,0,2,0,2,0,2},
				{2,2,2,2,2,2,2} };
				
int MM[7][7] = { {2,2,2,2,2,2,2},
				{2,0,0,0,0,0,2},
				{2,0,2,0,0,2,2},
				{2,0,2,2,2,0,2},
				{2,0,0,0,0,0,2},
				{2,0,2,0,2,0,2},
				{2,2,2,2,2,2,2} };
				
int movenum = 0;

void move(int r, int c, int Mc[][7], int moven) {
	if ((r == 3 && c == 5) && moven > movenum) {
		movenum = moven;
	}
	
	Mc[r][c] = 1;
	
	if(Mc[r][c+1] == 0) { move(r, c+1, Mc, moven += 1); }
	if(Mc[r+1][c] == 0) { move(r+1, c, Mc, moven += 1); }
	if(Mc[r][c-1] == 0) { move(r, c-1, Mc, moven += 1); }
	if(Mc[r-1][c] == 0) { move(r-1, c, Mc, moven += 1); }
}

int main() {
	move(1, 5, M, 0);
	printf("%d", movenum);
	return 0;
}
