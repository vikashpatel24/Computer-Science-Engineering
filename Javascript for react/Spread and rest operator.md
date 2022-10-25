The spread and rest operators actually use the same syntax: ... 

Yes, that is the operator - just three dots. It's usage determines whether you're using it as the spread or rest operator.

## Using the Spread Operator on array:

The spread operator allows you to pull elements out of an array (=> split the array into a list of its elements) or pull the properties out of an object. Here are two examples:


```
const oldArray = [1, 2, 3];
const newArray = [...oldArray, 4, 5]; // This now is [1, 2, 
3, 4, 5] 
```

## Using the Spread Operator on object:

```
 const oldObject = {
 name: 'Max'
 };
 const newObject = {
 ...oldObject,
 age: 28
 };
```

newObject would then be

```
{
name: 'Max',
 age: 28
 }
```