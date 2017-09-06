#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x[10][10],a[10],b[10],n,m,sum=0,sum1=0,sum2=0,r=0;
clrscr();
printf("Enter the no of factories");
scanf("%d",&n);
printf("Enter the no of workshops");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("Enter the value of x[%d][%d]",i,j);
scanf("%d",&x[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
printf("Enter the value of a[%d]",i);
scanf("%d",&a[i]);
sum1=sum1+a[i];
}
for(i=0;i<m;i++)
{
printf("Enter the value of b[%d]",i);
scanf("%d",&b[i]);
sum2=sum2+a[i];
}
if(sum1!=sum2)
printf("que is unbalanced");
else
printf("que is balanced");
i=0,j=0;
while(i<n && j<n)
{
if(a[i]<b[j])
[
sum=sum+a[i]*x[i][j];
b[j]=b[j]-a[i];
a[i]=0;
i=i+1;
r++;
}
else if(b[j]<a[i])
{
sum=sum+b[j]*x[i][j];
a[i]=a[i]-b[j];
b[j]=0;
j=j+1;
r++;
}
else
{
sum=sum+a[i]*x[i][j];
a[i]=b[j]=0;
i=i+1;
j=j+1;
r++;
}
}
if(r<(n+m-1))
printf("ans is degenerating");
else
{
printf("ans is generating");
printf("sum is %d",sum);
}
getch();
}
