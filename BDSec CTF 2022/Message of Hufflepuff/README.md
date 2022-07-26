>***One day, Harry Potter was roaming around the Hufflepuff, one of the four Hogwarts houses. Inside one of the room of Hufflepuff, he found a secret numeric message and a graph. Now, he is curious to know what is written in the secret neumeric message. Can you help him to figure it out?***

So, there is a hint hidden inside the name of this problem, "Message of ***Huff***lepuff" --> well it's ***Huffman Coding***. And guess what, I couldn't even figure this out during the ctf, haha, the irony!!

So in the attachments we have the encoded message and in the .PNG file we can see a tree, it's basically the tree generated while generating the encoding. Fyi, we'll be needing the **exact tree** in order to decode the message. So, I wrote a custom function in **huffman.py** to build the exact tree shown in the image. I took the base code from a medium article that lead me to [this git repo](https://github.com/YCAyca/Data-Structures-and-Algorithms-with-Python/tree/main/Huffman_Encoding). I transformed it into my own version for this problem.

>>>The flag is **BDSEC{Huffm@n_Enc0d1ng_go7_D3COD3D}**