#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char S[]="hello c";
    FILE *fp;
    fp=fopen("f1.txt","w");
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
}
