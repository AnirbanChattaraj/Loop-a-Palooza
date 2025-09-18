//Alphabet Pyramid
#include<stdio.h>
int main(){
    int n ,noa=1;
    printf("Enter your rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=65;
       for (int j = 1; j <=n-i; j++)
       {
        printf(" ");
       }
       for (int k = 1; k <=noa; k++)
       {
        printf("%c",a);
        a++;
       }
       noa=noa+2;
       
       printf("\n");
    }
    return 0;
}