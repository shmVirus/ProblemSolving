#include<stdio.h>
int main(void)
{
    float a=1,b=1,s=0;
    do
    {
        s = s + (a/b);
        a+=2;
        b*=2;
    }
    while(a!=39);
    printf("%.2f\n",s);
    return 0;
}

/*
another solution:
#include<stdio.h>
int main(void)
{
    float a,b=1,s=0;
    for(a=1; ;)
    {
        s = s + (a/b);
        a+=2;
        b*=2;
        if (a==39)
        {
            break;
        }
    }
    printf("%.2f\n",s);
    return 0;
}

*/
