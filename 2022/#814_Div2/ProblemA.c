#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,c = 0;
		scanf("%d%d",&n,&k);
		int q;
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&q);
			if(i < k)
			{
				if(q > k)
					c++;
			}
		}
	
		printf("%d\n",c);

	}
	return 0;
}
