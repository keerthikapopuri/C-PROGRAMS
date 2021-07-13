#include<math.h>
#include<stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,flag=0;
		scanf("%d%d",&a,&b);
		int i;
		for(i=a;i<=b;i++)
		{
		 int m=sqrt(i);
			for(int j=2;j<m;j++)
			{
				if(i%j==0)
				{
				flag=1;
				}
			}
			if(flag==0)
			printf("%d\n",i);
		}
	}

	return 0;
}