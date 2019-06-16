26. Remove Duplicates from Sorted Array

Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
Example 2:

Given nums = [0,0,1,1,1,2,2,3,3,4],

Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

It doesn't matter what values are set beyond the returned length.

思路:id指向不同的值的位置,遇到不同的值就把该位置的值往前挪,也就是id指向的位置上挪。
注意,往前挪的值可能会挪到原有位置上
比如 0 1 2 3
当 i = 1: nums[i] != nums[i-1] -> 此时id = 1, i也为1, nums[1] = nums[1],也就是把该位置的值又重新放了一遍
id的值一直指向不同的值,所以最后id的值也就是不同的值的总数,也就是把id返回即可。

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = nums.size();
        if (cnt < 2)
        {
            return cnt;
        }
        int id = 1;
        for (int i = 1; i < cnt; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[id++] = nums[i];
            }
        }
        return id;
    }
};

Leetcode讨论区看到一种解法,神奇啊。
int removeDuplicates(vector<int>& nums) {
    int i = !nums.empty();  //数组不为空,i等于1,也就是i从1开始,牛逼啊,只不过代码可读性稍微差了点
    for (int n : nums)
        if (n > nums[i-1]) //数组本身就是递增的,所以可以利用这一特点
            nums[i++] = n;
    return i;
}
