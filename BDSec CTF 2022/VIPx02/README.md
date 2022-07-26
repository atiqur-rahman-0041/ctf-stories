>***My friend gave me his VIP account credential and he said to me decode my password.***
>
>***User : twin13***
>
>***password : 3ip2uq3mj5z95oj59s4q654j4q65hv5746oj4o64pz5644pz18f1bm5tx4v35z95oj59s6w0***

There's a hint to solve this problem in the problem statement also. The username is **twin**. It suggests a certain cipher named **Twin-Hex Cipher**. 

So we apply **Twin-Hex Cipher** on the password since it looks like an encrypted text and get the following text:

>**OQFRP{pelcg0_ne3_nj3f0z3_&_gel_g0_1rnea_pelcg0}**

We use [this website](https://www.calcresult.com/misc/cyphers/twin-hex.html) for decrypting the password. 

This decrypted text has flag format but it still seems encrypted. So we apply **ROT13** on the decrypted password. We use [this website](https://rot13.com/) for decrypting the flag.


>>>The flag is **BDSEC{crypt0_ar3_aw3s0m3_&_try_t0_1earn_crypt0}**