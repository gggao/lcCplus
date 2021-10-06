#include "../include/header.h"
#include <vector>
/**
 * 
 * 选定一个元素，查询另一个元素，所以是个查找问题，速度最快应该是 hash 查找
 * trick ： 从 map 中查找，map的元素在查找过程中填入
 * 
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> tmpMap;
        for (int i = 0; i < nums.size(); i++) {
            auto it = tmpMap.find(target - nums[i]);
            if (it != tmpMap.end()) {
                return {i, it->second};
            } else {
                tmpMap[nums[i]] = i;
            }
        }
        return {};
    }

    void test() {
        vector<int> tmp{2,7,11,15};
        vector<int> res = twoSum(tmp, 9);
        for (int i : res) {
            cout << i << endl;
        }
        cout << "-----------" << endl;
        tmp = {3,2,4};
        res = twoSum(tmp, 6);
        for (int i : res) {
            cout << i << endl;
        }

        cout << "-----------" << endl;
        tmp = {3,3};
        res = twoSum(tmp, 6);
        for (int i : res) {
            cout << i << endl;
        }

    }
};