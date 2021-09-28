#include <stdio.h>

int main() {
	int num[11] = {0,0,1,1,0,0,2,0,1,0,0};
	
	num[10] += 1;
	for(int i = 0; i < 11; i++) {
		num[10-i] += num[10-i+1];
	}
	
	for(int j = 0; j < 11; j++) {
		printf("%d ", num[j]);
	}
	
	return 0;
}
