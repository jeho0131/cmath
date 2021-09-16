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
		return findcom(n-1, r-1) + findcom(n-1, r);
	}
}

int findp(int n, int r) {
	if(r == 1) {
		return n;
	}
	
	else if(n == r) {
		return P(n);
	}
	
	else {
		return (findp(n-1, r-1) * r) + findp(n-1, r);
	}
}

int main() {
	int n = 0;
	int r = 0;
	
	scanf("%d %d", &n, &r);
	
	printf("%d", findp(n,r));
	
	return 0;
}
