#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n % 2 == 1) {
            printf("win 1\n");
        } else {
            double lo = log(n) / log(2);
            if (lo == floor(lo))
                printf("lose\n");
            else {
                int d = pow(2, floor(lo));
                printf("win %d\n", n - d);
            }
        }
    }
}