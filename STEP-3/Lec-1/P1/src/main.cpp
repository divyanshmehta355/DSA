#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    return largest;
}

int main() {
    vector<int> arr= {1,8,7,56,8};
    int ans = largest(arr);
    cout << ans << endl;
    return 0;
}