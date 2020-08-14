#include<stdio.h>
int main()
{
    int i,n,num,count=0,p=0,c=0;
    scanf("%d",&num);
    while(num!=-1)
    {

        for(i=1;i<=n;i++)
        {
            if(num%i==0)
                count++;
        }
            if(count==2)
                p++;
            else
                c++;
        }
    scanf("%d",&num);
    }
    printf("prime no =%d\n",p);
    printf("composite no =%d\n",c);

}
