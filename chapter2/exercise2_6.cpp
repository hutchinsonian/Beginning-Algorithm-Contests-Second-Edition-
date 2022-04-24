# include <stdio.h>

int main() {
    for (int abc = 100; abc <= 333; abc++) {
        int memo[10] = {0};
        for (int i = 1; i <= 3; i++) {
            memo[abc*i / 100] = 1;
            memo[abc*i / 10 % 10] = 1;
            memo[abc*i % 10] = 1;
        }
        int sumOfUse = 0;
        for (int i = 1; i <= 9; i++){
            sumOfUse += memo[i];
        }
        if (sumOfUse == 9) {
            printf("%d %d %d\n", abc, abc*2, abc*3);
        }
    }
    return 0;
}