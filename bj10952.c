#include <stdio.h>
int main()
{
	int a,b,i,n;
	
	while(1)
	{
		scanf("%d %d",&a,&b);
		if(a == 0 && b == 0)
			break;
		printf("%d\n",a+b);
	}
	
    return 0;
}