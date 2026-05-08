class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        int i, m, j, n = 0;
        for (i = 0; i < size(expected); i++)
        {
            for (j = 0; j < (size(expected) - 1); j++)
            {
                if (expected[j] > expected[j + 1])
                {
                    m = expected[j];
                    expected[j] = expected[j + 1];
                    expected[j + 1] = m;
                }
            }
        }
        for (i = 0; i < size(heights); i++)
        {
            if (heights[i] != expected[i])
            {
                n++;
            }
        }
        return n;
    }
};