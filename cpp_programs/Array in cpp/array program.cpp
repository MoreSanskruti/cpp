#include <bits/stdc++.h>
using namespace std;

        int Min(int arr[], int n)
        {
            return *min_element(arr, arr + n);
        }

        int Max(int arr[], int n)
        {
            return *max_element(arr, arr + n);
        }

        int main()
        {
            int arr[] = { 12, 1234, 45, 67, 1 };
            int n = sizeof(arr) / sizeof(arr[0]);

            cout << "Minimum element of array: " << Min(arr, n)<<endl;
            cout << "Maximum element of array: " << Max(arr, n);

            return 0;
        }

