#include <stdio.h>

int M[100];

int F(int n) {
	if(M[n] == 0) {
		if(n==1 || n==2) {
			M[1] = 1;
			M[2] = 1;
			return 1; 
		}
		else {
			M[n] = F(n-1) + F(n-2);
			return M[n];
		}
	}
	else {
		return M[n];
	}
}

int main() {
	printf("%d", F(7));
	return 0;
}
