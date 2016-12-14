#include<stdio.h>
#include<math.h>
void rf(int,int,int);
void rb(int,int,int);
void cu(int,int,int);
void cd(int,int,int);
int a[100][100];
int flag=0;
int main()
{int b,c,c2,d,e,e2,f,g,g2,h,j,j2,i,n;
	printf("enter the size of the 2d array");
	scanf("%d",&n);
	a[n][n];
	b=0;c=0;c2=n-1;d=n-1;e=1;e2=n-1;f=n-1;g=n-2;g2=0;h=0;j=n-2;j2=1;
	while(1)
	{if(flag==n*n)
	break;
		rf(b,c,c2);
		cd(d,e,e2);
		rb(f,g,g2);
		cu(h,j,j2);
		b=b+1;c=c+1;c2=c2-1;
	d=d-1;e=e+1;e2=e2-1;
	f=f-1;g=g-1;g2=g2+1;
	h=h+1;j=j-1;j2=j2+1;
		
		}
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		printf("%d  ",a[i][j]);
printf("\n");
}
}
void rf(int b,int c,int c2)
{int i;
	for(i=c;i<=c2;i++)
	{
	scanf("%d",&a[b][i]);
++flag;
}
}
void cd(int d,int e,int e2)
{int i;
	for(i=e;i<=e2;i++)
	{
	scanf("%d",&a[i][d]);
	++flag;
}
}
void rb(int f,int g,int g2)
{int i;
	for(i=g;i>=g2;i--)
	{
	scanf("%d",&a[f][i]);
	++flag;
}
}
void cu(int h,int j,int j2)
{int i;
	for(i=j;i>=j2;i--)
	{
	scanf("%d",&a[i][h]);
++flag;
}
}

