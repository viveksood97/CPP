#include <iostream>


int mySqrt(int x) {
        long long s = 0;
        long long ans = 0;
        int mid = (s+x)/2;
        if(mid*mid == x) return mid;
        else if(mid*mid < x) {
            ans = mid;
            ++mid;
        }
        else {
            --mid;
        }
    }

int main() {
    return 0;
}