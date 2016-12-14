#include<math.h>
#include<stdio.h>
int main()
{int i,j,k,l,m;
printf("termination character is 9\n");
	char a[100][100];
	for(i=0;i<100;i++)
	{
		gets(a[i]);
		if(a[i][0]=='9')
		break;
	}
   for(j=0;j<i;j++)
   {if(a[j][0]==NULL)
   continue;
   l=strlen(a[j]);
   for(k=0;k<l;k++)
   { 
   if(a[j][k]==' ')
   {
    printf("%c",a[j][k]);
   	for(m=k+1;m<l;m++)
   	{
   	if(a[j][m]==' ')
   	continue;
   	else
   	{printf("%c",a[j][m]);
   	k=m;
   		break;
	}
    }
   }
  else if(a[j][k]=='\t')
   {
   	printf(" ");
   	for(m=k+1;m<l;m++)
   	{
   	if(a[j][m]=='\t')
   	continue;
   	else
   	{printf("%c",a[j][m]);
   	k=m;
   		break;
	}
    }
   }
   else
   printf("%c",a[j][k]);
}
printf("\n");
}
   
   return 0;
}
