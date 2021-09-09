#include <stdio.h>

int M[100][100] = {0,};
int Multiple(int r, int c) {
	if(M[r][c] == 0) {
		M[r][c] = r*c;
		printf("계산값 출력:");
	}
	
	else {
		printf("메모되어 있던 값 출력:");
	}
	
	return M[r][c];
}

int main() {
	int a,b;
	
	printf("종료하려면 EOF를 입력하시오.\n");
	while (printf("두 수 입력:"), scanf("%d%d", &a,&b) !=EOF) {
	printf("%d\n\n", Multiple(a,b));
	}
	return 0;
}
