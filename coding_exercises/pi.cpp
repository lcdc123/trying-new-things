#include <stdio.h>
#include <iostream>
#include <windows.h>

int main() {
    int j = 1;
    while(j < 3){
    int r[2800 + 1];
    int i, k, b, d, c = 0;
    for (i = 0; i < 2800; i++) {
        r[i] = 2000;
    }
    for (k = 2800; k > 0; k -= 14) {
        d = 0;
        i = k;
        for (;;) {
            d += r[i] * 10000;
            b = 2 * i - 1;
            r[i] = d % b;
            d /= b;
            i--;
            if (i == 0) break;
            d *= i;
        }
        if(c != 0 && c != 8 && c != c + 2 && c != c+7)
        printf("%.4d", c + d / 10000);
        c = d % 10000;
    }
    j++;
    std::cout<<std::endl<<std::endl<<std::endl;
    }
    return 0;
}
