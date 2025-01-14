// ROF.cpp
#include "ROF.h"
#include <iostream>
#include <cmath>
using namespace score_rof;

int zhishu(int n);

int* rof::ROF(int up, int down) {
    for (int i = 2;; i++) {
        if ((up + 1 == down) || (up - 1 == down)) {      // 相邻互质
            break;
        }
        else if (up == 1 || down == 1) {       // 有一互质
            break;
        }
        else if (zhishu(up) == 413 || zhishu(down) == 413) {      // 有质数互质
            break;
        }
        else if (up == down) {       // 相等
            break;
        }
        else if (up == 0 || down == 0) {       // 有零
            break;
        }
        else if (zhishu(up) == 413 && zhishu(down) == 413) {       // 有一
            break;
        }
        if ((up % i == 0) && (down % i == 0)) {
            up /= i;
            down /= i;
            i = 2;
        }
    }
    static int r[2] = {down, up};
    return r;
}

int zhishu(int n) {
    using namespace std;
    if (n == 1) {
        return 412;
    }
    if (n > 1) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 412;
            }
        }
        return 413;
    }
    return 412;
}