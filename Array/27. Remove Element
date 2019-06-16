27. Remove Element

Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example 1:

Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.

It doesn't matter what you leave beyond the returned length.
Example 2:

Given nums = [0,1,2,2,3,0,4,2], val = 2,

Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.

Note that the order of those five elements can be arbitrary.

It doesn't matter what values are set beyond the returned length.

思路1:利用两个索引值,一个索引值i不断往前,一个cnt碰到相同的值就停止,
然后将后面不同的值赋值到cnt的位置,碰到不同的值也一直往前。

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[cnt++] = nums[i];
            }
        }
        return cnt;
    }
};

思路2:减少赋值操作和遍历次数。也是利用两个索引值。
i一直往后走,一开始n-1则指向最后一个值,然后往前走。
当i指向的值与val相同时,则将n-1指向的值赋值到i指向的位置。
不同时,则i一直往前走。

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        while (i < n)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[n - 1];
                n--;
            }
            else
            {
                i++;
            }
        }
        return n;
    }
};
