>***RSA cryptosystem uses modular arithmetic to create an asymmetric encryption system. However, there are some pitfalls and weakness. Can you exploit it?***
>
>***N: 1280678415822214057864524798453297819181910621573945477544758171055968245116423923***
>
>***E: 65537***
>
>***C: 241757357533719849989659127349827982677055294256023833052829147857534659015212862***

So, it's basically RSA cryptography, given Cipher-text(C), Public Key(E) and Public Key Value(N). To find the 2 prime factors of N, we use [this website](http://factordb.com/) and get the 2 prime numbers P and Q. We use all these values in **"decoder.py"** and get the decrypted flag.

>>>**The flag is BDSEC{r54_i5_fUn_r16h7?}**
