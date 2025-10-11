#
# @lc app=leetcode id=763 lang=python3
#
# [763] Partition Labels
#

# @lc code=start
class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        letter_dict = {}
        for i in range(0, len(s)):
            if s[i] not in letter_dict.keys():
                letter_dict[s[i]] = [i, i]
            else:
                letter_dict[s[i]][1] = i


        letter_interval = list(letter_dict.values())
        letter_interval.sort(key=lambda x: x[0])


        right_interval = letter_interval[0][1]
        marker_list = []

        for i in range(1, len(letter_interval)):
            if letter_interval[i][0] <= right_interval:
                if letter_interval[i][1] > right_interval:
                    right_interval = letter_interval[i][1]
            else:
                marker_list.append(right_interval)
                right_interval = letter_interval[i][1]
            
        
        marker_list.append(len(s) - 1)
        marker_list.insert(0, -1)
        
        letter_parts = []

        for i in range(1, len(marker_list)):
            letter_parts.append(marker_list[i] - marker_list[i - 1])


        return letter_parts
        
# @lc code=end

