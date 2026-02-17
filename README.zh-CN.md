# LeetCode 101

[English](README.md) | 简体中文

LeetCode 算法题解集合，按照算法分类整理，支持多种编程语言实现。

## 📚 项目简介

本项目是 LeetCode 刷题的代码仓库，旨在通过系统化的分类方式帮助理解和掌握常见算法思想。每道题目都提供了 C++、Python 和 Swift 三种语言的实现，方便不同语言背景的学习者参考。

## 🗂️ 项目结构

```
Leetcode101/
├── binarySearch/        # 二分查找
│   └── cpp/            # C++ 实现
├── greedy/              # 贪心算法
│   ├── cpp/            # C++ 实现
│   ├── python/         # Python 实现
│   └── swift/          # Swift 实现
├── twoPointers/        # 双指针技巧
│   ├── cpp/            # C++ 实现
│   ├── python/         # Python 实现
│   └── swift/          # Swift 实现
└── README.md
```

## 💻 支持的语言

- **C++**
- **Python**
- **Swift**

## 📖 算法分类索引

### 1️⃣ 二分查找 (Binary Search)

二分查找是一种高效的搜索算法，通过反复将搜索区间减半来在有序数组中查找目标值。

| # | 题目 | 难度 | C++ | Python | Swift |
|---|------|------|-----|--------|-------|
| 34 | Find First and Last Position of Element in Sorted Array | Medium | [✓](binartSearch/cpp/34.find-first-and-last-position-of-element-in-sorted-array.cpp) | - | - |
| 69 | Sqrt(x) | Easy | [✓](binartSearch/cpp/69.sqrt-x.cpp) | - | - |

### 2️⃣ 贪心算法 (Greedy)

贪心算法是一种在每一步选择中都采取当前状态下最优的选择，从而希望导致结果是最优或较优的算法。

| # | 题目 | 难度 | C++ | Python | Swift |
|---|------|------|-----|--------|-------|
| 122 | Best Time to Buy and Sell Stock II | Medium | [✓](greedy/cpp/122.best-time-to-buy-and-sell-stock-ii.cpp) | [✓](greedy/python/122.best-time-to-buy-and-sell-stock-ii.py) | [✓](greedy/swift/122.best-time-to-buy-and-sell-stock-ii.swift) |
| 135 | Candy | Hard | [✓](greedy/cpp/135.candy.cpp) | [✓](greedy/python/135.candy.py) | [✓](greedy/swift/135.candy.swift) |
| 406 | Queue Reconstruction by Height | Medium | [✓](greedy/cpp/406.queue-reconstruction-by-height.cpp) | [✓](greedy/python/406.queue-reconstruction-by-height.py) | [✓](greedy/swift/406.queue-reconstruction-by-height.swift) |
| 435 | Non-overlapping Intervals | Medium | [✓](greedy/cpp/435.non-overlapping-intervals.cpp) | [✓](greedy/python/435.non-overlapping-intervals.py) | [✓](greedy/swift/435.non-overlapping-intervals.swift) |
| 452 | Minimum Number of Arrows to Burst Balloons | Medium | [✓](greedy/cpp/452.minimum-number-of-arrows-to-burst-balloons.cpp) | [✓](greedy/python/452.minimum-number-of-arrows-to-burst-balloons.py) | [✓](greedy/swift/452.minimum-number-of-arrows-to-burst-balloons.swift) |
| 455 | Assign Cookies | Easy | [✓](greedy/cpp/455.assign-cookies.cpp) | [✓](greedy/python/455.assign-cookies.py) | [✓](greedy/swift/455.assign-cookies.swift) |
| 605 | Can Place Flowers | Easy | [✓](greedy/cpp/605.can-place-flowers.cpp) | [✓](greedy/python/605.can-place-flowers.py) | [✓](greedy/swift/605.can-place-flowers.swift) |
| 665 | Non-decreasing Array | Medium | [✓](greedy/cpp/665.non-decreasing-array.cpp) | [✓](greedy/python/665.non-decreasing-array.py) | [✓](greedy/swift/665.non-decreasing-array.swift) |
| 763 | Partition Labels | Medium | [✓](greedy/cpp/763.partition-labels.cpp) | [✓](greedy/python/763.partition-labels.py) | [✓](greedy/swift/763.partition-labels.swift) |

