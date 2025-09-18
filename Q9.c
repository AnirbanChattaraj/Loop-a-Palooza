//Alphabet palindrome pyramid
#include<stdio.h>
int main(){
    int n;
    printf("Enter your rows: ");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++) {
        // spaces
        for (int j = 1; j <=n-i; j++) {
            printf(" ");
        }

        // increasing alphabets
        int b=65;
        for (int k = 1; k<=i ; k++) {
            printf("%c",b);
            b++;
        }

        // decreasing alphabets
        for (int l = 1; l<=i-1; l++) {
            printf("%c", b-2-(l-1));
        }

        printf("\n");
    }
    return 0;
}
