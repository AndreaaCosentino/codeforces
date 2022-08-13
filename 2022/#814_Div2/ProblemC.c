/*Problem Text: https://codeforces.com/contest/1712/problem/C */
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,f = -1,c = 0,fi;
		scanf("%d",&n);
		int v[n],u[n];
		u[0] = -1;
		for(int i = 0; i < n; i++)
		{
			int temp;
			scanf("%d",&temp);
			v[i] = temp;
			u[temp] = 1;
		}
		while(1)
		{
			f = -1;
			for(int i = 0; i < n-1 ; i++)
				if(v[i] > v[i+1])
				  {
				  	f = v[i];
				  	fi = i;
				  }
			if (f == -1) break;
			for(int i = 0; i < n; i++)
				{
					if(u[v[i]] == 1 && i <= fi) 
					{
						c++;
						u[v[i]] = 0;
						v[i] = 0;
					}else if( u[v[i]] == 0)
					{
						v[i] = 0;
					}
				}
		}
		printf("%d\n",c);
	}
	return 0;
}
