Destructuring allows you to easily access the values of arrays or objects and assign them to variables.

## Here's an example for an array:


```
 const array = [1, 2, 3];
 const [a, b] = array;
 console.log(a); // prints 1
 console.log(b); // prints 2
 console.log(array); // prints [1, 2, 3] 
```

## Here's an example for an object:

```
 const myObj = {
 name: 'Max',
 age: 28
  }
 const {name} = myObj;
 console.log(name); // prints 'Max'
 console.log(age); // prints undefined
 console.log(myObj); // prints {name: 'Max', age: 28}
```