<h1>Problem</h1>
<h3>An English text needs to be encrypted using the following encryption scheme.<br>
First, the spaces are removed from the text. Let L be the length of this text.<br>
Then, characters are written into a grid, whose rows and columns have the following constraints:</h3>

![image](https://user-images.githubusercontent.com/83878702/197806567-2e5d27bb-60b3-4a41-bcc2-2e3ba7c8e35b.png)

<h1>Example</h1>
<img src = "https://user-images.githubusercontent.com/83878702/197807173-8d4c4124-45e4-4dd8-a05b-ec56474b44be.png">
<h3>After removing spaces, the string is 54 characters long. sqrt(54) is between 7 and 8, so it is written in the form of a grid with 7 rows and 8 columns.</h3>
<div align = 'center'>
<img src = 'https://user-images.githubusercontent.com/83878702/197809054-0821e908-413d-42e9-8570-c86a759fcd53.png'></div>
<h3>
  <ul>
  <li>Ensure that rows X columns >= L</li>
  <li>If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. rows X columns.</li>
  </ul>
The encoded message is obtained by displaying the characters of each column, with a space between column texts. The encoded message for the grid above is:</h3>
<img src = 'https://user-images.githubusercontent.com/83878702/197810457-9ba57080-5f69-49c6-862c-f6a8dcf392cf.png'>
<h3>Create a function to encode a message.</h3>
<h1>Function Description</h1>
<h3>Complete the encryption function in the editor below.</h3>
<h3>encryption has the following parameter(s):</h3>
<h3><ul><li>string s: a string to encrypt</li></ul></h3>
<h2>Returns</h2>
<h3>string: the encrypted string</h3>
<h1>Input Format</h1>
<h3>One line of text, the string  s</h3>
<h1>Constraints</h1>
<h3> 1 <= Lenght of s <= 81</h3>
<h3>s contains characters in the range ascii[a-z] and space, ascii(32).</h3>
<h1>Examples</h1>
<img src = 'https://user-images.githubusercontent.com/83878702/197812822-4124b6f5-ebcc-45df-8cc3-307bb21cf9ba.png'>
