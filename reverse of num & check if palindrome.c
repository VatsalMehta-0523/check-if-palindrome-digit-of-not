#include <stdio.h>

int main(){
    int n , temp , rev = 0;
    printf("enter a number :");
    scanf("%d",&n);

    temp = n ;

    while (temp != 0 ){
        rev = (rev*10) + (temp%10) ;
        temp/=10;
    }
    //printf("%d",rev);

    if (n == rev ){
        printf("%d is a palindrome number ",n);
    }
    else{
        printf("%d is not a palindrome number ",n);
    }

}
