# Programming-Skills-Challenge

## Identification**

Vinicius Ferreira Ribeiro, <ribeirovinicius08@gmail.com>

### **Problem 3**

3.Consider the following problem:

Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

#### **Answer in C++ code: [FooBaa.cpp](FooBaa.cpp)**

I implemented it using only one file, due to the low complexity of the problem, with no need to separate it into .h call files, cpp files, and a main/application for control.
To run the program, you can import the file into the compiler https://onlinegdb.com, and press run, or if you have an environment configured, follow the following commands:

g++ FooBaa.cpp -o FooBaa
./FooBaa

&nbsp;

### **Problem 4**

Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:
1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
2. Remove the last character from the string. If the string is empty, it will remain empty.

Given an integer k and two strings s and t, determine if you can convert s to t using exactly k operations described above on s. If possible, the program prints 'yes', otherwise it prints 'no'.

#### **Answer in C++ code: [ConcatRemove.cpp](ConcatRemove.cpp)**

I implemented it using only one file, due to the low complexity of the problem, with no need to separate it into .h call files, cpp files, and a main/application for control.
To run the program, you can import the file into the compiler https://onlinegdb.com, and press run, or if you have an environment configured, follow the following commands:

g++ ConcatRemove.cpp -o ConcatRemove
./ConcatRemove
