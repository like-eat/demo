#include<stdio.h>
#include<math.h>
int a[100]={0},b[100]={0};
int n;
int su(int n)
{
	int i;
			for(i=2;i<n;i++)
    {
    		if(n%i==0)
	        return 0;
	}
	return 1;
}
void huan(int t)
{
	int i;
	if(t==n&&su(a[n-1]+a[0]))
	{
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(b[i-1]==0)
			{
				a[t]=i;
				b[i-1]=1;
				if(su(a[t]+a[t-1]))
				{
					huan(t+1);
				}
				b[i-1]=0;
			}
		}
	}
}
int main()
{
	int i,j,k;
	scanf("%d",&n);
	a[0]=1;
	b[0]=1;
	huan(1);
	return 0;
}
