# Leetcode-55.-Jump-Game
# 🚀 Jump Game - Reach the End! 🏁

## 🧩 Problem Statement:

You're given an array `nums`, where each element represents your **maximum jump length** at that position. You start at index `0` and want to reach the **last index**. Determine whether you can reach the last index. 🤔

### 🔍 Example:

```text
Input: nums = [2, 3, 1, 1, 4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

Input: nums = [3, 2, 1, 0, 4]
Output: false
Explanation: You will always arrive at index 3, but its maximum jump length is 0. You cannot move further.
```

---

## 🛣️ Approaches:

### 1️⃣ Pure Recursion (🚫 Inefficient)

* Tries **all possible jump combinations** from current index.
* Explores all paths, like a brute-force tree.
* **Time Complexity**: `O(n^n)` in worst case!
* ❌ Prone to Time Limit Exceeded (TLE)

### 2️⃣ Recursion + Memoization (Top-Down DP) 🧠

* Stores result of each index (whether it can reach the end) in a `dp[]` array.
* Avoids recomputation of subproblems.
* **Time Complexity**: `O(n^2)`
* **Space Complexity**: `O(n)` (due to recursion + memo)

### 3️⃣ Greedy Approach (✅ Optimal) 💡

* Tracks the **farthest reachable index** at each step.
* If at any index, the farthest reachable is less than current index → can't move forward!
* **Early termination** if the end is already reachable.
* **Time Complexity**: `O(n)`
* **Space Complexity**: `O(1)` 🔥

---

## 📊 Comparison Table:

| Approach              | Time Complexity | Space Complexity | Efficient?  | Notes                        |
| --------------------- | --------------- | ---------------- | ----------- | ---------------------------- |
| Pure Recursion        | O(n^n)          | O(n)             | ❌ No        | Explores all paths           |
| Recursion + Memo (DP) | O(n^2)          | O(n)             | ⚠️ Moderate | Uses memoization             |
| Greedy (Best)         | O(n)            | O(1)             | ✅ Yes       | Best choice for large inputs |

---

## 📌 Key Insights:

* The **greedy method** is both **intuitive and optimal**.
* It works by **trusting** that if you can get to an index, you’ll try to go as far from there as possible.
* The moment you land at an **unreachable index**, it’s over! 🛑

---

## 👨‍💻 Author:

* 🧑‍🎓 **Ridham Garg**
* 🎓 B.Tech Computer Engineering, Thapar University, Patiala
* 🧠 Passionate about DSA, AI, and efficient code design

---

## 📚 Conclusion:

This problem is a fantastic test of thinking in terms of **reachability** and choosing the **right algorithmic lens**.
Start brute-force, learn from it, optimize using DP, and then fall in love with greedy! 💖🧠

> "Greedy might be risky in life, but it's often perfect in code." 😄

---

### 🥳 Happy Jumping! 🎮🚀
