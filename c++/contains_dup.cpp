#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;


class Solution {
public:
    bool hasDuplicate(vector<int> &nums){
                    map <int, int> freq;
        for (int number: nums) {

            freq[number]++;
            if (freq[number] > 1){
                return true;
            }
        }
         return false;
   
    }
};


int main(){
    Solution sol;
    vector<int> nums = {1,2,2,3,4};


    cout << sol.hasDuplicate(nums) << endl;
}



