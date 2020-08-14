#include<stdio.h>
#include<conio.h>
int max(int a[],int n)
{
int i,max;
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}
void main()
{
int a[25][25],b[25],m,n,i,j;
printf("Enter the order of matrix :\n");
scanf("%d %d",&m,&n);
printf("\n Enter the matrix row wise :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
b[j]=a[i][j];
printf("\n Largest number of row %d : %d",i+1,max(b,n));
}
getch();
}
