# JAVA BASICS

## 1.1 What is Java?
Java is popular high-level, class-based object oriented programming language originally developed by Sun Microsystems and released in 1995. Currently Java is owned by Oracle and more than 3 billion devices run Java. Java runs on a variety of platforms, such as Windows, Mac OS, and the various versions of UNIX. Java is used to develop Mobile apps, Web apps, Desktop apps, Games and much more.
Java is a general-purpose programming language intended to let programmers write once, run anywhere (WORA). This means that compiled Java code can run on all platforms that support Java without the need to recompile.


## 1.2 Java Environment Setup
###   1.2.1 Local Environment Setup
This section guides you on how to download and set up Java on your machine. Following are the steps to set up the environment.

Java SE is freely available from the link [Download Java](https://www.oracle.com/java/technologies/downloads/#java8 "Java"). You can download a version based on your operating system.

Follow the instructions to download Java and run the .exe to install Java on your machine. Once you installed Java on your machine, you will need to set environment variables to point to correct installation directories −
### 1.2.2 Setting Up the Path for Windows
Assuming you have installed Java in c:\Program Files\java\jdk directory −
* Right-click on 'My Computer' and select 'Properties'.
* Click the 'Environment variables' button under the 'Advanced' tab.
* Now, alter the 'Path' variable so that it also contains the path to the Java executable. Example, if the path is currently set to 'C:\WINDOWS\SYSTEM32', then change your path to read 'C:\WINDOWS\SYSTEM32;c:\Program Files\java\jdk\bin'
### 1.2.3 Setting Up the Path for Linux, UNIX, Solaris, FreeBSD
Environment variable PATH should be set to point to where the Java binaries have been installed. Refer to your shell documentation, if you have trouble doing this.

Example, if you use bash as your shell, then you would add the following line to the end of your '.bashrc: export PATH = /path/to/java:$PATH'


## 1.3 Java Basic Syntax
When we consider a Java program, it can be defined as a collection of objects that communicate via invoking each other's methods. Let us now briefly look into what do class, object, methods, and instance variables mean.

* **Object** − Objects have states and behaviors. Example: A dog has states - color, name, breed as well as behavior such as wagging their tail, barking, eating. An object is an instance of a class.

* **Class** − A class can be defined as a template/blueprint that describes the behavior/state that the object of its type supports.

* **Methods** − A method is basically a behavior. A class can contain many methods. It is in methods where the logics are written, data is manipulated and all the actions are executed.

* **Instance Variables** − Each object has its unique set of instance variables. An object's state is created by the values assigned to these instance variables.

About Java programs, it is very important to keep in mind the following points.

1. Case Sensitivity − Java is case sensitive, which means identifier Hello and hello would have different meaning in Java.

2. Class Names − For all class names the first letter should be in Upper Case. If several words are used to form a name of the class, each inner word's first letter should be in Upper Case. Example: class MyFirstJavaClass

3. Method Names − All method names should start with a Lower Case letter. If several words are used to form the name of the method, then each inner word's first letter should be in Upper Case. Example: public void myMethodName()

4. Program File Name − Name of the program file should exactly match the class name. Example: Assume 'MyFirstJavaProgram' is the class name. Then the file should be saved as 'MyFirstJavaProgram.java'

5. public static void main(String args[]) − Java program processing starts from the main() method which is a mandatory part of every Java program.

### 1.3.1 Java Identifiers
All Java components require names. Names used for classes, variables, and methods are called identifiers. In Java, there are several points to remember about identifiers. They are as follows −

* All identifiers should begin with a letter (A to Z or a to z), currency character ($) or an underscore (_).
* After the first character, identifiers can have any combination of characters.
* A key word cannot be used as an identifier.
* identifiers are case sensitive.
 **Examples of legal identifiers: age, $salary, _value, __1_value.
Examples of illegal identifiers: 123abc, -salary.**

### 1.3.2 Java Modifiers
Like other languages, it is possible to modify classes, methods, etc., by using modifiers. There are two categories of modifiers −
1. Access Modifiers − default, public , protected, private
2. Non-access Modifiers − final, abstract, strictfp

### 1.3.3 Java Variables
Following are the types of variables in Java −
* Local Variables
* Class Variables (Static Variables)
* Instance Variables (Non-static Variables)

### 1.3.4 Java Keywords
The following list shows the reserved words in Java. These reserved words may not be used as constant or variable or any other identifier names.

![Keyword](https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2020/06/List-of-Java-Keywords.jpg)

### 1.3.5 Comments in Java
Java supports single-line and multi-line comments very similar to C and C++. All characters available inside any comment are ignored by Java compiler.

#### *Example*
```
public class MyFirstJavaProgram {

   /* This is my first java program.
    * This will print 'Hello World' as the output
    * This is an example of multi-line comments.
    */

   public static void main(String []args) {
      // This is an example of single line comment
      /* This is also an example of single line comment. */
      System.out.println("Hello World");
   }
}
```
*Output*
```
Hello World
```
## 1.4 Java DataTypes
Based on the data type of a variable, the operating system allocates memory and decides what can be stored in the reserved memory. Therefore, by assigning different data types to variables, you can store integers, decimals, or characters in these variables.

![Tyoes of Datatyoes in Java](https://www.softwaretestingmaterial.com/wp-content/uploads/2018/03/Data-Types.png)

1. **Primitive Data Type: such as boolean, char, int, short, byte, long, float, and double**
2. **Non-Primitive or Refererence Data Type or Object Data type: such as String, Array, Objects, Interfaces, etc.**

**TYPES OF PRIMITIVE DATA TYPES**

Primitive data are only single values and have no special capabilities. There are 8 primitive data types. They are depicted below in tabular format below as follows: 

| **TYPE** | **DEFAULT** | **SIZE** | **EXAMPLE**              |        **RANGE**      |
|----------|-------------|------------|------------------------|-----------------------|
|  boolean |    false    |  1 bit   |        true,false        |  true, false          |
|  byte    |     0       |  8 bits  |          (none)          |  -128 to 127          |
|  char    |  \u00010    | 16 bits  | 'a','\u0041','\101','\\\\','\\','\n'      | character ASCII values 0 to 255 |
|  short   |     0       | 16 bits  |    (none)             | -32,768 to 32,767  |
|   int    |     0       | 32 bits  | -2, -1, 0, 1, 2     | -2,147,483,648  to  2,147,483,647 |
|   long   |     0       | 64 bits  |  -2L, -1L, 0L, 1L, 2L |  -9,223,372,036,854,775,808  to  -9,223,372,036,854,775,807 |
|   float  | 0.0 |  32 bits| 1.23e100f, -1.23e-100f, .3f, 3.14f  | upto 7 decimal digits  |
|  double  | 0.0 | 64 bits |1.23456e300d, -1.23456e-300d, 1e1d | uto 16 decimal digits |

**TYPES OF NON-PRIMITIVE OR REFERNCE DATA TYPES**
The Reference Data Types will contain a memory address of variable values because the reference types won’t store the variable value directly in memory. 

#### STRINGS
Strings are defined as an array of characters. The difference between a character array and a string in Java is, that the string is designed to hold a sequence of characters in a single variable whereas, a character array is a collection of separate char type entities.
*Syntax* - `<String_Type> <string_variable> = “<sequence_of_string>”;`
*Example*
```
// Declare String without using new operator 
String s = "Computer-Science";

// Declare String using new operator 
String s1 = new String("Computer-Science");
```
#### CLASS
A class is a user-defined blueprint or prototype from which objects are created.  It represents the set of properties or methods that are common to all objects of one type. In general, class declarations can include these components, in order: 

1. Modifiers: A class can be public or has default access.
2. Class name: The name should begin with an initial letter (capitalized by convention).
3. Superclass(if any): The name of the class’s parent (superclass), if any, preceded by the keyword extends. A class can only extend (subclass) one parent.
4. Interfaces(if any): A comma-separated list of interfaces implemented by the class, if any, preceded by the keyword implements. A class can implement more than one interface.
5. Body: The class body is surrounded by braces, { }.

#### OBJECT
It is a basic unit of Object-Oriented Programming and represents real-life entities.  A typical Java program creates many objects, which as you know, interact by invoking methods. An object consists of :

1. State: It is represented by the attributes of an object. It also reflects the properties of an object.
2. Behavior: It is represented by the methods of an object. It also reflects the response of an object to other objects.
3. Identity: It gives a unique name to an object and enables one object to interact with other objects.

#### INTERFACE
Like a class, an interface can have methods and variables, but the methods declared in an interface are by default abstract (only method signature, no body).   
Interfaces specify what a class must do and not how. It is the blueprint of the class.

#### ARRAY
An array is a group of like-typed variables that are referred to by a common name. Arrays in Java work differently than they do in C/C++. The following are some important points about Java arrays. 
In Java, all arrays are dynamically allocated.



