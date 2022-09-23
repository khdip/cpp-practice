#include<stdio.h>
#include<string.h>
int main ()
{

    int i,count=0;
    char ch[20];
    scanf("%s",&ch);
    for (i=0;i<10;i++)
    {

        if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
            count++;

    }
    printf("%d",count);
    return 0;
}
