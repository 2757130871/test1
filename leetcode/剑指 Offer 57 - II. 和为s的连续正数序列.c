//滑动窗口思想
//序列和小于target right向左边移动,扩大范围
//序列和大于target left向左移动，缩小范围
//注意点：
//1. left可移动范围
//2.
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {

        vector<vector<int>> ret;

        if (target < 3)    return ret;

        int left = 1;
        int right = 2;
        int middle = (1 + target) >> 1;
        int curSum = left + right;

        while (left < middle)
        {
            if (curSum == target)
            {
                vector<int> tmp;
                int lefttmp = left;
                for (;lefttmp <= right;lefttmp++)
                {
                    tmp.push_back(lefttmp);
                }
                ret.push_back(tmp);
            }

            while (curSum > target && left < middle)
            {
                curSum -= left;
                left++;

                if (curSum == target)
                {
                    vector<int> tmp;
                    int lefttmp = left;
                    for (;lefttmp <= right;lefttmp++)
                    {
                        tmp.push_back(lefttmp);
                    }
                    ret.push_back(tmp);
                }
            }

            right++;
            curSum += right;
        }

        return ret;
    }
};
