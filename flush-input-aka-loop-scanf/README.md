# flush-input-aka-loop-scanf

In C/C++, you may try to loop while reading input, for example, in case the user enters something wrong and you ask again and again until correct input is provided.

If you try to do this, you will find that C's input handling is not a walled garden.

This is because the input is stored in a buffer, and C gives you access to this buffer as it is. This results in the problem that if you ask for an integer and the user provides a character, the input buffer will still contain the data from the previous failed input, and you will get an invalid input again the next time you prompt the user.

In the [./bad](./bad) directory, you will find an example of the issue mentioned above.

To fix this, there are many solutions :

- In the [./good-1](./good-1) directory, you will find a solution that clears the input buffer in an OS-specific way (for Windows ✓ and Linux ✓).
- In the [./good-2](./good-2) directory, you will find a C trick that seems to be consistent across Windows ✓ and Linux ✓, and possibly all OSes.
- A `fflush(stdin)` solution is considered unexpected behavior, and while it might work, it is a bad practice. Therefore, it is not implemented.
- A `fgets` solution is out of topic.
