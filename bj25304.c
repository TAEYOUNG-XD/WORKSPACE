#include<stdio.h>

int main(void)
{
    	int A, B, C, D;
	int E = 0;

	scanf("%d", &A);
	scanf("%d", &B);
	for (int G = 1; G <= B; G++) {
		scanf("%d %d",&C,&D);
		E = E + C * D;
	}
	if (A == E) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}