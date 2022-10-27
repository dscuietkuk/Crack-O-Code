#include <iostream>
using namespace std;

class same {
    public:
    int equalizeArray(int arr[], int n) {
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count1++;
                    if (count1 > count) {
                        count = count1;
                    }
                }
            }
            count1 = 0;
        }
        return (n - count);
    }
};

    int main() {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        same obj1;
        int count = obj1.equalizeArray(arr,n);
        cout<<count;
    }
