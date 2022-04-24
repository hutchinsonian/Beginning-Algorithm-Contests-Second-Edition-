# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int weigth = 2 * n - 1;
    for (int i = n; i >= 1; i--) {
        int numOfStars = 2 * i - 1;
        int numOfSpace = (weigth - numOfStars) / 2;
        // printf("%d, %d", numOfSpace, numOfStars);
        for (int j = 0; j < numOfSpace; j++) {
            printf(" ");
        }
        for (int j = 0; j < numOfStars; j++) {
            printf("*");
        }
        for (int j = 0; j < numOfSpace; j++) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}