### 3️⃣ 双指针 (Two Pointers)

双指针技巧主要用于处理数组或链表中的问题，通过维护两个不同位置的指针来优化算法复杂度。

| # | 题目 | 难度 | C++ | Python | Swift |
|---|------|------|-----|--------|-------|
| 26 | Remove Duplicates from Sorted Array | Easy | [✓](twoPointers/cpp/26.remove-duplicates-from-sorted-array.cpp) | - | - |
| 27 | Remove Element | Easy | [✓](twoPointers/cpp/27.remove-element.cpp) | - | - |
| 28 | Find the Index of the First Occurrence in a String | Easy | [✓](twoPointers/cpp/28.find-the-index-of-the-first-occurrence-in-a-string.cpp) | - | - |
| 76 | Minimum Window Substring | Hard | [✓](twoPointers/cpp/76.minimum-window-substring.cpp) | [✓](twoPointers/python/76.minimum-window-substring.py) | - |
| 88 | Merge Sorted Array | Easy | [✓](twoPointers/cpp/88.merge-sorted-array.cpp) | [✓](twoPointers/python/88.merge-sorted-array.py) | - |
| 142 | Linked List Cycle II | Medium | [✓](twoPointers/cpp/142.linked-list-cycle-ii.cpp) | - | - |
| 167 | Two Sum II - Input Array Is Sorted | Medium | [✓](twoPointers/cpp/167.two-sum-ii-input-array-is-sorted.cpp) | [✓](twoPointers/python/167.two-sum-ii-input-array-is-sorted.py) | - |
| 190 | Reverse Bits | Easy | [✓](twoPointers/cpp/190.reverse-bits.cpp) | - | - |
| 340 | Longest Substring with At Most K Distinct Characters | Medium | [✓](twoPointers/cpp/340.longest-substring-with-at-most-k-distinct-characters.cpp) | - | - |
| 524 | Longest Word in Dictionary Through Deleting | Medium | [✓](twoPointers/cpp/524.longest-word-in-dictionary-through-deleting.cpp) | - | - |
| 633 | Sum of Square Numbers | Medium | [✓](twoPointers/cpp/633.sum-of-square-numbers.cpp) | - | - |
| 680 | Valid Palindrome II | Easy | [✓](twoPointers/cpp/680.valid-palindrome-ii.cpp) | - | - |

## 🚀 使用说明

### C++
```bash
# 编译运行（以 455 题为例）
g++ -std=c++11 greedy/cpp/455.assign-cookies.cpp -o solution
./solution
```

### Python
```bash
# 直接运行（以 455 题为例）
python greedy/python/455.assign-cookies.py
```

### Swift
```bash
# 编译运行（以 455 题为例）
swiftc greedy/swift/455.assign-cookies.swift -o solution
./solution
```

## 📊 统计信息

- **总题目数**: 23 题
- **算法分类**: 3 类
- **支持语言**: 3 种

### 题目难度分布

- **Easy**: 8 题
- **Medium**: 13 题
- **Hard**: 2 题

## 🎯 学习建议

1. **循序渐进**: 建议按照难度从 Easy 到 Hard 逐步学习
2. **多语言对比**: 尝试用不同语言实现同一题目，理解不同语言的特性
3. **算法归类**: 相同算法分类的题目往往有相似的解题思路，可以总结规律
4. **反复练习**: 对于不熟悉的题目，建议间隔一段时间后重新实现

## 📝 贡献

欢迎提交新的题解或优化现有实现！

## 📄 License

本项目仅供学习交流使用。

---

⭐ 如果这个项目对你有帮助，欢迎 Star！
