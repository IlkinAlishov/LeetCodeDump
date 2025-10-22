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
        .explanation {
            background-color: #f0f0f0;
            border-left: 5px solid #4CAF50;
            padding: 10px;
            margin-bottom: 20px;
        }
        .explanation p {
            margin: 0;
        }
        h3 {
            margin-top: 20px;
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

    <h1>C++ Common Concepts and Syntax for DSA Problems</h1>

    <h2>1. Sorting a Container</h2>
    <p>To sort a container (such as a <code>vector</code> or <code>array</code>), you can use the <code>std::sort()</code> function from the C++ Standard Library.</p>

    <pre><code>std::sort(arrayName.begin(), arrayName.end());</code></pre>

    <div class="explanation">
        <p><strong>Explanation:</strong></p>
        <ul>
            <li><code>std::sort</code> is used to sort elements in a range, in this case, from the beginning (<code>arrayName.begin()</code>) to the end (<code>arrayName.end()</code>) of the container.</li>
            <li>The default sorting is in ascending order. To sort in descending order, you can pass a custom comparator:</li>
        </ul>
        <pre><code>std::sort(arrayName.begin(), arrayName.end(), std::greater<int>());</code></pre>
    </div>

    <h2>2. Using HashMap (<code>unordered_map</code>) and HashSet (<code>unordered_set</code>)</h2>
    <p>In C++, hash-based containers include <code>unordered_map</code> and <code>unordered_set</code> from the unordered container library.</p>

    <pre><code>unordered_map<int, int> mapName;  // HashMap: Key-Value pair
unordered_set<int> setName;       // HashSet: Unique elements</code></pre>

    <div class="explanation">
        <p><strong>Explanation:</strong></p>
        <ul>
            <li><code>unordered_map<int, int></code>: A hash map stores key-value pairs. You can access the value by the key.</li>
            <li><code>unordered_set<int></code>: A hash set stores unique elements, eliminating duplicates.</li>
        </ul>
    </div>

    <h2>3. Checking If an Element Exists in HashMap or HashSet</h2>
    <p>To check if an element exists in a <code>HashMap</code> or <code>HashSet</code>, you can use any of the following methods. These are often used for efficient lookups in problems where you need to check for the presence of a value.</p>

    <h3>Using <code>count()</code> Method:</h3>
    <pre><code>if (mapName.count(key) > 0) {  // For unordered_map
    // Element found in map
}

if (setName.count(element) > 0) {  // For unordered_set
    // Element found in set
}</code></pre>

    <div class="explanation">
        <p><strong>Explanation:</strong></p>
        <ul>
            <li><code>mapName.count(key)</code> returns <code>1</code> if the <code>key</code> exists in the map, and <code>0</code> if it doesn't.</li>
            <li><code>setName.count(element)</code> checks for the presence of <code>element</code> in the hash set. If the element is found, it returns <code>1</code>; otherwise, it returns <code>0</code>.</li>
        </ul>
    </div>

    <h3>Using <code>find()</code> Method:</h3>
    <pre><code>if (mapName.find(key) != mapName.end()) {  // For unordered_map
    // Element found in map
}

if (setName.find(element) != setName.end()) {  // For unordered_set
    // Element found in set
}</code></pre>

    <div class="explanation">
        <p><strong>Explanation:</strong></p>
        <ul>
            <li><code>mapName.find(key)</code> returns an iterator to the element if found, or <code>mapName.end()</code> if the <code>key</code> does not exist.</li>
            <li>Similarly, <code>setName.find(element)</code> returns an iterator to the element if it exists, otherwise <code>setName.end()</code>.</li>
        </ul>
    </div>

    <div class="note">
        <p><strong>Note:</strong> The <code>count()</code> method is generally more straightforward, but <code>find()</code> can be more flexible if you need to manipulate the iterator or retrieve the value directly.</p>
    </div>

</body>
</html>


<h2><a href="https://leetcode.com/problems/contains-duplicate">Contains Duplicate</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an integer array <code>nums</code>, return <code>true</code> if any value appears <strong>at least twice</strong> in the array, and return <code>false</code> if every element is distinct.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>The element 1 occurs at the indices 0 and 3.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>All elements are distinct.</p>
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
