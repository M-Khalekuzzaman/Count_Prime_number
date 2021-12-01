#include<stdio.h>
int main()
{
    int number;
    printf("Enter your last number is : ");
    scanf("%d",&number);
    int count;
    printf("The prime number series is : ");
    for(int i = 1 ; i<=number ; i++)
    {
        count = 0;
        for(int j = 2 ; j<=i/2 ; j++)
        {
            if(i%j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && i!=1)
            printf("%d ",i);

    }

    getch();
}
