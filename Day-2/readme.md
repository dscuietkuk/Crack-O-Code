<div align='center'> <h2>Day-2 <br></h2></div>
<h1>Statement :- </h1>
<h3>Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.</h3>

<h1>Example :- </h1>
<h3> a = [1, 1, 2, 2, 4, 4, 5, 5, 5]</h3>
<h3> There are two subarrays meeting the criterion: [1, 1, 2, 2] and [4, 4, 5, 5, 5]. The maximum length subarray has 5 elements.</h3>
  
<h1> Function Description </h1>
<h3>Complete the pickingNumbers function in the editor below.<br>
pickingNumbers has the following parameter(s):<br>
<ul>
    <li>int a[n]: an array of integers</li>
</ul></h3>
<h1>Returns</h1>
<h3>int: the length of the longest subarray that meets the criterion</h3>
<h1>Input Format</h1>
<h3>The first line contains a single integer n, the size of the array a.<br>
The second line contains n space-separated integers, each an a[i].</h3>
<h1>Constraints</h1>
<h3><ul>
    <li>2 <= n <= 100</li>
    <li>0 < ar[i] < 100</li>
    <li>The answer will be >=2</li>
</ul></h3>
<h1>Output Format</h1>
<h3>Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. </h3>
<h1>Sample Input</h1>
<h3>6<br>
4 6 5 3 3 1</h3>
<h1>Sample Output</h1>
<h2>3</h2>
<h1>Explanation</h1>
<h3>We choose the following multiset of integers from the array: {4, 3, 3}. Each pair in the multiset has an absolute difference < 1 (i.e., |4 — 3] = 1 and |3 — 3| = 0), so we print the number of chosen integers, 3, as our answer.</h3>
