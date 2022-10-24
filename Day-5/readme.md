<div align='center'> <h2>Day-5<br></h2></div>
<h1>Statement :- </h1>
<h3>Given a sequence of integers a, a triplet (a[i], a[j], a[k]) is beautiful if:<br>
<ul>
  <li>i < j < k</li>
  <li> a[j] - a[i] = a[k] - a[j] = d</li>
</ul>
Given an increasing sequenc of integers and the value of d, count the number of beautiful triplets in the sequence.</h3>

<h1>Example :- </h1>
<h3>arr = [2, 2, 3, 4,5]<br>
d = 1<br>
There are three beautiful triplets, by index: [i, j, k] = [0, 2, 3], [1, 2, 3], [2, 3, 4]. To test the first triplet, arr[j] — arr[i] = 3 - 2 = 1 and arr[k] - arr[j] = 4 - 3 = 1.</h3>

  
<h1> Function Description </h1>
<h3>Complete the beautifulTriplets function in the editor below.<br>
beautifulTriplets has the following parameters:<br>
<ul>
    <li>int d: the value to match</li>
    <li>int arr[n]: the sequence, sorted ascending</li>
</ul></h3>
<h1>Returns</h1>
<h3>int: the number of beautiful triplets</h3>
<h1>Input Format</h1>
<h3>The first line contains 2 space-separated integers, n and d, the length of the sequence and the beautiful difference.<br>
The second line contains n space-separated integers arr[i].</h3>
<h1>Sample Input</h1>
<h2>7 3<br>
1 2 4 5 7 8 10</h2>
<h1>Sample Output</h1>
<h2>3</h2>
<h1>Explanation</h1>
<h3>There are many possible triplets (arr[i], arr[j], arr[k]), but our only beautiful triplets are (1, 4, 7). (4, 7, 10) and (2, 5,8) by value, not index. Please see the equations below:<br>
7 - 4 = 4 - 1 = 3 = d<br>
10 - 7 = 7 - 4 = 3 = d<br>
8 - 5 = 5 - 2 = 3 = d<br>
Recall that a beautiful triplet satisfies the following equivalence relation: arr[j] - arr[i] = arr[k] - arr[j] = d where i < j < k.
</h3>
