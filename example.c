// link list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node *a,*b;
};
int main()
{
    int input,q=1;
    struct node *j,*k,*l,*m;
    while(1){
        scanf("%d",&input);
        if(input==-1){
            q=0;
            break;
        }
        if(input >=0){
            j = (struct node *)malloc(sizeof(struct node));
            j -> x = input;
            j -> a = NULL;
            j -> b = NULL;
            k = j;
            l = k;
            break;
        }
    }
    if(q){
        while (1)
        {
            
            scanf("%d",&input);
            if (input == -1)
            {
                break;
            }
            if(input>=0){
                j = (struct node *)malloc(sizeof(struct node));
                j -> x = input;
                j -> a = NULL;
                j -> b = l;
                l -> a = j;
                l = l -> a;
                
                for (m = j;m -> b != NULL;m=m -> b)
                {
                    int n;
                    if (m -> x < (m -> b) -> x)
                    {
                        n = (m -> x);
                        m -> x = (m -> b) -> x;
                        (m -> b) -> x = n;

                    }
                }
            }
        }
    }
    while (k != NULL)
    {
        printf("%d\n",k -> x);
        k = k -> a;
    }
}