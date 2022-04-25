# include <stdio.h>
# include <string.h>

# define maxn 85

int main() {
    int total;
    char s[maxn];
    scanf("%d", &total);
    while (total--) {
        memset(s, 0, sizeof(s));
        scanf("%s", s);
        // 枚举所有可能的周期
        for (int i = 1; i <= strlen(s); i++) {
            // i 此时可能是周期
            if (strlen(s) % i == 0) {
                // 判断是否为周期
                int j;
                for (j = i; j < strlen(s); j++) {
                    if (s[j] != s[j % i]) {
                        break;
                    }
                }
                // i 是周期
                if (j == strlen(s)) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
        // 注意输出格式 题目要求空行分隔
        if (total) { printf("\n"); }
    }
    return 0;
}