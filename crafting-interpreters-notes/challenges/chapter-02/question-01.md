## Question

Pick an open source implementation of a language you like. Download the source code and poke around in it. Try to find the code that implements the scanner and parser. Are they hand-written, or generated using tools like Lex and Yacc? ( .l or .y files usually imply the latter.)

## My Explanation

- **Lex (Lexical Analyzer / Tokenizer):** Splits the source code text into the smallest meaningful pieces (**tokens**, such as words, numbers, operators, etc.).
- **Yacc (Yet Another Compiler-Compiler / Parser):** Analyzes these pieces provided by Lex according to grammar rules to parse the code structure and build a syntax tree (**AST**).
## Answer

I picked quickJS. I started to wander around the repository. I checked `quickjs.c` file. 65K code lines... Wow! I suppose I found something:
```c
static __exception int js_parse_program(JSParseState *s)
```
This function looks like making parsing.

I enlisted AI to see wheter are they hand-written, generated using tools like Lex and Yacc.
- Hand-written -> Yes. -> means somebody hard coded parsing algorithm
- Lex/Yacc -> No.