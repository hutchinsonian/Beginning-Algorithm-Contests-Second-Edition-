# include <stdio.h>
# include <string.h>
# include <ctype.h>

#define maxn 85

int main() {
    int total;
    // ACSII A-Z: 65-90
    double map[90];
    map['C'] = 12.01;
    map['H'] = 1.008;
    map['O'] = 16.00;
    map['N'] = 14.01;
    scanf("%d", &total);
    while (total--) {
        double mass = 0;
        char s[maxn];
        scanf("%s", s);
        for (int i = 0; i < strlen(s);) {
            int currVal = s[i++], nums = 0; // 第一个肯定是字母
            // 找字母后面的数字
            // printf("s[i]:%c\n", s[i]);
            while (isdigit(s[i])) {
                // printf("s[i]:%c\n", s[i]);
                nums = nums * 10 + s[i] - '0';
                i++;
            }
            // printf("nums:%d\n", nums);
            // 挨着字母的数字都找到 计算mass
            mass += map[currVal] * (nums == 0 ? 1 : nums);
        }
        printf("%.3f\n", mass);
    }
    return 0;
}