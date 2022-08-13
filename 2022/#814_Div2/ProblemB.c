/*Problem text: https://codeforces.com/contest/1712/problem/B */
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int v[n];
		v[0] = 1;
		for(int i = n-1; i > 0; i -= 2)
		{
			v[i] = i;
			v[i-1] = i+1;
		}
		for(int i = 0; i < n ; i++)
			printf("%d ",v[i]);
		printf("\n");
	}
	return 0;
}
