# caesar-cs50
Console application that implements a caesar encryption cipher<br><br>
Completed as part of studying CS50 - Introduction to Computer Science from Harvard University.<br><br>

Let’s write a program called caesar that enables you to encrypt messages using Caesar’s cipher. At the time the user executes the program, they should decide, by providing a command-line argument, on what the key should be in the secret message they’ll provide at runtime. We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.<br>

Here are a few examples of how the program might work. For example, if the user inputs a key of 1 and a plaintext of HELLO:<br>
$ ./caesar 1<br>
plaintext:  HELLO<br>
ciphertext: IFMMP<br>

Here’s how the program might work if the user provides a key of 13 and a plaintext of hello, world:<br>
$ ./caesar 13<br>
plaintext:  hello, world<br>
ciphertext: uryyb, jbeyq<br>
