#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10][10],i,j,k,m,p=0,n,min,t=0,flag[10],l,dem[10],sup[10],sum=0;
	int flag1[10],cost,cost1,b,c,s=0,r=0;
	//clrscr();
	printf("enter the no of rows &columns\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			flag[j]=0;
		}
		flag1[i]=0;
	}
	printf("enter the values of supply &demand\n");
	for(i=0;i<m;i++)
	{
	scanf("%d",&sup[i]);
	s=s+sup[i];
	}
	for(i=0;i<n;i++)
	{
	scanf("%d",&dem[i]);
	r=r+dem[i];
	}
	printf("the matrix obtained is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ",a[i][j]);
		printf("%d\n",sup[i]);
	}
	for(i=0;i<n;i++)
	printf("%d\n",dem[i]);
	if(s!=r)
	{
	printf("solution cannot be found");
	getch();
	return 0;
	}
	c=m;
	b=n;
	while(c>0&&b>0)
	{
		for(i=0;i<m;)
		{
			if(flag1[i]==0)
			{
				for(j=0;j<n;)
				{
					if(flag[j]==0)
					{
						min=a[i][j];
						for(k=0;k<m;k++)
						{
						if(flag1[k]==0)
						{
						for(l=0;l<n;l++)
						{
						if((min>=a[k][l])&&(flag[l]==0))
						{
							min=a[k][l];
							t=k;
							p=l;
							if(sup[k]>dem[l])
							cost=dem[l];
							else
							cost=sup[k];
						}
						}
						}
						}
				for(k=0;k<m;k++,i++)
				{
					if(flag1[k]==0)
					{
					for(l=0;l<n;l++,j++)
					{
					if(flag[l]==0&&min==a[k][l])
					{
					if(sup[k]>dem[l])
					cost1=dem[l];
					else
					cost1=sup[k];
					if(cost>cost1)
					{
					min=a[k][l];
					t=k;
					p=l;
					}
					}
					}
					}
				}
					}
					else
					j++;
				}
				}
			else
			i++;
		}
		printf("the min element is %d\n",min);
		printf("the value of t&p is %d %d\n",t,p);
		if(sup[t]>dem[p])
		{
			sum=sum+(min*dem[p]);
			printf("\nthe sum is %d\n",sum);
			sup[t]=sup[t]-dem[p];
			flag[p]=1;
			b--;
		}
		else
		{
			sum=sum+(min*sup[t]);
			printf("\nthe sum is %d\n",sum);
			dem[p]=dem[p]-sup[t];
			flag1[t]=1;
			c--;
		}

	}
	printf("the total value of sum is %d",sum);
	getch();
}
