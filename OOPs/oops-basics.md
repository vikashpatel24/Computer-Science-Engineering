# Introduction to Object Oriented Programming

OOPs, or Object-Oriented Programming is a programming model or paradigm which revolves around the concept of “OBJECTS”. Objects can be considered as real-world instances of entities like class, that contain some characteristics and behaviors specified in the class template.

In simple language, a class can be considered as the blueprint or template, based on which objects can be created. So the Objects are considered the instance of a class, and are therefore sometimes called “instances”. The term “characteristics” refers to the “what” about the Object, and the term “behavior” refers to the “how” about the Object.

For example, if we consider a car, then based on the OOPs model:

* Class -> A specific car model, such as Audi A4, BMW I8, Maruti Suzuki Vitara Brezza, etc.

* Object -> A specific car of any model, like the car you own

* Characteristics -> What is the color of your car? What is the Chassis number of your car? etc

* Behavior -> How to start the car? How to change the gear of the car? etc.

Characteristics are also known as data, attributes, or properties, and Behaviours are also known as the functions, procedures or methods, in the programming language.

The concept of “objects” allows the OOPs model to easily access, use and modify the instance data and methods, interact with other objects, and define methods in runtime (during the execution of the program). This gives the OOPs model significance and makes it diverse in its implementation.

In fact, the OOPs model is so popular, that many of the most widely used programming languages support and use this Object Oriented Programming or OOPs model, such as Java, C++, Python, C#, etc.

# Principles of OOPs

1. Abstraction

2. Encapsulation

3. Inheritance

4. Polymorphism

## Abstraction

Data abstraction is one of the most essential and important features of object-oriented programming. Abstraction means displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

Consider a real-life example of a man driving a car. The man only knows that pressing the accelerators will increase the speed of the car or applying brakes will stop the car but he does not know about how on pressing accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of accelerator, brakes etc in the car. This is what abstraction is.

* Abstraction using Classes: We can implement Abstraction using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to the outside world and which is not.

* Abstraction in Header files: One more type of abstraction can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers.

#### Example of Absraction in c++

```c

#include <iostream>
using namespace std;

class Abstraction
{
    int a, b;
    public:
    void set(int x, int y)
    {
        a = x, b = y;
    }
    void print()
    {
        cout<<"value of x is "<<a<<" and x is "<<b<<endl;
    }
};

int main()
{
    Abstraction abstract;
    abstract.set(10, 20);
    abstract.print();
    return 0;
}

```

## Encapsulation

In normal terms Encapsulation is defined as wrapping up of data and information under a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them. Consider a real life example of encapsulation, in a company there are different sections like the accounts section, finance section, sales section etc. The finance section handles all the financial transactions and keep records of all the data related to finance. Similarly the sales section handles all the sales related activities and keep records of all the sales. Now there may arise a situation when for some reason an official from finance section needs all the data about sales in a particular month. In this case, he is not allowed to directly access the data of sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data. This is what encapsulation is. Here the data of sales section and the employees that can manipulate them are wrapped under a single name “sales section”. 

We can not access any function from class directly. We need an object to access that function which is using the member the variable of that class.

The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.

If we  don’t  make function inside the class which is using the member  variable of the class then we don’t call it encapsulation.  

### Access Modifiers

Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.

There are 3 types of access modifiers available:

1. Private

2. Public

3. Protected

* Public : All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

* Private : The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class. 

* Protected : The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 

#### Example of Encapsulation in c++

```c

#include<iostream>
using namespace std;
 
class Encapsulation
{
    private:
        int x;
    public:
        void set(int a)
        {
            x =a;
        }
        int get()
        {
            return x;
        }
};
 
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}

```

## Inheritance

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming. 

Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own. These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.

Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass. 

### Modes of Inheritance

1. Public Mode : If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class

2. Protected Mode : If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

3. Private Mode : If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

### Types of Inheritance

1. Single inheritance

2. Multilevel inheritance

3. Multiple inheritance

4. Hierarchical inheritance

5. Hybrid inheritance

#### Example of Inheritance in c++

```c

#include<iostream>
using namespace std;
 
// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};
 
// sub class derived from a single base classes
class Car : public Vehicle {
 
};
 
// main function
int main()
{  
    // Creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}

```

## Polymorphism

The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 

A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented Programming.

### Types of Polymorphism 

1. Compile-time polymorphism

2. Runtime polymorphism

#### Compile-time polymorphism :

**Function overloading**

When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions to have the same name but distinct parameters when numerous tasks are listed under one function name.

```c

#include <iostream>
using namespace std;

class Function
{
    public:
    void fun(int a, int b)
    {
        cout<<"the value of a and b are "<<a<<" "<<b<<endl;
    }
    void fun(double a, double b)
    {
        cout<<"the value of a and b are "<<a<<" "<<b<<endl;
    }
    void fun(string a, string b)
    {
        cout<<"the value of a and b are "<<a<<" "<<b<<endl;
    }
}; 

int main()
{
    Function *func = new Function();
    func->fun(1, 2);
    func->fun(1.0, 2.0);
    func->fun("one", "two");
    return 0;
}

```

**Operator overloading**

C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. For example, we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 

```c

#include <iostream>
using namespace std;
  
class Complex {
private:
    int real, imag;
  
public:
    Complex(int r = 0, 
            int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() 
    { 
      cout<<real<<" + i" <<imag<<endl; 
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; 
    c3.print();
}

```

#### Runtime polymorphism :

**Function overriding**

Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

**Virtual Function**

A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overriden) in the derived class. 

Some Key Points About Virtual Functions:

* Virtual functions are Dynamic in nature. 

* They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class

* A virtual function is called during Runtime

```c

#include <iostream>
using namespace std;

class Base
{
    public : 
    virtual void func()
    {
        cout<<"this is base class"<<endl;
    }
    void fun2()
    {
        cout<<"this is 1"<<endl;
    }
};

class Derived : public Base
{
    public : 
    void func()
    {
        cout<<"this is derived class"<<endl;
    }
    void fun2()
    {
        cout<<"this is 2"<<endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->func();
    b->fun2();
    return 0;
}

```

