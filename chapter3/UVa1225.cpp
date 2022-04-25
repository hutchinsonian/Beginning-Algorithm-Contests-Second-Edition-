# include <stdio.h>
# include <string.h>

int main() {
    int total, n;
    
    scanf("%d", &total);
    while (total--) {
        int memo[10] = {0};
        int num = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            int temp = i;
            while (temp != 0) {
                memo[temp % 10]++;
                temp /= 10;
            }
        }
        for (int i = 0; i < 9; i++) {
            printf("%d ", memo[i]);
        }
        printf("%d\n", memo[9]);
    }
    return 0;
}