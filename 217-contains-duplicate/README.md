<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C++ Common Concepts for DSA</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            background-color: #f4f4f4;
            margin: 0;
            padding: 20px;
            color: #333;
        }
        h1, h2 {
            color: #333;
        }
        pre {
            background-color: #2e2e2e;
            color: #f8f8f8;
            padding: 10px;
            border-radius: 5px;
            overflow-x: auto;
            font-size: 1rem;
        }
        code {
            font-size: 1rem;
            background-color: #f5f5f5;
            padding: 2px 6px;
            border-radius: 4px;
        }
        .example-block {
            background-color: #f9f9f9;
            border: 1px solid #ddd;
            padding: 10px;
            border-radius: 5px;
            margin-bottom: 15px;
        }
        .example-io {
            font-weight: bold;
            color: #2e8b57;
        }
        ul {
            list-style-type: none;
            padding-left: 0;
        }
        .note {
            background-color: #ffeb3b;
            padding: 10px;
            border-radius: 5px;
            margin: 20px 0;
            font-weight: bold;
        }
    </style>
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
