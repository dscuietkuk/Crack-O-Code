<h1>Statement :- </h1>
<h3>Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.</h3>

<h1>Example :- </h1>
<h3> arr = [1, 2, 5, 3, 4] </h3>
<h3> The minimum sum is 1 + 2 + 3 + 4 = 10 and the maximum sum is 2 + 3 + 4 + 5 = 14.</h3>
<h3> The function Prints :- <br>
  10 14 </h3>
  
<h1> Function Description </h1>
<h3>Complete the miniMaxSum function in the editor below.<br>
miniMaxSum has the following parameter(s):<br>
  <ul><li>arr: an array of 5 integers</li></ul></h3>
<h1>Print</h1>
<h3>Print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.</h3>
<h1>Input Format</h1>
<h3>A single line of five space-separated integers.</h3>
<h1>Constraints</h1>
<h3>1 <= arr[i] <= 10<sup>9</sup></h3>
<h1>Output Format</h1>
<h3>Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. </h3>
<h1>Sample Input</h1>
<h2>1 2 3 4 5</h2>
<h1>Sample Output</h1>
<h2>10 14</h2>
<h1>Explanation</h1>
<h3>The numbers are 1, 2, 3, 4, and 5. Calculate the following sums using four of the five integers:<br>
1) Sum everything except 1, the sum is 2 + 3 + 4 + 5 = 14.<br>
2) Sum everything except 2, the sum is 1 + 3 + 4 + 5 = 13.<br>
3) Sum everything except 3, the sum is 1 + 2 + 4 + 5 = 12.<br>
4) Sum everything except 4, the sum is 1 + 2 + 3 + 5 = 11.<br>
5) Sum everything except 5, the sum is 1 + 2 + 4 + 5 = 10.</h3>
