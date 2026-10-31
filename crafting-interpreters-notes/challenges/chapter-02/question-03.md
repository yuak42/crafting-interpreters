## Question

Most Lisp implementations that compile to C also contain an interpreter that lets them execute Lisp code on the fly as well. Why?

## My Explanation

I wondered what Lisp is. Checked with AI:

Lisp (List Processor) is the second-oldest high-level programming language in the world (after Fortran), developed in 1958 by John McCarthy. As a pioneer in artificial intelligence (AI) research, Lisp is the language where many revolutionary concepts in computer science were first implemented. The core features that make Lisp unique are:

1. The World of Parentheses (Homoiconicity) What strikes people when they first see Lisp code is the excessively large number of parentheses used. In Lisp, everything is in the form of a list. Data is code, and code is data.
Example (Addition operation): `(+ 2 3)` -> The operator comes first, followed by the elements (Prefix notation).

2. The Ancestor of Artificial Intelligence It became the standard language in the early years of AI research (the 1960s and 70s) and remained a major driving force for decades in symbolic AI, expert systems, and natural language processing projects.

3. Its Historic Innovations (Firsts) Many popular features used by modern languages today (Python, JavaScript, C#, etc.) first appeared in Lisp (especially in its powerful dialects Scheme and Common Lisp):
- **Garbage Collection:** Automatic management of memory.
- **Conditional Expressions (If-Else logic):** The first use of the `if` construct.
- **Functional Programming:** Treating functions as objects that can be passed around and used.
- **REPL (Read-Eval-Print Loop):** An interactive shell environment where code can be executed and tested line by line instantly.

Although it is not very widely used in mainstream projects today, Lisp is known in programmer culture as a legendary, "mind-opening" language with philosophical depth that transforms one's perspective on programming.

## Answer

These are just different implementations of the same language. There are both pros and cons to both approaches. If I use an interpreter, I can quickly test something. If I compile it to C, I can benefit from the optimizations of C language.