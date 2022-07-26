>***Loops are fun. Are they?***

We can see in the attached **enc.py** file that function f() is used to encrypt the flag. In f(), we can see it's a 3 layer nested loop where the characters are jumbled over and over.

To solve this, we take a different approach than reverting the function. We take the cypher-text, make a list of numbers ranged in its length and run it through the function to see how the numbers are jumbled. Then we map each number to its relative position in the cipher-text. We do all this in the **decoder.py** file. We get the following output:

>**QkRTRUN7anU1N19MMDBwX20zXzR3NHl9**

But it doesn't seem like the flag. That means we might need to decrypt it again. But which method do we use? To get a hint, we use [this website](https://www.boxentriq.com/code-breaking/cipher-identifier). It gives us a hint that it might be **Base64** encoded. We put the output text into [this website](https://www.base64decode.org/) and finally we get our flag!

>>>**The flag is BDSEC{ju57_L00p_m3_4w4y}**
