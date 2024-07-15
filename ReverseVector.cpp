#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int>& nums, int index, vector<int>& subset, vector<vector<int>>& subsets) {
    // Add the current subset to the result
    subsets.push_back(subset);
    
    // Recursively generate subsets starting from the current index
    for (int i = index; i < nums.size(); ++i) {
        // Add current element to the subset
        subset.push_back(nums[i]);
        
        // Recursively generate subsets starting from the next index
        generateSubsets(nums, i + 1, subset, subsets);
        
        // Backtrack: remove the last element to explore other possibilities
        subset.pop_back();
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> subset;
    vector<vector<int>> subsets;
    
    // Generate subsets recursively
    generateSubsets(nums, 0, subset, subsets);
    
    // Display the subsets
    cout << "Subsets:" << endl;
    for (const auto& s : subsets) {
        cout << "[";
        for (int num : s) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
