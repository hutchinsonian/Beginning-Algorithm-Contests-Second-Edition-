# include <stdio.h>

int main() {
    int kase = 0, a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != -1) {
        int sum = -1;
        for (int i = 10; i <= 100; i++) {
            if (i % 3 == a && i % 5 == b && i % 7 == c) {
                sum = i;
                break;
            }
        }
        //  if (kase == 0) { printf("\n"); }
        if (sum == -1) {
            printf("Case %d: No answer\n", ++kase, sum);
        }
        else { printf("Case %d: %d\n", ++kase, sum); }
    }
    return 0;
}
