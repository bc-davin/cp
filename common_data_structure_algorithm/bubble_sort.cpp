#include <bits/stdc++.h>
using namespace std;

void displayVector(const vector<int> &vi){
    for (auto index: vi){
        cout << index << endl;
    }
}

int main() {
    vector<int> nums = { 29, 10, 14, 37, 14};
    int n = nums.size();
    for (int i = 0; i< n; i++){
        for (int j = 0; j<n-1;j++){
            if (nums[j]<nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    displayVector(nums);
    
    
    return 0;
}