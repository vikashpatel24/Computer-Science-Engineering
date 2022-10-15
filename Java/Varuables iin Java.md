# 2.1 Variables in Java
Variable in Java is a data container that saves the data values during Java program execution. Every variable is assigned a data type that designates the type and quantity of value it can hold. A variable is a memory location name for the data.
#### How to declare variable ?
While declaring a variable, we need to take care of two things that are:
1. Datatype: Type of data that can be stored in this variable. 
2. Data_name: Name given to the variable. 

Example
```
int count;
<datatype> <data_name> <semicolon to end each sentence in code>
```

In this way, a name can only be given to a memory location.
#### How to intialise variable ?
It can be perceived with the help of 3 components that are as follows:
1. Datatype: Type of data that can be stored in this variable.
2. Variable_name: Name given to the variable.
3. Value: It is the initial value stored in the variable.

Example
```
int age = 20;
<datatype> <data_name> <= assigns the value> <20 is the value to be assigned to age variable>
```
## 2.1.1 Types of Variables

![Types of variables](https://i.ytimg.com/vi/hZVAs3QL5GY/maxresdefault.jpg)

### Local Variables
A variable declared inside the body of the method is called local variable. You can use this variable only within that method and the other methods in the class aren't even aware that the variable exists.
A local variable cannot be defined with "static" keyword.

### Instance Variable
A variable declared inside the class but outside the body of the method, is called an instance variable. It is not declared as static.
It is called an instance variable because its value is instance-specific and is not shared among instances.

### Static variable
A variable that is declared as static is called a static variable. It cannot be local. You can create a single copy of the static variable and share it among all the instances of the class. Memory allocation for static variables happens only once when the class is loaded in the memory.

```
public class A  
{  
    static int m=100;//static variable  
    void method()  
    {    
        int n=90;//local variable    
    }  
    public static void main(String args[])  
    {  
        int data=50;//instance variable    
    }  
}
```

# 2.2 Type Casting in Java
In Java, type casting is a method or process that converts a data type into another data type in both ways manually and automatically

![Typeasting](https://static.javatpoint.com/core/images/type-casting-in-java.png)
## 2.2.1 Types of Type Casting
There are two types of type casting:

### Widening Type Cast
Converting a lower data type into a higher one is called widening type casting. It is also known as implicit conversion or casting down. It is done automatically. It is safe because there is no chance to lose data. It takes place when:
    1. Both data types must be compatible with each other.
    2. The target type must be larger than the source type.
#### EXAMPLE
```
public class WideningTypeCastingExample  
{  
public static void main(String[] args)  
{  
int x = 7;  
long y = x;  //automatically converts the integer type into long type  
float z = y;  //automatically converts the long type into float type  
System.out.println("Before conversion, int value "+x);  
System.out.println("After conversion, long value "+y);  
System.out.println("After conversion, float value "+z);  
}  
} 
```
#### OUTPUT
```
Before conversion, the value is: 7
After conversion, the long value is: 7
After conversion, the float value is: 7.0
```

### Narrowing Type Cast
Converting a higher data type into a lower one is called narrowing type casting. It is also known as explicit conversion or casting up. It is done manually by the programmer. If we do not perform casting then the compiler reports a compile-time error.

#### EXAMPLE
```
public class NarrowingTypeCastingExample  
{  
public static void main(String args[])  
{  
double d = 166.66;    
long l = (long)d;  //converting double data type into long data type
int i = (int)l;  //converting long data type into int data type  
System.out.println("Before conversion: "+d);  
System.out.println("After conversion into long type: "+l);  //fractional part lost  
System.out.println("After conversion into int type: "+i);  //fractional part lost  
}  
}  
```
#### OUTPUT
```
Before conversion: 166.66
After conversion into long type: 166
After conversion into int type: 166
```

    
