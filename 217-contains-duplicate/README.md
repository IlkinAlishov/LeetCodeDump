
---

## Quick Tips for C++ Syntax and Data Structures

### 1. **Sorting a Container**

* **Syntax**:

  ```cpp
  std::sort(arrayName.begin(), arrayName.end());
  ```

* **Explanation**:

  * `std::sort` sorts elements from the beginning (`arrayName.begin()`) to the end (`arrayName.end()`) of the container.
  * By default, it sorts in ascending order. For descending order, you can use:

    ```cpp
    std::sort(arrayName.begin(), arrayName.end(), std::greater<int>());
    ```

### 2. **Using HashMap (`unordered_map`) and HashSet (`unordered_set`)**

* **Syntax**:

  ```cpp
  unordered_map<int, int> mapName;  // HashMap: Key-Value pair
  unordered_set<int> setName;       // HashSet: Unique elements
  ```

* **Explanation**:

  * `unordered_map<int, int>`: A hash map that stores key-value pairs, offering fast access to values by their keys.
  * `unordered_set<int>`: A hash set that stores unique elements, ensuring no duplicates.

### 3. **Checking if an Element Exists in HashMap or HashSet**

* **Using `count()` Method**:

  ```cpp
  if (mapName.count(key) > 0) {  // For unordered_map
      // Element found in map
  }

  if (setName.count(element) > 0) {  // For unordered_set
      // Element found in set
  }
  ```

  * `count()` returns `1` if the element exists and `0` if it doesn't.

* **Using `find()` Method**:

  ```cpp
  if (mapName.find(key) != mapName.end()) {  // For unordered_map
      // Element found in map
  }

  if (setName.find(element) != setName.end()) {  // For unordered_set
      // Element found in set
  }
  ```

  * `find()` returns an iterator to the element if found, or `mapName.end()` or `setName.end()` if not found.

### 4. **General Syntax for Loops and Variable Declaration**

* **`for-each` Loop** (Range-based `for`):

  ```cpp
  for (auto& el : nums) {
      // Iterate over each element in the container
  }
  ```

* **`auto` Keyword**:

  * Automatically deduces the type of a variable:

    ```cpp
    auto x = 10;  // x is deduced as int
    ```

### 5. **Other Useful Syntax**

* **Using `nullptr`** (for null pointers):

  ```cpp
  int* ptr = nullptr;
  ```

* **Using `&` (Address-of Operator) and `&&` (Rvalue References)**:

  * `&` for passing by reference:

    ```cpp
    void func(int& a) { a = 20; }
    ```
  * `&&` for rvalue references:

    ```cpp
    void func(int&& a) { /* rvalue reference */ }
    ```

### 6. **Lambda Expressions**

* **Syntax**:

  ```cpp
  auto lambda = [](int x, int y) { return x + y; };
  ```

* **Explanation**:

  * Lambda functions are anonymous functions used for short-lived operations or passing functions to algorithms.

---



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

