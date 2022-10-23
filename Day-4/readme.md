<div align='center'> <h2>Day-4 <br></h2></div>
<h1>Statement :- </h1>
<h3>An integer d is a divisor of an integer n if the remainder of n/d = 0.</h3>
<h3>Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.</h3>

<h1>Example :- </h1>
<h3>n = 124</h3>
<h3>Check whether 1,2 and 4 are divisors of 124. All 3 numbers divide the number 124 completely , so return 3.</h3>
<h3>n = 111</h3>
<h3>Check whether 1,1 and 1 are divisors of 111. All 3 numbers divide the number 111 completely , so return 3.</h3>
<h3>n = 10</h3>
<h3>Check whether 1 and 0 are divisors of 10. Here 1 is the divisor of 10 but 0 is not , so return 1.</h3>

  
<h1> Function Description </h1>
<h3>Complete the findDigits function in the editor below.<br>
findDigits has the following parameter(s):<br>
<ul>
    <li>int n: the value to analyze</li>
    
</ul></h3>
<h1>Returns</h1>
<h3>int: the number of digits in n that are divisors of n</h3>
<h1>Input Format</h1>
<h3>The first line is an integer,t, the number of test cases.<br>
The t subsequent lines each contain an integer,n.</h3>
<h1>Constraints</h1>
<h3><ul>
    <li>1 <= t <= 15</li>
    <li>0 <= n <= 10**9</li>
</ul></h3>
<h1>Output Format</h1>
<h3>Print a single integer denoting the number of divisors.</h3>
<h1>Sample Input</h1>
<h2>2<br>12<br>1012</h2>
<h1>Sample Output</h1>
<h2>2<br>3</h2>
<h1>Explanation</h1>
<h3>The number 12 is broken into two digits, 1 and 2. When 12 is divided by either of those two digits, the remainder is 0 so they are both divisors.<br>The number 1012 is broken into four digits 1, 0, 1 and 2. 1012 is evenly divisible by its digits 1, 1, and 2, but it is not divisible by 0 as division by zero is undefined.
</h3>
