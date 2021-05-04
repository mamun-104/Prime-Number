
#include<stdio.h>
int main()
{
    int i,n,flag;
    scanf("%d",&n);

    flag=0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("This is a Prime Number\n");
    }
    else
    {
        printf("Not a Prime Number\n");
    }




    return 0;
}
