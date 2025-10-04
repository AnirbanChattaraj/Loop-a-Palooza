//Print Alphabet triangle
#include<stdio.h>
int main(){
    int n;
    printf("Enter your rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=65;
       for (int j = 1; j <=n-i; j++)
       {
        printf(" ");
       }
       for (int k = 1; k <=i; k++)
       {
        printf("%c",a);
        a++;
       }
       printf("\n");
    }
    return 0;
    
}
