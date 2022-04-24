# include <stdio.h>

int main() {
    int kase = 0;
    int c;
    long long a, b;
    while(scanf("%ld %ld %d", &a, &b, &c) != -1 && (a != 0 && b != 0 && c != 0)) {
        float result = (float) a/b;
        printf("Case %d: %.*f\n", ++kase, c, result);
    }
    return 0;
}
