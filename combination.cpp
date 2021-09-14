#include <stdio.h>

int P(int n) {
	if(n == 1) {
		return 1;
	}
	
	else {
		return P(n-1) * n;
	}
}

int findcom(int n, int r) {
	if(r == 0 || n == r) {
		return 1;
	}
	
	else {
		return findcom(n-1, r-1) + findcom(n-1);
	}
}

int main() {
	int n = 0;
	int r = 0;
	
	scanf("%d %d", &n, &r);
	
	printf("%d", findcom(n,r));
	
	return 0;
}
