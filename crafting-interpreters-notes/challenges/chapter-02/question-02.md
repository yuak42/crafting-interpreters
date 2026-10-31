## Question

Just-in-time compilation tends to be the fastest way to implement a dynamically-typed language, but not all of them use it. What reasons are there to not JIT?
## My Explanation

**Just-In-Time (JIT) compilation** is a technique used by runtime environments to improve the performance of programs. Instead of interpreting code line by line every time it runs or compiling the entire program into machine code beforehand, JIT compilation translates bytecode or intermediate code into native machine code **dynamically at runtime** (just as the code is about to execute), allowing the program to run much faster.

For example there are A, B and C functions. Whener the program needs function A for the first time, it compiles it that time. Similar thing applies to other functions. So it compiles and runs only when it needs it.

AOT -> ahead of time, means first compile everything then you can run. So compile A, B and C functions now. You can run later.
## Answer

There are some reasons:

1. Memory: JIT keeps generated machine code, profiling data, and the compiler's internal data in memory. This can be a significant disadvantage on memory-constrained systems.
2. CPU: Additional CPU time is required for compilation and optimization while the program is running. This overhead may not be worthwhile, especially for short-lived programs.
3. Complexity: Developing a JIT compiler and integrating it with a runtime environment is quite complex.
4. Predictability: Embedded systems and real-time applications require predictable execution times. JIT's runtime compilation overhead can make this more difficult.