#include<stdio.h>
#include<conio.h>
int main()
{
static int a[10][10];
int i,j,m,n,sum=0;
clrscr();
printf("enter the no. of rows and columns");
scanf("%d%d",&m,&n);
printf("enter the co-effecent numbers");
   for(i=0; i<m; i++)
   {
     for(j=0;j<n;j++)
       {
	  scanf("%d",&a[i][j]);
       }
   }
  for(i=0; i<m; i++)
    {
      for(j=0;j<n; j++)
	{
	   sum=sum+a[i][j];
	}
	printf("sum of %d rows=%d\n",i,sum);
	 sum=0;
     }
  for(j=0; j<m; j++)
    {
      for(i=0;i<n; i++)
	{
	   sum=sum+a[i][j];
	}
	printf("sum of %d rows=%d\n",j,sum);
	sum=0;
     }
getch();
return 0;
}

