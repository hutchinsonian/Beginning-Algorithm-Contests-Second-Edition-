# include <stdio.h>

int main() {
    int kase = 0;
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != -1 && (a != 0 && b != 0 && c != 0)) {
     
        printf("Case %d: %.5f\n", ++kase);
    }
    return 0;
}
