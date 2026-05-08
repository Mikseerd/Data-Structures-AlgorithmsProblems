class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int i;
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());
        for (i = 0; i < arr.size(); i++) {
            if (arr[i] != target[i]) return false;
        }
        return true;
    }
};