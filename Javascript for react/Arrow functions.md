Arrow functions are a different way of creating functions in JavaScript. Besides a shorter syntax, they offer advantages when it comes to keeping the scope of the this keyword .

Arrow function syntax may look strange but it's actually simple


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

becomes: 

```
 const callMe = (name) => { 
. console.log(name);
. }
```