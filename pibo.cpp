#include <stdio.h>

int P(int n) {
	if(n==1 || n==2) {
		return 1;
	}
	else {
		return P(n-1) + P(n-2);
	}
}

int main() {
	printf("%d", P(7));
	return 0;
}
