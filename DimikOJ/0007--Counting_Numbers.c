#include<stdio.h>
int main(void)
{
    int t,T, a,b,c=0,i=0;
    //double x,y,current,req,y1;
    char st[1001];
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {  i=0;c=0;
         getchar();
        gets(st);//scanf("%s",st);getchar();
        while(st[i]!='\0')
        {
            if(st[i]==' ')
               c++;
           i++;
        }
     printf("%d\n",c+1);
    }
    return 0;
}
