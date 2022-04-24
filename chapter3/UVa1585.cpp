# include <stdio.h>
# include <string.h>

#define maxn 85

int main() {
    int total, c;
    scanf("%d", &total);
    while (total--) {
        int score = 0;
        int consecutiveO = 1;
        char s[maxn];
        scanf("%s", s);
        printf("%d", strlen(s));
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == 'X') {
                consecutiveO = 1;
                continue;
            }
            score += consecutiveO;
            consecutiveO++;
        }
        
        printf("%d\n", score);
    }
    return 0;
}