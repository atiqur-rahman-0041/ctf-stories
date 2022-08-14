>***Can you find the flag?***

We are given a .OUT file in this problem. We need to analyze it's source code to figure out the flag.

We open the .OUT file with [Ghidra](https://ghidra-sre.org/). The decompiler shows us the main function in the source code:

![My-image](Images/image_1.PNG)

We try to recreate the source code using that. We put the raw source code in **"raw_source.cpp"** file. We can see that we can build and run the file and then it asks to enter the license to continue.  

![My-image](Images/image_2.PNG)

Let's analyze the code to figure out the license.

In the main() function we can see that the program takes an input string and pass it through a number of for loops. If we print the string after each loop, we can see the string is first converted to uppercase, then lowercase and then encoded using the Caesar cipher with total offset 6. In the main() function we can see that a lot of local variables are declared and assigned to different values. Also we can see that the license strings length should be 35.

![My-image](Images/image_3.PNG)

Then our input string is compared with the local variables.  

![My-image](Images/image_4.PNG)  

So, we can come to this conclusion that if we reverse the loops and pass the local variables through it, we might get something we can work with. We do this in **"flag_decoder.py"** file. After running the file, we get the following output:

![My-image](Images/image_5.PNG)

Now this out seems like the flag. We can check it by putting it as input in the source file. But the source file has some problems in the main() function. Here buffer overflow is used but the memory locations aren't accessed correctly. So, we patch the source file and run it again. The code is given in **"patched_source.cpp"** file. Now we run the file and give the output string we got from **"flag_decoder.py"** file as input. The output is:

![My-image](Images/image_6.PNG)

So, we can see that the decoded flag is the correct one indeed.

>>>**The flag is bdsec{licen53_check3r_0x02_2022_n5}**
