# flush-input-aka-loop-scanf

In C/C++, you may try to loop while reading input, for example, in case the user enters something wrong and you ask again and again until correct input is provided.

If you try to do this, you will find that C's input handling is not a walled garden.

This is because the input is stored in a buffer, and C gives you access to this buffer as it is. This results in the problem that if you ask for an integer and the user provides a character, the input buffer will still contain the data from the previous failed input, and you will get an invalid input again the next time you prompt the user.

In the [./bad](./bad) directory, you will find an example of the issue mentioned above.

To fix this, there are many solutions. However, all of them suffer from the fact that cleaning the buffer requires a different approach depending on the operating system. The so-called "OS-agnostic" solutions are not guaranteed to work, as they rely on "unexpected behavior" and should generally be avoided.

In the [./good-1](./good-1) directory, you will find a solution that clears the input buffer in an OS-specific way (for Windows and Linux).
