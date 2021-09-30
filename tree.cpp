#include <stdio.h>

int main() {
	int T[] = {0, 10, 25, 22, 19, 9, 12};
	int num = 0;
	int next = 1;
	
	scanf("%d", &num);
	
	printf("%d %d\n", T[num*2], T[(num*2)+1]);
	
	for(int i = 1; i < 7; i++) {
		printf("%d ", T[i]);
		
		if(i == next) {
			printf("\n");
			next = next * 2 + 1;
		}
	}
	
	return 0;
}
