#include <stdio.h>

int num[] = {59, 73, 24, 38, 95, 28, 1, 59, 32, 91, 40};

int putn(int n, int mn, int m) {
	if(m == 0 && num[n] >= mn) {
		return n;
	}
	else if(m == 0 && n < 10) {
		return putn(n+1, mn, m);
	}
	
	else if(m == 1 && num[n] <= mn) {
		return n;
	}
	else if(m == 1 && n > 0) {
		return putn(n-1, mn, m);
	}
}

int main() {
	int r = 0;
	int b = (sizeof(num) / sizeof(int)) - 1;
	int mn = 38;
	int ng = 0;
	
	while(true) {
		r = putn(r, mn, 0);
		b = putn(b, mn, 1);
		
		for(int i = 0; i < 11; i++) {
			printf(" %d ", num[i]);
		}
		
		printf("\n");
		if(r > b || (r > (sizeof(num) / sizeof(int)) - 1 || b < 0)) {
			break;
		}
		
		else {
			ng = num[r];
			num[r] = num[b];
			num[b] = ng;
			r += 1;
			b -= 1;
		}
	}
	for(int i = 0; i < 11; i++) {
		printf(" %d ", num[i]);
	}
	return 0;
}
