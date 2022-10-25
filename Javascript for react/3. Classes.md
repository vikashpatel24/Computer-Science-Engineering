Classes are a feature which basically replace constructor functions and prototypes. You can define blueprints for JavaScript objects with them. 

## Defining classes :-

```
 class Person {
 constructor () {
 this.name = 'Max';
 }
}

const person = new Person();
console.log(person.name); // prints 'Max'  
```

In the above example, not only the class but also a property of that class (=> name ) is defined. 

## Defining methods :-

```
class Person {
name = 'Max';
printMyName () {
console.log(this.name); // this is required to refer 
to the class!
 }
 }

 const person = new Person();
 person.printMyName()
```

## inheritance when using classes:

```
class Human {
species = 'human';
 }

class Person extends Human {
name = 'Max';
printMyName = () => {
 console.log(this.name);
 }
 }

 const person = new Person();
 person.printMyName();
 console.log(person.species); // prints 'human'
```