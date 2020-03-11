#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    int q, r;
    printf("enter a number and its divider\n");
    scanf("%d %d", &a, &b);
    if(b==0){
        printf("Division by zero error\n");
    }
    else{
        q = a/b;
        r = a%b;
        printf("a divided by b: %d\n", q);
        printf("and the remainder is: %d\n", r);
    }
    return 0;
}
