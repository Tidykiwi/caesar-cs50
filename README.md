# caesar-cs50
Console application that implements a caesar encryption cipher<br><br>
Completed as part of studying CS50 - Introduction to Computer Science from Harvard University.<br><br>

Supposedly, Caesar (yes, that Caesar) used to “encrypt” (i.e., conceal in a reversible way) confidential messages by shifting each letter therein by some number of places. For instance, he might write A as B, B as C, C as D, …, and, wrapping around alphabetically, Z as A. And so, to say HELLO to someone, Caesar might write IFMMP. Upon receiving such messages from Caesar, recipients would have to “decrypt” them by shifting letters in the opposite direction by the same number of places.

The secrecy of this “cryptosystem” relied on only Caesar and the recipients knowing a secret, the number of places by which Caesar had shifted his letters (e.g., 1). Not particularly secure by modern standards, but, hey, if you’re perhaps the first in the world to do it, pretty secure!

Unencrypted text is generally called plaintext. Encrypted text is generally called ciphertext. And the secret used is called a key.

To be clear, then, here’s how encrypting HELLO with a key of 1 yields IFMMP:

plaintext
H
E
L
L
O
+ key	1	1	1	1	1
= ciphertext	I	F	M	M	P


Let’s write a program called caesar that enables you to encrypt messages using Caesar’s cipher. At the time the user executes the program, they should decide, by providing a command-line argument, on what the key should be in the secret message they’ll provide at runtime. We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.<br>

Here are a few examples of how the program might work. For example, if the user inputs a key of 1 and a plaintext of HELLO:<br>
$ ./caesar 1<br>
plaintext:  HELLO<br>
ciphertext: IFMMP<br>

Here’s how the program might work if the user provides a key of 13 and a plaintext of hello, world:<br>
$ ./caesar 13<br>
plaintext:  hello, world<br>
ciphertext: uryyb, jbeyq<br>
