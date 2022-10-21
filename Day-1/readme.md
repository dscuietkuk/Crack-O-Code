<div align='center'> <h2>Day-1 <br></h2></div>
<h1>Statement :- </h1>
<h3>Given an array of integers and a positive integer k, determine the number of (i, j) pairs where i < j and ar[i] + ar[j] is divisible by k.</h3>

<h1>Example :- </h1>
<h3> ar = [1, 2, 3, 4, 5, 6] </h3>
<h3> k = 5</h3>
<h3> Three pairs meet the criteria: [1, 4], [2, 3] and [4, 6]. </h3>
  
<h1> Function Description </h1>
<h3>Complete the divisibleSumPairs function in the editor below.<br>
divisibleSumPairs has the following parameter(s):<br>
<ul>
    <li>int n: the length of array ar</li>
    <li>int ar[n]: an array of integers</li>
    <li>int k: the integer divisor</li>
</ul></h3>
<h1>Returns</h1>
<h3>int: the number of pairs</h3>
<h1>Input Format</h1>
<h3>The first line contains 2 space-separated integers, n and k.<br>
The second line contains n space-separated integers, each a value of ar[i].</h3>
<h1>Constraints</h1>
<h3><ul>
    <li>2 <= n <= 100</li>
    <li>1 <= k <= 100</li>
    <li>1 <= ar[i] <= 100</li>
</ul></h3>
<h1>Output Format</h1>
<h3>Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. </h3>
<h1>Sample Input</h1>
<h3>6 3<br>
1 3 2 6 1 2</h3>
<h1>Sample Output</h1>
<h2>5</h2>
<h1>Explanation</h1>
<h3>Here are the 5 valid pairs when k=3:<br>
<ul>
    <li>(0, 2) -> ar[0] + ar[2] = 1 + 2 = 3</li>
    <li>(0, 5) -> ar[0] + ar[5] = 1 + 2 = 3</li>
    <li>(1, 3) -> ar[1] + ar[3] = 3 + 6 = 9</li>
    <li>(2, 4) -> ar[2] + ar[4] = 2 + 1 = 3</li>
    <li>(4, 5) -> ar[4] + ar[5] = 1 + 2 = 3</li>
</ul></h3>
