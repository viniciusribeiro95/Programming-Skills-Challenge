# Programming-Skills-Challenge

## **Identification**

Vinicius Ferreira Ribeiro, <ribeirovinicius08@gmail.com>

### **Problem 3**

Consider the following problem:

Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

#### **Answer in C++ code: [FooBaa.cpp](FooBaa.cpp)**

I implemented it using only one file, due to the low complexity of the problem, with no need to separate it into .h call files, cpp files, and a main/application for control.
To run the program, you can import the file into the compiler https://onlinegdb.com, and press run, or if you have an environment configured, follow the following commands:

``` sh
g++ FooBaa.cpp -o FooBaa
./FooBaa
```

### **Problem 4**

Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:
1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
2. Remove the last character from the string. If the string is empty, it will remain empty.

Given an integer k and two strings s and t, determine if you can convert s to t using exactly k operations described above on s. If possible, the program prints 'yes', otherwise it prints 'no'.

#### **Answer in C++ code: [ConcatRemove.cpp](ConcatRemove.cpp)**

I implemented it using only one file, due to the low complexity of the problem, with no need to separate it into .h call files, cpp files, and a main/application for control.
To run the program, you can import the file into the compiler https://onlinegdb.com, and press run, or if you have an environment configured, follow the following commands:

``` sh
g++ ConcatRemove.cpp -o ConcatRemove
./ConcatRemove
```

When executing the program, a message will be displayed to insert the initial string, which will only be accepted if it has a length between 1 and 100, after pressing Enter, a message will be displayed asking to insert the target string, which will also only be accepted if it has a length between 1 and 100, after pressing Enter, a message will be displayed asking to insert the number of operations, which must be between 1 and 100, after pressing Enter, the result, with Yes or No, will be displayed.

### **Problem 5**
Write an Unit Test using C/C++ or Java for the function ConcatRemove(s,t,k)

#### **Answer in C++ code: [ConcatRemoveTest.cpp](ConcatRemoveTest.cpp)**

For this solution it is necessary to have google-test installed on the machine.
``` sh
cd ~
git clone https://github.com/google/googletest.git
cd googletest
mkdir build && cd build
cmake .. -DBUILD_SHARED_LIBS=ON -DINSTALL_GTEST=ON -DCMAKE_INSTALL_PREFIX:PATH=/usr
make -j8
sudo make install
sudo ldconfig
```

``` sh
g++ ConcatRemoveTest.cpp -o ConcatRemoveTest -lgtest -lpthread
./ConcatRemoveTest
```

### **Problem 6**

Consider the following problem

Two tables are provided: Students and Notes.

Students contains three columns: ID, Name and Value.

``` text
Coluna  | Tipo
ID      | Integer
Name    | String
Value   | Integer
```

The table Notes contains three Integers columns: Grade, Min_Value and Max_Value filled according example bellow:

``` text
Grade | Min_Value | Max_Value
1          | 0                |  9
2          | 10               | 19
3          | 20               | 29
4          | 30               | 39
5          | 40               | 49
6          | 50               | 59
7          | 60               | 69
8          | 70               | 79
9          | 80               | 89
10         | 90               | 100    
```

Joana gives Eva the task of generating a report containing three columns: Name, Grade and Value. Joana does not want the names of students who received a grade lower than 8. The report must be in descending order by grade, that is, the highest grades are inserted first. If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order. Finally, if the grade is less than 8, use "NULL" as the name and list them in grades in descending order. If there are more than one student with the same grade (1-7) assigned to them, sort those students in particular by their grades in ascending order.

Write an SQL query to help Eva.

#### **Answer in SQL query: [StudentsGrades/StudentsGrades.sql](StudentsGrades/StudentsGrades.sql)**

In the StudentsGrades folder, it contains files that create each table and do the Query separately, however, it has a file that does it all together, and it must be used to solve the proposed problem, for that, you must use https://sqliteonline.com, and import the file , and press Run.

### **Problem 8**

Information about pets is kept in two separate tables:

``` sql
TABLE dogs
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

TABLE cats
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL
```

Write an SQL query that select all distinct pet names.

#### **Answer in SQL query: [PetsNames/PetsNames.sql](PetsNames/PetsNames.sql)**

In the StudentsGrades folder, it contains files that create each table and do the Query separately, however, it has a file that does it all together, and it must be used to solve the proposed problem, for that, you must use https://sqliteonline.com, and import the file , and press Run.

### **Problem 9**

Consider a software utility called ‘bq’ that allows the user to read runtime, persistent data structures.

**Problem #1**

I have a relation ABC. 

What are the sequence of commands to determine its structure?

**Problem #2**

I have a relation XYZ.                          
Its structure is noted below:    

XYZ =  { file (B1) of } record
  B1   : integer;     { block number   B1
  Name : Char8;       { B1 name
end;   

What are the sequence of commands to read the first and last records of relation XYZ?

**Problem #3**

Continuing with relation XYZ

What are the sequences of commands to read key value 10 and the next 2 records?

#### **Answer: [bqSoftware.sh](bqSoftware.sh)**

### **Problem 10**

Make a program in C/C++ or Java language that calculates the length of a string informed by the user (do not use any pre-existing function or method for this, such as len(), count(), strlen() or lenght());

#### **Answer in C++ code: [stringCount.cpp](stringCount.cpp)**

I implemented it using only one file, due to the low complexity of the problem, with no need to separate it into .h call files, cpp files, and a main/application for control.
To run the program, you can import the file into the compiler https://onlinegdb.com, and press run, or if you have an environment configured, follow the following commands:

``` sh
g++ stringCount.cpp -o stringCount
./stringCount
```
### **Problem 11**

Make a program in C/C++ or Java language that reverses a string informed by the user without using any temporary variable, buffer or any pre-existing function or method for this.

#### **Answer in C++ code: [stringReverse.cpp](stringReverse.cpp)**

I implemented it using only one file, due to the low complexity of the problem, with no need to separate it into .h call files, cpp files, and a main/application for control.
To run the program, you can import the file into the compiler https://onlinegdb.com, and press run, or if you have an environment configured, follow the following commands:

``` sh
g++ stringReverse.cpp -o stringReverse
./stringReverse
```

Although I have developed a code for this question, also using the string size counter, I believe that just printing the string to the contract would be enough, due to little information in the statement, I decided to make the code presented in [stringReverse.cpp]( stringReverse.cpp).

That alone would suffice:

``` sh
string str = "String Reverse";
int i = str.length();
cout <<"Reversed String: ";
for(i = i - 1; i >= 0; i--)
{
  cout<<str[i];
}
cout <<"\n\nOriginal String: " <<str <<"\n\n";
```

Input: "String Reverse"

Output: "esreveR gnirtS"
