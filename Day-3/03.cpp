#include <iostream>
using namespace std;

class socks {
    public:
    int sockMerchant(int n, int ar[]) {
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (ar[i] == ar[i + 1]) {
                i++;
                count++;
            }
        }
        return count;
    }
};

    int main() {
        int n; 
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin>>ar[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (ar[j] > ar[j + 1]) {
                    int temp = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = temp;
                }
            }
        }
        socks obj1;
        int count = obj1.sockMerchant(n, ar);
        cout << count;
    }

