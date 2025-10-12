#
# @lc app=leetcode id=88 lang=python3
#
# [88] Merge Sorted Array
#

# @lc code=start
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        m_pointer = m - 1
        n_pointer = n - 1
        merge_pointer = m + n - 1

        while m_pointer >= 0 and n_pointer >= 0:
            if nums1[m_pointer] > nums2[n_pointer]:
                nums1[merge_pointer] = nums1[m_pointer]
                m_pointer -= 1
            else:
                nums1[merge_pointer] = nums2[n_pointer]
                n_pointer -= 1
            merge_pointer -= 1

        if n_pointer >= 0:
            nums1[:n_pointer + 1] = nums2[:n_pointer + 1]

        
# @lc code=end

