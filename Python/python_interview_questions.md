# Python Interview Questions

## Q. How can you improve the following code?

```py
import string

i = 0
for letter in string.letters:
    print("The letter at index %i is %s" % (i, letter))
    i = i + 1
```

Bonus points for mentioning `enumerate` and use of `str.format`.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What is Python particularly good for? When is using Python the "right choice" for a project?

Python is a high-level, interpreted, interactive and object-oriented scripting language. Python is designed to be highly readable. It uses English keywords frequently where as other languages use punctuation, and it has fewer syntactical constructions than other languages.

Python is a high-level general-purpose programming language that can be applied to many different classes of problems.

The language comes with a large standard library that covers areas such as string processing like regular expressions, Unicode, calculating differences between files, Internet protocols like HTTP, FTP, SMTP, XML-RPC, POP, IMAP, CGI programming, software engineering like unit testing, logging, profiling, parsing Python code, and operating system interfaces like system calls, file systems, TCP/IP sockets.

Although likes and dislikes are highly personal, a developer who is "worth his or her salt" will highlight features of the Python language that are generally considered advantageous (which also helps answer the question of what Python is "particularly good for". Some of the more common valid answers to this question include:

- Ease of use and ease of refactoring, thanks to the flexibility of Python's syntax, which makes it especially useful for rapid prototyping.
- More compact code, thanks again to Python's syntax, along with a wealth of functionally-rich Python libraries (distributed freely with most Python language implementations). 
- A dynamically-typed and strongly-typed language, offering the rare combination of code flexibility while at the same time avoiding pesky implicit-type-conversion bugs.
- It's free and open source! Need we say more?

With regard to the question of when using Python is the "right choice" for a project, the complete answer also depends on a number of issues orthogonal to the language itself, such as prior technology investment, skill set of the team, and so on. Although the question as stated above implies interest in a strictly technical answer, a developer who will raise these additional issues in an interview will always "score more points" with me since it indicates an awareness of, and sensitivity to, the "bigger picture" (i.e., beyond just the technology being employed). Conversely, a response that Python is always the right choice is a clear sign of an unsophisticated developer.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What are some drawbacks of the Python language?

For starters, if you know a language well, you know its drawbacks, so responses such as "there's nothing I don't like about it" or "it has no drawbacks" are very telling indeed.

The two most common valid answers to this question (by no means intended as an exhaustive list) are:

- The Global Interpreter Lock (GIL). CPython (the most common Python implementation) is not fully thread safe. In order to support multi-threaded Python programs, CPython provides a global lock that must be held by the current thread before it can safely access Python objects. As a result, no matter how many threads or processors are present, only one thread is ever being executed at any given time. In comparison, it is worth noting that the PyPy implementation discussed earlier in this article provides a stackless mode that supports micro-threads for massive concurrency.
- Execution speed. Python can be slower than compiled languages since it is interpreted. (Well, sort of. See our earlier discussion on this topic.)

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. We know Python is all the rage these days. But to be truly accepting of a great technology, you must know its pitfalls as well.

Of course. To be truly yourself, you must be accepting of your flaws. Only then can you move forward to work on them. Python has its flaws too:

Python's interpreted nature imposes a speed penalty on it. While Python is great for a lot of things, it is weak in mobile computing, and in browsers.

Being dynamically-typed, Python uses duck-typing (If it looks like a duck, it must be a duck). This can raise runtime errors.

Python has underdeveloped database access layers. This renders it a less-than-perfect choice for huge database applications. 

And even after these pitfalls, of course. Being easy makes it addictive. Once a Python-coder, always a Python coder.

So while it has problems, it is also a wonderful tool for a lot of things. 

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What are the key differences between Python 2 and 3?

```py
Division operator
`print` function  
Unicode 
xrange  
Error Handling  
`_future_` module
```

  Although Python 2 is formally considered legacy at this point,its use is still widespread enough that is important for a developer to recognize the differences between Python 2 and 3.

- Here are some of the key differences that a developer should be aware of:

- Text and Data instead of Unicode and 8-bit strings. Python 3.0 uses the concepts of text and (binary) data instead of Unicode strings and 8-bit strings. The biggest ramification of this is that any attempt to mix text and data in Python 3.0 raises a TypeError (to combine the two safely, you must decode bytes or encode Unicode, but you need to know the proper encoding, e.g. UTF-8)

- This addresses a longstanding pitfall for naïve Python programmers. In Python 2, mixing Unicode and 8-bit data would work if the string happened to contain only 7-bit (ASCII) bytes, but you would get UnicodeDecodeError if it contained non-ASCII values. Moreover, the exception would happen at the combination point, not at the point at which the non-ASCII characters were put into the str object. This behavior was a common source of confusion and consternation for neophyte Python programmers.

- `print` function. The print statement has been replaced with a print() function

- `xrange` – buh-bye. xrange() no longer exists (range() now behaves like xrange() used to behave, except it works with values of arbitrary size)

API changes:
* `zip()`, `map()` and `filter()` all now return iterators instead of lists.
* `dict.keys()`, `dict.items()` and `dict.values()` now return 'views' instead of lists.
* `dict.iterkeys()`, `dict.iteritems()` and `dict.itervalues()` are no longer supported.
* Comparison operators. The ordering comparison operators (<, <=, >=, >) now raise a TypeError exception when the operands don't have a meaningful natural ordering. Some examples of the ramifications of this include:
* Expressions like 1 < '', 0 > None or len <= len are no longer valid
* None < None now raises a TypeError instead of returning False
* Sorting a heterogeneous list no longer makes sense.
* All the elements must be comparable to each other

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What are some key differences to bear in mind when coding in Python vs. Java?

Disclaimer #1. The differences between Java and Python are numerous and would likely be a topic worthy of its own (lengthy) post. Below is just a brief sampling of some key differences between the two languages.

Disclaimer #2. The intent here is not to launch into a religious battle over the merits of Python vs. Java (as much fun as that might be!). Rather, the question is really just geared at seeing how well the developer understands some practical differences between the two languages. The list below therefore deliberately avoids discussing the arguable advantages of Python over Java from a programming productivity perspective.

- With the above two disclaimers in mind, here is a sampling of some key differences to bear in mind when coding in Python vs. Java:

    - Dynamic vs static typing: One of the biggest differences between the two languages is that Java is restricted to static typing whereas Python supports dynamic typing of variables.

    - Static vs. class methods: A static method in Java does not translate to a Python class method.
    - In Python, calling a class method involves an additional  
      memory allocation that calling a static method or function 
      does not.
    - In Java, dotted names (e.g., foo.bar.method) are looked 
      up by the compiler, so at runtime it really doesn't matter 
      how many of them you have. In Python, however, the lookups 
      occur at runtime, so "each dot counts".
    
    - Method overloading: Whereas Java requires explicit specification of multiple same-named functions with different signatures, the same can be accomplished in Python with a single function that includes optional arguments with default values if not specified by the caller.

    - Single vs. double quotes. Whereas the use of single quotes vs. double quotes has significance in Java, they can be used interchangeably in Python (but no, it won't allow beginnning the same string with a double quote and trying to end it with a single quote, or vice versa!).

    - Getters and setters (not!). Getters and setters in Python are superfluous; rather, you should use the 'property' built-in (that's what it's for!). In Python, getters and setters are a waste of both CPU and programmer time.

    - Classes are optional. Whereas Java requires every function to be defined in the context of an enclosing class definition, Python has no such requirement.

    - Indentation matters… in Python. This bites many a newbie Python programmer.

    The Big Picture

    - An expert knowledge of Python extends well beyond the technical minutia of the language. A Python expert will have an in-depth understanding and appreciation of Python's benefits as well as its limitations. Accordingly, here are some sample questions that can help assess this dimension of a candidate's expertise:

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What will be the output of the code below in Python 2?

```py
def div1(x,y):
    print "%s/%s = %s" % (x, y, x/y)
def div2(x,y):
    print "%s//%s = %s" % (x, y, x//y)

div1(5,2)
div1(5.,2)
div2(5,2)
div2(5.,2.)
```
Also, how would the answer differ in Python 3 (assuming, of course, that the above [print] statements were converted to Python 3 syntax)?

    -  kjalfkjaslf

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What is the difference between range and xrange? How has this changed over time?

- As follows:
    - `xrange` returns the xrange object while range returns the list, and uses the same memory and no matter what the range size is.
    - For the most part, xrange and range are the exact same in terms of functionality. They both provide a way to generate a list of integers for you to use, however you please. 
    - The only difference is that range returns a Python list object and x range returns an xrange object. This means that xrange doesn't actually generate a static list at run-time like range does. It creates the values as you need them with a special technique called yielding. This technique is used with a type of object known as generators. That means that if you have a really gigantic range you'd like to generate a list for, say one billion, xrange is the function to use. 
    - This is especially true if you have a really memory sensitive system such as a cell phone that you are working with, as range will use as much memory as it can to create your array of integers, which can result in a Memory Error and crash your program. It's a memory hungry beast.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What will be the output of the code below?

```py
List = ['a', 'b', 'c', 'd', 'e']
print(list[10:])
```
- TypeError: 'type' object is not subscriptable
if proper name given,it will print [].

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What is a method?

A method is a function on some object x that you normally call as x.name(arguments...). Methods are defined as functions inside the class definition: 
```py
class C: 
    def meth (self, arg): 
        return arg*2 + self.attribute
```

## Q. How do I call a method defined in a base class from a derived class that overrides it?

If you're using new-style classes, use the built-in `super()` function:

```
class Derived(Base):
    def meth (self): 
       super(Derived, self).meth() 
```
If you're using classic classes: For a class definition such as 
`class Derived(Base):` ... you can call method meth() defined in Base (or one of Base's base classes) as Base.meth(self,arguments). Here, Base.meth is an unbound method, so you need to provide the self argument.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How can I organize my code to make it easier to change the base class?

You could define an alias for the base class, assign the real base class to it before your class definition, and use the alias throughout your class. Then all you have to change is the value assigned to the alias. Incidentally, this trick is also handy if you want to decide dynamically (e.g. depending on availability of resources) which base class to use. 

Example: BaseAlias = class Derived(BaseAlias): def meth(self): BaseAlias.meth(self).

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How do I find the current module name?
A module can find out its own module name by looking at the predefined global variable `__name__`. If this has the value `'__main__'`, the program is running as a script. Many modules that are usually used by importing them also provide a command-line interface or a self-test, and only execute this code after checking `__name__`: 

```py
def main():
    print('Running test...')
if __name__ == '__main__':
    main() 
```
`__import__('x.y.z')`
returns Try: `__import__('x.y.z').y.z` 
```py
# For more realistic situations, you may have to do something like:
m = __import__(s) 
	for i in s.split(".")[1:]: m = getattr(m, i) 
```

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How do I access a module written in Python from C?

You can get a pointer to the module object as follows: 

`module = PyImport_ImportModule("");`

If the module hasn't been imported yet (i.e. it is not yet present in sys.modules), this initializes the module; otherwise it simply returns the value of ``sys.modules[""]``. Note that it doesn't enter the module into any namespace -- it only ensures it has been initialized and is stored in sys.modules. You can then access the module's attributes (i.e. any name defined in the module) as follows: attr = PyObject_GetAttrString(module, ""); Calling PyObject_SetAttrString() to assign to variables in the module also works.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How do I convert a number to a string?

To convert, e.g., the number 144 to the string '144', use the built-in function str(). If you want a hexadecimal or octal representation, use the built-in functions hex() or oct(). For fancy formatting, use the % operator on strings, e.g. "%04d" % 144 yields '0144' and "%.3f" % (1/3.0) yields '0.333'. See the library reference manual for details.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How is the Implementation of Python's dictionaries done?

Python dictionary needs to be declared first:   
`dict = {}`

Key value pair can be added as:     
`dict[key] = value`     
or      
`objDict.update({key:value})`

Remove element by:  
`dict.pop(key)`

Remove all:     
`objDict.clear()`

A hash value of the key is computed using a hash function, The hash value addresses a location in an array of "buckets" or "collision lists" which contains the (key , value) pair.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What is used to create Unicode string in Python?

"u" should be added before the string

`a = (u'Python')`   
`type(a)  #will give you unicode`

Add unicode before the string. Ex: unicode(text) resulting in text.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What is the built-in function used in Python to iterate over a sequence of numbers?

Syntax: `range(start,end,step count)`

Ex: 
```py
a = range(1,10,2)
print (a)
```
Output: 
`[1, 3, 5, 7, 9]`

If using to iterate
```py
for i in range(1,10):
    print (i)
```
Output:
>
    1
    2
    3
    4
    5
    6
    7
    8
    9

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. Does Python have a switch-case statement?

Ans.  In languages like C++, we have something like this:

    switch(name)
    {
        case 'Ram':
            cout<<"Monday";
            break;
        case 'Shiv':
            cout<<"Tuesday";
            break;
        default:
            cout<<"Hi, user";
    }

But in Python, we do not have a switch-case statement. Here, you may write a switch function to use. Else, you may use a set of if-elif-else statements. To implement a function for this, we may use a dictionary.

```
def switch(choice):     
    switcher={
        'Ram':'Monday',
        'Shiv':'Tuesday',
        print(switcher.get(choice,'Hi, user'))
    return 
    switch('Shiv')
    Tuesday
    switch('Ram')
    Monday
    switch('Raghav')
    Hi, user
    }
```

Here, the get() method returns the value of the key. When no key matches, the default value (the second argument) is returned.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. Does python support switch or case statement in Python? If not what is the reason for the same?

Dictionary can be used as case/switch. Actually there is no switch statement in the Python programming language but the is a similar construct that can do justice to switch that is the exception handling using try and except1,except2,except3.... and so on.

## Q. What is the statement that can be used in Python if a statement is required syntactically but the program requires no action?

`pass` keyword is used to do nothing but it fulfill the syntactical requirements.

```py
try x[10]:
    print(x)
except:
    pass
```
Use `pass` keyword over there like:
```py
if a > 0:
    print("Hello")
else:
    pass
```

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. Does Python support strongly for regular expressions?

Yes, Python Supports Regular Expressions Well. `re` is an in-buit library for the same. There is a lot of other languages that have good support to RegEx- Perl, Awk, Sed, Java etc.

Regular expressions (called REs, or regexes, or regex patterns) are essentially a tiny, highly specialized programming language embedded inside Python and made available through the re module. Using this little language, you specify the rules for the set of possible strings that you want to match; this set might contain English sentences, or e-mail addresses, or TeX commands, or anything you like. You can then ask questions such as "Does this string match the pattern?", or "Is there a match for the pattern anywhere in this string?". You can also use REs to modify a string or to split it apart in various ways.

Regular expression patterns are compiled into a series of bytecodes which are then executed by a matching engine written in C. For advanced use, it may be necessary to pay careful attention to how the engine will execute a given RE, and write the RE in a certain way in order to produce bytecode that runs faster. Optimization isn't covered in this document, because it requires that you have a good understanding of the matching engine's internals.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How do you perform pattern matching in Python? Explain.

Regular Expressions/REs/ regexes enable us to specify expressions that can match specific "parts" of a given string. For instance, we can define a regular expression to match a single character or a digit, a telephone number, or an email address, etc. The Python's "re" module provides regular expression patterns and was introduce from later versions of Python 2.5. "re" module is providing methods for search text strings, or replacing text strings along with methods for splitting text strings based on the pattern defined.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. Write a regular expression that will accept an email id. Use the `re` module.

Ans.
```py
import re   
e = re.search(r'[0-9a-zA-Z.]+@[a-zA-Z]+\.(com|co\.in)$' 'JaiRameshwar@gmail.com')
e.group()
```
'Ramayanwashere@gmail.com'

To brush up on regular expressions, check Regular Expressions in Python.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

### _Garbage Collector & Memory Manager_

## Q. What is Garbage Collection?
The concept of removing unused or unreferenced objects from the memory location is known as a Garbage Collection. While executing the program, if garbage collection takes place then more memory space is available for the program and rest of the program execution becomes faster.

Garbage collector is a predefined program, which removes the unused or unreferenced objects from the memory location.

Any object reference count becomes zero then we call that object as a unused or unreferenced object Then no.of reference variables which are pointing the object is known as a reference count of the object.

While executing the python program if any object reference count becomes zero, then internally python interpreter calls the garbage collector and garbage collector will remove that object from memory location.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. How is memory managed in Python?

Python memory is managed by Python private heap space. All Python objects and data structures are located in a private heap. The programmer does not have an access to this private heap and interpreter. Like other programming language python also has garbage collector which will take care of memory management in python.Python also have an inbuilt garbage collector, which recycle all the unused memory and frees the memory and makes it available to the heap space. The allocation of Python heap space for Python objects is done by Python memory manager. The core API gives access to some tools for the programmer to code.

Python has a private heap space to hold all objects and data structures. Being programmers, we cannot access it; it is the interpreter that manages it. But with the core API, we can access some tools. The Python memory manager controls the allocation. 

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. Why isn't all memory freed when Python exits?
Objects referenced from the global namespaces of Python modules are not always deallocated when Python exits. This may happen if there are circular references. There are also certain bits of memory ...

## Q. Whenever you exit Python, is all memory de-allocated? State why is it so.

The answer here is no. The modules with circular references to other objects, or to objects referenced from global namespaces, aren't always freed on exiting Python.
Plus, it is impossible to de-allocate portions of memory reserved by the C library.

Whenever Python exits, especially those Python modules which are having circular references to other objects or the objects that are referenced from the global namespaces are not always de-allocated or freed.It is impossible to de-allocate those portions of memory that are reserved by the C library.On exit, because of having its own efficient clean up mechanism, Python would try to de-allocate/destroy every other object.

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. Is it possible to assign multiple var to values in list?

The multiple assignment trick is a shortcut that lets you assign multiple variables with the values in a list in one line of code. So instead of doing this:

```py
cat = ['fat', 'orange', 'loud']
size = cat[0]
color = cat[1]
disposition = cat[2] 
```

Do this:
```
cat = ['fat', 'orange', 'loud']
size, color, disposition = cat
```

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What is `__slots__` and when is it useful?

In Python, every class can have instance attributes. By default Python uses a `dict` to store an object\'s instance attributes. This is really helpful as it allows setting arbitrary new attributes at runtime.

However, for small classes with known attributes it might be a bottleneck. The `dict` wastes a lot of RAM. Python can\'t just allocate a static amount of memory at object creation to store all the attributes. Therefore it sucks a lot of RAM if you create a lot of objects. The usage of `__slots__` to tell Python not to use a `dict`, and only allocate space for a fixed set of attributes.

*Example:*

**1. Object without slots**

```py
class MyClass(object):
      def __init__(self, *args, **kwargs):
                self.a = 1
                self.b = 2
  
if __name__ == "__main__":
     instance = MyClass()
     print(instance.__dict__)
```

**2. Object with slots**

```py
class MyClass(object):
      __slots__=['a', 'b']
      def __init__(self, *args, **kwargs):
                self.a = 1
                self.b = 2
  
if __name__ == "__main__":
     instance = MyClass()
     print(instance.__slots__)
```

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>

## Q. What Are The Types of Objects Support in Python Language?

Python supports are two types are of objects. They are:

Immutable built-in types:

    Strings
    Tuples
    Numbers

Mutable built-in types:

    List
    Sets
    Dictionaries

- Immutable Objects

    The objects which doesn't allow to modify the contents of those objects are known as 'Immutable Objects'
    
    Before creating immutable objects with some content python interpreter verifies is already any object is available. In memory location with same content or not.
    
    If already object is not available then python interpreter creates new objects with that content and store that object address two reference variable.
    
    If already object is present in memory location with the same content creating new objects already existing object address will be given to the reference variable.

    _Program:_
    ```py
    i=1000
    print(i)
    print(type(i))
    print(id(i))
    j=2000
    print(j)
    print(type(j))
    print(id(j))
    x=3000
    print(x)
    print(type(x))
    print(id(x))
    y=3000
    print(y)
    print(type(y))
    print(id(y))
    ```

    `int, float, complex, bool, str, tuple` are immutable objects

    Immutable objects performance is high.

    Applying iterations on Immutable objects takes less time.
    
    All fundamentals types represented classes objects and tuple class objects are immutable objects.

- Mutable Objects:
    1. The Objects which allows to modify the contents of those objects are known as 'Mutable Objects'
    2. We can create two different mutable objects with same content

    Program:
    ```py
    x=[10,20,30]
    print(x)
    print(type(x))
    print(id(x))
    y=[10,20,30]
    print(y)
    print(type(y))
    print(id(y))
    ```
    Output:

    `List, set, dict` classes objects are mutable objects
    
    Mutable objects performance is low when compared to immutable objects   
    Applying Iterations mutable objects takes huge time

<div align="right">
    <b><a href="#">↥ back to top</a></b>
</div>
