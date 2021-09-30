#include <stdio.h>

int main() {
	int b[100];
	int i = 0;
	int p,c,t;
	int n = 1;
	
	while( scanf("%d",&b[n]) != EOF ) {
		n++;
	}
	
	i = (n / 2) - 1;
	
	while(i >= 1) {
		p = i;
		c = p*2;
		while(c <= n) {
			if(b[c+1] < b[c]) c = c+1;
			if(b[p] > b[c]) { 
				t=b[p]; b[p] = b[c]; b[c] = t; 
				p=c;
				c=2*p;
			}
			
			else {
				break;
			}
		}
		for(int l = 1; l < n+1; l++) {
			printf("%d ", b[l]);
		}
		printf("\n");
		i--;
	}
	
	for(int k = 1; k < n; k++) {
		printf("%d ", b[k]);
	}
	
	return 0;
}
