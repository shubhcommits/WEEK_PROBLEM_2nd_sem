//Consider a scenario for 'T' test cases. For each test case 't1', let 'a1' and 'a2' be two positive number and there exist a scenario where 'a1' and 'a2' are divisible by a set of positive numbers S={x1, x2,...xn}.

//Compute the greatest number 'x' from the set 'S', such that 'x' divides both 'a1' and 'a2'.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,a1,a2,gcd;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a1,&a2);
        for(int j=1;j<=a1&&j<=a2;j++){
            if(a1%j==0 && a2%j==0){
                gcd = j;
            }
        }
        printf("%d\n",gcd);
    }
    return 0;
}
