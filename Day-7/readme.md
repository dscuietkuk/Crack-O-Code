<div align='center'> <h2>Day-7<br></h2></div>
<h1>Statement :- </h1>
<h3>Given an array of integers, determine the minimum number of elements to delete to leave only elements of equal value.<br>

<h1>Example :- </h1>
<h3>arr = [1, 2, 2, 3]<br>
Delete the 2 elements 1 and 3 leaving arr = [2, 2]. If both twos plus either the 1 or the 3 are deleted, it takes 3 deletions to leave either [3] or [1]. The minimum number of deletions is 2.</h3>

<h1> Function Description </h1>
<h3>Complete the equalizeArray function in the editor below.<br>
equalizeArray has the following parameter(s):<br>
<ul>
    <li>int arr[n]: an array of integers</li>
</ul></h3>
<h1>Returns</h1>
<h3>int: the minimum number of deletions required</h3>
<h1>Input Format</h1>
<h3>The first line contains an integer n, the number of elements in arr.<br>
The next line contains n space-separated integers arr[i].</h3>
<h1>Sample Input</h1>
<h2>5<br>
3 3 2 1 3</h2>
<h1>Sample Output</h1>
<h2>2</h2>
<h1>Explanation</h1>
<h3>Delete arr[2] == 2 and arr[3] == 1 to leave arr' = [3, 3, 3]. This is minimal. The only other options are to delete 4 elements to get an array of either [1] or [2].</h3>
