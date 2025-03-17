# sync_with_stdio

C++'s I/O can be much slower if left to the default, which is a wrapper around C's I/O. Due to being a wrapper, it introduces some overhead.

The solution is to allow C++ to use its own I/O implementations by using:

```
std::ios_base::sync_with_stdio(false); // this is the trick
```

In the [./src](./src) directory, you can find :

Under "c" directory, the standard C implementation.
Under "cpp" directory, the slow and the fast (`sync_with_stdio(true)`) C++ implementations.

To run the benchmark, you can simply use:

```
make run
```

This will return a benchmark similar to the one below:

```
--- - - ---

C : Fast
---
real 0.02
user 0.02
sys 0.00

--- - - ---

C++ : Slow
---
real 0.06
user 0.06
sys 0.00

--- - - ---

C++ : Fast
---
real 0.03
user 0.03
sys 0.00

--- - - ---
```
