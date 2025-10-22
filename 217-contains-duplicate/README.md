<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C++ Common Concepts for DSA</title>
    
</head>
<body>

    <h1>Contains Duplicate Problem - C++ Solution</h1>

    <h2><a href="https://leetcode.com/problems/contains-duplicate">Contains Duplicate</a></h2>
    <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
    <hr>
    <p>Given an integer array <code>nums</code>, return <code>true</code> if any value appears <strong>at least twice</strong> in the array, and return <code>false</code> if every element is distinct.</p>

    <p>&nbsp;</p>
    <p><strong class="example">Example 1:</strong></p>

    <div class="example-block">
        <p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,1]</span></p>
        <p><strong>Output:</strong> <span class="example-io">true</span></p>
        <p><strong>Explanation:</strong> The element 1 occurs at the indices 0 and 3.</p>
    </div>

    <p><strong class="example">Example 2:</strong></p>

    <div class="example-block">
        <p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4]</span></p>
        <p><strong>Output:</strong> <span class="example-io">false</span></p>
        <p><strong>Explanation:</strong> All elements are distinct.</p>
    </div>

    <p><strong class="example">Example 3:</strong></p>

    <div class="example-block">
        <p><strong>Input:</strong> <span class="example-io">nums = [1,1,1,3,3,4,3,2,4,2]</span></p>
        <p><strong>Output:</strong> <span class="example-io">true</span></p>
    </div>

    <p>&nbsp;</p>
    <p><strong>Constraints:</strong></p>
    <ul>
        <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
        <li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
    </ul>

    <hr>

    <h2>Solution - C++ Code</h2>
    <pre><code>class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        unordered_set<int> seen;

        for(int el: nums) {
            if(seen.count(el) > 0) {
                return true;
            }
            seen.insert(el);
        }

        return false;
    }
};
</code></pre>

    <div class="note">
        <p><strong>Note:</strong> This C++ solution uses an <code>unordered_set</code> to track elements that have been encountered. The <code>count()</code> method checks if the element already exists in the set.</p>
    </div>

</body>
</html>
