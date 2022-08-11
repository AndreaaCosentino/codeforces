#include <stdio.h>
#include <map>

#define EXIT_SUCCESS 0
typedef long long int lli; /*Used long long int although wasn't necessary.*/

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		lli n,f,pos = 0, neg = 0,nul = 0;
		bool notFound = false;
		scanf("%lld",&n);
		f = n;
		lli v[n];
		std::map<lli, lli> vm; /*Could have actually done it without the use of a map.*/
		for(lli i = 0; i < n; i++)
		{
			lli temp;
			scanf("%lld",&temp);
			v[i] = temp;
			vm[temp] = 1;
			if(temp > 0){
				pos++;
			}else if(temp < 0){
				neg++;
			}else{
				nul++;
			}
		}

		if(pos > 2 || neg > 2)
		{
			printf("NO\n");
			continue;
		}
		if(nul == n)
		{
			printf("YES\n");
			continue;
		}
		f = n-nul+2;
		if(f > n){f = n;}
		lli q[f],nul1 = 0;
		lli p = 0;
		for(lli i = 0; i < n; i++)
		{
			if(v[i] == 0)
			{
				nul1++;
			}
			if(nul1 <= 2 || v[i] != 0)
			{
				q[p] = v[i];
				p++;
			}
		}

		for(lli i = 0; i < f-2 && !notFound; i++)
		{
			for(lli j = i+1; j < f-1 && !notFound; j++)
			{
				for(lli k = j+1; k < f && !notFound; k++)
				{
					lli temp = q[i] + q[j] + q[k];
					if(vm[temp] != 1)
					{
						notFound = true;
					}
				}
			}
		}
		if(notFound)
		{
				printf("NO\n");
		}else{printf("YES\n");}
	}
	return EXIT_SUCCESS;
}
