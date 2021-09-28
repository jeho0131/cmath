#include <stdio.h>

int findnum(int num, int memo[10]) {
	for(int k = 0; k < 10; k++) {
		if(num == memo[k]) { return 0; }
	}
	
	return 1;
}

int main() {
	int score[10] = {34,32,67,34,54,32,67,32,12,56};
	int rank[10];
	int rankm[10];
	
	for(int i = 0; i < 10; i++) {
		rank[i] = 1;
		for(int j = 0; j < 10; j++) {
			if(score[i] < score[j] && findnum(score[j], rankm) == 1) { 
				rank[i]++; 
				rankm[j] = score[j];
			}
		}
		for(int r = 0; r < 10; r++) {
			rankm[r] = 0;
		}
	}
	
	for(int i = 0; i < 10; i++) {
		printf("%d %d\n", score[i], rank[i]);
	}
	
	return 0;
}
