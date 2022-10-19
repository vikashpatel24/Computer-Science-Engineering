# Conditional Operator in Java
In Java, conditional operators check the condition and decides the desired result on the basis of both conditions. In this section, we will discuss the conditional 
operator in Java.

## Types of Conditional Operator
There are three types of the conditional operator in Java

Conditional AND
Conditional OR
Ternary Operator

## Conditional AND
The operator is applied between two Boolean expressions. It is denoted by the two AND operators (&&). It returns true if and only if both expressions are true, else returns false.

## Conditional OR
The operator is applied between two Boolean expressions. It is denoted by the two OR operator (||). It returns true if any of the expression is true, else returns false.

## ConditionalOperatorExample.java
public class ConditionalOperatorExample  
{  
public static void main(String args[])   
{  
int x=5, y=4, z=7;  
System.out.println(x>y && x>z || y<z);  
System.out.println((x<z || y>z) && x<y);  
}  
}  

## output
public class ConditionalOperatorExample  
{  
public static void main(String args[])   
{  
int x=5, y=4, z=7;  
System.out.println(x>y && x>z || y<z);  
System.out.println((x<z || y>z) && x<y);  
}  
}  

## Output
true 
false

## Ternary Operator
The meaning of ternary is composed of three parts. The ternary operator (? :) consists of three operands. It is used to evaluate Boolean expressions. The operator decides which value will be assigned to the variable. It is the only conditional operator that accepts three operands. It can be used instead of the if-else statement. It makes the code much more easy, readable, and shorter.

## Syntax:

variable = (condition) ? expression1 : expression2  


## TernaryOperatorExample.java
public class TernaryOperatorExample  
{  
public static void main(String args[])   
{  
int x, y;  
x = 20;  
y = (x == 1) ? 61: 90;  
System.out.println("Value of y is: " +  y);  
y = (x == 20) ? 61: 90;  
System.out.println("Value of y is: " + y);  
}  
}  

## Output

Value of y is: 90
Value of y is: 61

## LargestNumberExample.java

public class LargestNumberExample  
{  
public static void main(String args[])  
{  
int x=69;  
int y=89;  
int z=79;  
int largestNumber= (x > y) ? (x > z ? x : z) : (y > z ? y : z);  
System.out.println("The largest numbers is:  "+largestNumber);  
}  
}  

## Output

The largest number is: 89

In the above program, we have taken three variables x, y, and z having the values 69, 89, and 79, respectively. The expression (x > y) ? (x > z ? x : z) : (y > z ? y : z) evaluates the largest number among three numbers and store the final result in the variable largestNumber. Let's understand the execution order of the expression.
First, it checks the expression (x > y). If it returns true the expression (x > z ? x : z) gets executed, else the expression (y > z ? y : z) gets executed.

When the expression (x > z ? x : z) gets executed, it further checks the condition x > z. If the condition returns true the value of x is returned, else the value of z is returned.

When the expression (y > z ? y : z) gets executed it further checks the condition y > z. If the condition returns true the value of y is returned, else the value of z is returned.

Therefore, we get the largest of three numbers using the ternary operator.

The Equality and Relational Operators
The equality and relational operators determine if one operand is greater than, less than, equal to, or not equal to another operand. The majority of these operators will probably look familiar to you as well. Keep in mind that you must use "==", not "=", when testing if two primitive values are equal.

==      equal to
!=      not equal to
>       greater than
>=      greater than or equal to
<       less than
<=      less than or equal to
The following program, ComparisonDemo, tests the comparison operators:


class ComparisonDemo {

    public static void main(String[] args){
        int value1 = 1;
        int value2 = 2;
        if(value1 == value2)
            System.out.println("value1 == value2");
        if(value1 != value2)
            System.out.println("value1 != value2");
        if(value1 > value2)
            System.out.println("value1 > value2");
        if(value1 < value2)
            System.out.println("value1 < value2");
        if(value1 <= value2)
            System.out.println("value1 <= value2");
    }
}
Output:

value1 != value2
value1 <  value2
value1 <= value2

