#include <stdio.h>

int main() {
	int n = 0;
	int r = 0;
	int on = 1;
	
	scanf("%d %d", &n, &r);
	
	for(int i = 0; i < r; i++) {
		on *= n-i;
	}
	
	printf("%d", on);
	
	return 0;
}
