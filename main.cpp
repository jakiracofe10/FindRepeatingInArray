#include <iostream>
#include <map>

//Time: O(n)

using namespace std;

int findRepeating(int* arr, int n) {
    map<int,int> count;
    for (int i=0; i<n; i++) {
        count[arr[i]]++;
    }
    for(map<int,int>::iterator it = count.begin();it != count.end();it++) {
        if (it->second > 1) {
            return it->first;
        }
    }
    return -1;
}

int main() {
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,11,6,9,10};
    int result = findRepeating(arr, n);
    cout << result;
    return 0;
}