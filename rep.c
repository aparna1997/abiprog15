#include<stdio.h>
int main()
{
int n,i,j,a[1000],count=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
	if(a[i]==a[j])
	{	t=a[j];
	count=j;
	}
}
	if(count!=0)
	{
	printf("%d",t);
	}
	else
	{
	    printf("Unique");
	}
	return 0;
}
