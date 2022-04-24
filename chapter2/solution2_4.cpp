# include <stdio.h>

int main() {
    int kase = 0;
    long long n, m;
    while(scanf("%ld %ld", &n, &m) != -1 && (n != 0 && m != 0)) {
        double sum = 0;
        for (int i = n; i <= m; i++) {
            sum += 1.0/i * 1.0/i;
            // printf("sum:%.5f\n", sum);
        }
        printf("Case %d: %.5f\n", ++kase, sum);
    }
    return 0;
}
