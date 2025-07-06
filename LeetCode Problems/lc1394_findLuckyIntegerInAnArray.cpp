#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501] = {0};
        for (int num : arr) {
            freq[num]++;
        }
        for (int i = 500; i >= 1; --i) {
            if (freq[i] == i) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    Solution sol;
    cout << sol.findLucky(arr) << endl;
    return 0;
}
