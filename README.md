# LeetCode 101

English | [简体中文](README.zh-CN.md)

A curated collection of LeetCode problem solutions, systematically organized by algorithm patterns and supporting multiple programming languages.

## 📚 About

This repository contains LeetCode solutions organized by algorithmic approaches to help understand and master common algorithm patterns. Each problem includes implementations in C++, Python, and Swift, making it accessible for developers from different language backgrounds.

## 🗂️ Project Structure

```
Leetcode101/
├── binarySearch/        # Binary Search
│   └── cpp/            # C++ Implementation
├── greedy/              # Greedy Algorithm
│   ├── cpp/            # C++ Implementation
│   ├── python/         # Python Implementation
│   └── swift/          # Swift Implementation
├── twoPointers/        # Two Pointers Technique
│   ├── cpp/            # C++ Implementation
│   ├── python/         # Python Implementation
│   └── swift/          # Swift Implementation
└── README.md
```

## 💻 Supported Languages

- **C++**
- **Python**
- **Swift**

## 📖 Problem Index by Algorithm

### 1️⃣ Binary Search

Binary search is an efficient algorithm for finding a target value within a sorted array by repeatedly dividing the search interval in half.

| # | Problem | Difficulty | C++ | Python | Swift |
|---|------|------|-----|--------|-------|
| 34 | Find First and Last Position of Element in Sorted Array | Medium | [✓](binartSearch/cpp/34.find-first-and-last-position-of-element-in-sorted-array.cpp) | - | - |
| 69 | Sqrt(x) | Easy | [✓](binartSearch/cpp/69.sqrt-x.cpp) | - | - |

### 2️⃣ Greedy Algorithm

A greedy algorithm makes locally optimal choices at each step with the hope of finding a global optimum.

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

### 3️⃣ Two Pointers

The two pointers technique is commonly used for array or linked list problems, optimizing algorithm complexity by maintaining two different position pointers.

| # | Problem | Difficulty | C++ | Python | Swift |
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

## 🚀 Usage

### C++
```bash
# Compile and run (using problem 455 as example)
g++ -std=c++11 greedy/cpp/455.assign-cookies.cpp -o solution
./solution
```

### Python
```bash
# Run directly (using problem 455 as example)
python greedy/python/455.assign-cookies.py
```

### Swift
```bash
# Compile and run (using problem 455 as example)
swiftc greedy/swift/455.assign-cookies.swift -o solution
./solution
```

## 📊 Statistics

- **Total Problems**: 23
- **Algorithm Categories**: 3
- **Supported Languages**: 3

### Difficulty Distribution

- **Easy**: 8 problems
- **Medium**: 13 problems
- **Hard**: 2 problems

## 🎯 Learning Tips

1. **Progressive Learning**: Start with Easy problems and gradually progress to Hard
2. **Multi-language Comparison**: Try implementing the same problem in different languages to understand language-specific features
3. **Pattern Recognition**: Problems in the same category often share similar solving approaches
4. **Repeated Practice**: For unfamiliar problems, revisit and re-implement them after some time

## 📝 Contributing

Contributions of new solutions or optimizations to existing implementations are welcome!

## 📄 License

This project is for learning and educational purposes only.

---

⭐ If this project helps you, please consider giving it a Star!
