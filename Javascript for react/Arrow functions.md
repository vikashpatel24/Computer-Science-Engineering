Arrow functions are a different way of creating functions in JavaScript. Besides a shorter syntax, they offer advantages when it comes to keeping the scope of the this keyword .

Arrow function syntax may look strange but it's actually simple

## normal function :-

```
function callMe(name) { 
 console.log(name);
 } 
```

which you could also write as


```
const callMe = function(name) { 
 console.log(name);
}
```

## Arrow function :- 

```
 const callMe = (name) => { 
 console.log(name);
 }
```

## Arrow function hacks:-

When having no arguments, you have to use empty parentheses in the function declaration:-

```
 const callMe = () => { 
console.log('Max!');
 }
```

When having exactly one argument, you may omit the parentheses:

```
 const callMe = name => { 
 console.log(name);
 }
```

When just returning a value, you can use the following 
shortcut:

```
const returnMe = name => nam
```

That's equal to:

```
const returnMe = name => { 
 return name;
}
```

