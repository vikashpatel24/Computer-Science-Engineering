<h1>Memory Addressing Modes</h1>

There are many ways to locate data and instructions in primary memory and these methods are known as <b>Memory Address Modes</b>.

There are essentially 4 types of Memory Addressing modes:
  1. Immediate
  2. Direct
  3. Indirect
  4. Indexed
  5. Implied
  6. Register Direct 
  7. Register Indirect
  8. Relative 
  9. Base 
 10. Auto-increment
 11. Auto-decrement 

<h3>Immediate Addressing mode</h3>
-> It basically means that the data is hard-coded into the instruction itself.   
-> It neither requires memory accesses nor fetching of memory so it is, by far, the fastest method of addressing.
-> the major disadvantage of this mode is the size constraint.
<h3> Direct Addressing mode </h3>
->It is a very straightforward method of addressing data, we basically provide the memory location of the data.
-> It requires a memory access so while it is fairly fast, it is slower than Immediate addressing.
<h3> Indirect Addressing mode </h3>
-> It essentially means that the address of the data is stored at an intermediate location so we basically have to find the intermediate location first which then gives us the address of the data.
-> there are two memory accesses required so it is slower than both direct and immediate but it contain data of larger sizes.
<h3>Indexed Addressing mode </h3>
-> It means that the final address of the data has to be found using an offest from the base address.
-> It is ideal for storing and accessing values of arrays because they require contiguous memory locations so we need only the address of the first element to find the location of the other elements in the array. 
<h3>Implied Adressing mode </h3>
->In this addressing mode,
The definition of the instruction itself specify the operands implicitly.
It is also called as implicit addressing mode.
<h3>Register Direct Addressing mode</h3>
->In this addressing mode,

The operand is contained in a register set.
The address field of the instruction refers to a CPU register that contains the operand.
No reference to memory is required to fetch the operand.
<h3>Register Indirect Addresssing mode</h3>
->In this addressing mode,

The address field of the instruction refers to a CPU register that contains the effective address of the operand.
Only one reference to memory is required to fetch the operand.
<h3>Relative Addressing mode</h3>
->In this addressing mode,

Effective address of the operand is obtained by adding the content of program counter with the address part of the instruction.
<h3>Base Register Addressing mode</h3>
->In this addressing mode,

Effective address of the operand is obtained by adding the content of program counter with the address part of the instruction.
<h3>Auto-Increment Addressing mode</h3>
->In this addressing mode,

After accessing the operand, the content of the register is automatically incremented by step size ‘d’.
Step size ‘d’ depends on the size of operand accessed.
Only one reference to memory is required to fetch the operand.
<h3>Auto-decrement Adreesing mode</h3>
->In this addressing mode,

First, the content of the register is decremented by step size ‘d’.
Step size ‘d’ depends on the size of operand accessed.
After decrementing, the operand is read.
Only one reference to memory is required to fetch the operand.