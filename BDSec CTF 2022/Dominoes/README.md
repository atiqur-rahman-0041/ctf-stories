>***My classmate Zeem is into loops and basic bitwise operations. Interestingly, he thought he could create an encryption algorithm and use it to protect his files.***
>
>***Can you bypass his encryption to get the flag?***

If we look at **encrypt.py** file carefully, we can see that the flag is encrypted in function y(). So, all we need to do is to revert that function to retrieve the flag.

So, what is function y() doing exactly?

>It's taking in a string and converting it to a list. Then it is doing XOR operation of ASCII value of an element of the list with all of its following elements' ASCII values in that list and finally converting the resultant ASCII value to character. Then it returns the string format of the converted list. For example: if we call y("abc") , it'll do the following:<br  />
>
>* Convert "abc" to a character list => ['a', 'b', 'c']
>* List elements will convert as:
>   * First element => chr(97^98^99) => chr(96) => '`'
>   * Second element => chr(98^99) => chr(1) => '\x01'
>   * Third element => chr(99) => 'c'
>* Return "`\x01c"

So, we can see that the last character remains the same. The logic behind the reverse function is, we do exactly what y() is doing, but backwards. Like if we XOR ASCII values of '\x01' and 'c' and convert it back to a character, we will get 'b' back. We keep doing it for all the characters and finally extract the flag.

We have provided a function reverse_y() in the **decoder.py** that does exactly the work mentioned above. Applying this function we will get the flag.

>>>**The flag is BDSEC{n0t_50_e45y_hUh?_433}**
