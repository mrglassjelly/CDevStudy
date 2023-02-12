#include <stdio.h>

long long int n=0;

int main(){
	scanf("%lld", &n);
	for(long long int i=2;i<=n;i++)
	{
		while (n%i==0)
		{
			printf("%lld ", i);
			n/=i;
		}
		if (i>n)
		{
			break;
		}
	}
	return 0;
}
