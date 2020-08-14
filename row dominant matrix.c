 #include<stdio.h>
int main()
{
 	int i,j,rows,columns,a[10][10],Sum,Sums;
 	printf("Please Enter Number of rows and columns :\n");
 	scanf("%d %d", &i, &j);
 	printf("Please Enter the Matrix Elements:\n");
 	for(rows=0;rows<i;rows++)
  	{
   		for(columns=0;columns<j;columns++)
    	{
      		scanf("%d",&a[rows][columns]);
    	}
  	}
 	for(rows=0;rows<i;rows++)
  	{
  		Sum = 0;
  		for(columns=0;columns<j;columns++)
  		{
  			Sum=Sum+a[rows][columns];
		}
   		printf("\n The Sum of Elements of a Rows in a Matrix = %d",Sum );
  	}
 	for(rows=0;rows<i;rows++)
  	{
  		Sums = 0;
  		for(columns=0;columns<j;columns++)
  		{
  			Sums=Sums+a[columns][rows];
		}
   		printf("\n The Sum of Elements of a Columns in a Matrix =  %d",Sums );
  	}
    if(Sum>Sums)
    {
        printf("\nMatrix is Row Dominant");
    }
    else
    {
        printf("\nMatrix is not Row Dominant");
    }
 	return 0;
}
