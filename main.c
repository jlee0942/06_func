#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int fact(int n);
int combination(int n, int r)
{
	int high, low;
	high= fact(n);
	low= fact(n-r)*fact(r);

	return (high/low);
}

int fact(int n)
{
	int res=1;
	int i;
	
	for(i=1; i<=n ;i++)
	{
		res=res*i;
	}
	return res;		
}


int main(void)
{
	int n, r, result;
	
	printf("input n&r:");
	scanf("%d %d", &n, &r);
	result=combination(n,r);
	printf("result=%d\n",result);
}



