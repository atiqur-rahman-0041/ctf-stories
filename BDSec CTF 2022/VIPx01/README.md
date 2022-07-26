>***My friend gave me his game username and game id . Can decode game id ?***
>
>***User : rot***
>
>***Game ID : OQFRP{pelcg0_ne3_nj3f0z3}***

There's a hint to solve this problem in the problem statement. The username is **rot**. It suggests a certain cipher named **ROT13**. **ROT13** is a simple letter substitution cipher that replaces a letter with the 13th letter after it in the alphabet. ROT13 is a special case of the **Caesar Cipher**.

So we apply **ROT13** on the Game ID since it looks like an encrypted flag and get the flag. We use [this website](https://rot13.com/) for decrypting the flag.

>>>The flag is **BDSEC{crypt0_ar3_aw3s0m3}**