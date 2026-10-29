## Question

Get a “Hello, world!” program written and running in Java. Set up whatever Makefiles or IDE projects you need to get it working. If you have a debugger, get comfortable with it and step through your program as it runs.

## Explanation

I learned to compile and run a Java program.
```sh
javac Main.java
java Main
```

`javac Main.java` -> creates a `.class` file. This is a binary file, however operating system cannot run it directly (In C we compile and run the program `./a.out` directly, this is different than that). This code includes *bytecode* that can only be run by Java Virtual Machine (JVM).

`javac` -> still binary, bytecode that can be run by JVM
`cc` -> binary, generates a native executable

## Answer

```java
public class Main {
	public static void main(String[] args) {
		System.out.println("Hello, World!");
	}
}
```
