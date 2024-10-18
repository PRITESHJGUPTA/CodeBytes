#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                found = true;
                break;
            }
        }
        if (!found)  return i; 
    }
    return -1;  
}

int main() {
    vector<int> nums = {3, 0, 1};
    
    int missing = missingNumber(nums);
    
    cout << "Missing number is: " << missing << endl;
    
    return 0;
}
