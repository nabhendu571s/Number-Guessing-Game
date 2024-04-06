#include <stdio.h>
int main() {
    int num, i, flag;
    int n;
    scanf("%d",&n);
    for (num = 2; num <= n; num++) {
        flag = 0;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d\n", num);
        }
        
    }
    return 0;
}