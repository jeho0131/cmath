#include <stdio.h>

int findgcf(int n1, int n2) {
	int big = 0;
	int small = 0;
	
	if(n1 > n2) {
		big = n1;
		small = n2;
	}
	else {
		big = n2;
		small = n1;
	}
	
	if(big % small == 0) {
		return small;
	}
	else {
		return findgcf(int(big % small), small);
	}
}

int main() {
	int n1 = 0;
	int n2 = 0;
	int gcf = 0;
	
	scanf("%d %d", &n1, &n2);
	printf("%d", findgcf(n1,n2));
	
	return 0;
}
