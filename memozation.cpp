#include <stdio.h>

int M[100][100] = {0,};
int Multiple(int r, int c) {
	if(M[r][c] == 0) {
		M[r][c] = r*c;
		printf("��갪 ���:");
	}
	
	else {
		printf("�޸�Ǿ� �ִ� �� ���:");
	}
	
	return M[r][c];
}

int main() {
	int a,b;
	
	printf("�����Ϸ��� EOF�� �Է��Ͻÿ�.\n");
	while (printf("�� �� �Է�:"), scanf("%d%d", &a,&b) !=EOF) {
	printf("%d\n\n", Multiple(a,b));
	}
	return 0;
}
