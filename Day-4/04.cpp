#include <iostream>
using namespace std;

class findDivisor {
    public:
    int findDigits(int n) {
        int count = 0;
        int m = n;
        for (int i = 0; i < n; i++) {
            int result = m % 10;
            if (result == 0) {
                m = m / 10;
                if (m == 0) {
                    break;
                }
                continue;
            } else {
                if (n % result == 0) {
                    count++;
                }
                m = m / 10;
                if (m == 0) {
                    break;
                }
            }
        }
        return count;
    }
};

    int main() {
        int num;
        cin>>num;
        for (int i = 1; i <= num; i++) {
            int n;
            cin>>n;
            findDivisor obj1;
            int count = obj1.findDigits(n);
            cout<< count <<endl;
        }
        return 0;
    }
