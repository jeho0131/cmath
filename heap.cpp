#include <stdio.h>

int main() {
	int h[100];
	int n = 1;
	int c, p;
	int t;
	
	while( scanf("%d", &h[n]) != EOF) {
		c = n;
		p = c/2;
		
		while( c >= 2 && h[p] > h[c] ) {
			t = h[p]; h[p] = h[c]; h[c] = t;
			c = p; p = c/2;
		}
		
		n++;
	}
	
	for(int i = 1; i < n; i++) {
		printf("%d ", h[i]);
	}
	
	return 0;
}
