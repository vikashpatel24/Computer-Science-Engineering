String is a built-in class available in java. 

➢A string is a collection of characters. ➢Simplest method for creating a string is String str1=”Java program”

➢Variable of type object are called as reference. 
➢String object is referred to as a literal. 
➢References are used for holding or pointing objects. 
➢String literal is taken in “ “. 
➢Keyword new is taken to create an object in heap. 
➢Constructors are methods or functions used for creating string object. 
➢There are three types of constructors: 
•String(char [ ]).
	Array of characters is taken and is converted into string. 
•String(byte [ ]).         
	Array of bytes is taken and is converted into a string. 
•String(string).         
	A string literal is taken in this method.       

New string is created using this method.

➢Java maintains a pool of string constants. 
➢Whenever new is applied the object is created in heap memory and the memory occupied by the object literal is in pool. 
➢When same literal is used java does not create another object. 
➢When new is applied the object in pool may or may not be created. 
➢String objects are immutable/ they cannot be modified. Methods of string class: 
➢The methods creates a new string before giving the results. 
➢The new object is then created in heap memory. 

#1. 

➢str.length(): it returns the length of the string mentioned. 
➢str.toLowerCase(): it converts the given characters of string into lower case. 
➢str.toUpperCase(): it converts the given characters of string into upper case. 
➢str.trim(): it is used to remove the leading and tailing spaces from the array if there are any. ➢str.substring(int begin): it returns a new string by giving the part of a string from where the index is given. ➢str.substring(int begin, int end): it works same as the above but the starting and ending index both can be given in the substring. ➢str.replace(char old, char new): it replaces the old character with the new character. 

#2. 

➢str.startsWith(string s): to find the particular starting word of a the string/to find the initials. ➢Str.endsWith(string s): to find particular ending word of the string. 
➢str.charAt(int index): to find the particular character present on the index given. 
➢str.indexOf(String s): to find the index of the given character. 
➢str.lastIndexOf(string s): to find the index of the given character from  the end of the array. 

#3.

 ➢str.equals(string s): to check whether the contents of two strings are equal or not. ➢str.equalsIgnoreCase(string s):  to check whether the contents of two strings are equal or not but it does not depend upon the case of characters.  
 ➢str.compareTo(string s): to compare two strings according to the dictionary order(in accordance with the ASCII codes for cases of characters). 
 ➢str.valueOf(int i): to convert different types of data into string data type. Regular Expressions: They are used to define the symbols.

 