// Consider a scenario with 'T' test cases. Hence, for each test case 'ti', let there be any positive number 'n'. Since, factorial of a number 'n' can be computed through the following formula:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,sum,remainder;
    int fact;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        fact = 1;
        for(int j=1;j<=n;j++){
            fact = fact*j;
        }
         sum = 0;
        while(fact!=0){
            remainder = fact%10;
            fact = fact/10;
            sum = sum+remainder;
        }
        printf("%d\n",sum);
    }
    return 0;
}
