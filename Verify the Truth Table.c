#include<stdio.h>
#include<stdlib.h>

int find_OR(int x,int y)
{
    if(x==0 && y==0)
     return 0;
    else
     return 1;
}
    
int find_AND(int x,int y)
{
    if(x==1 && y==1)
     return 1;
    else
     return 0;
}
int find_NOT(int x)
{
    if(x==1)
      return 0;
    else
     return 1;
}
int main()
{
    int ch,a,b;
    printf("1. OR\n");
    printf("2. AND\n");
    printf("3. NOT\n");
    printf("4 .exit\n");
    while(1)
    {
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Give two input:- 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Result %d",find_OR(a,b));
                    break;
            case 2: printf("Give two input :- 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Result %d",find_AND(a,b));
                    break;
            case 3: printf("Give an input :- 1 for true and 0 for false\n");
                    scanf("%d",&a);
                    printf("Result %d",find_NOT(a));
                    break;
            case 4: exit(0);
            default: printf("Wrong key\n");
        }
    }
    return 0;
}


