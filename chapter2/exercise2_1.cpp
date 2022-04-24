# include <iostream>

using namespace std;

int main() {
    for (int i = 100; i <= 999; i++) {
        int a = i / 100; // 百位
        int b = i / 10 % 10; // 十位
        int c = i % 10;
        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}