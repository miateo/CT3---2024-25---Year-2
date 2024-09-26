Language: Java

tags: #uni #notes

---
### Table of contest
- [[#History of Java]]
---
## History of Java
Bytecode -> portabile
Originally developed by James Gosling is than acquired by Oracle, now one of the many providers of JDK.
> OpenJDK is another implementation of JDK

There isn't much different between versions, there are few exceptions where new functionalities are added

## Lecture 2
Java is a imperative language, this type of language comes with some restrictions:
- No support for extension and adaptation 
	- Where adaptation often requires to modify existing code
- One extension requires to touch different parts of the code
	- This makes the code really hard to maintain in the long term
- A lot of duplicated code
	- Difficult to maintain all the copies
	- A modification in a piece of duplicated code is not propagated to all the copies of the code!

### Classloader
