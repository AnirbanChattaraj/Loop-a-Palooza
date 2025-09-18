// Number Pyramid
#include<stdio.h>
int main(){
    int n ,nst=1;
    printf("Enter your rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j <=n-i; j++)
       {
        printf(" ");
       }
       for (int k = 1; k <=nst; k++)
       {
        printf("%d",k);
       }
       nst=nst+2;
       printf("\n");
    }
    return 0;
}