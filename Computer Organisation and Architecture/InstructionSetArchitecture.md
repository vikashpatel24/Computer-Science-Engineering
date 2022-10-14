<h1>Instructure Set Architecture</h1>

<h2>What is instruction Set Architecture?</h2>
  The Instruction Set Architecture (ISA) is the part of the processor that is visible to the programmer or compiler writer. It is not hardware nor is it software, it is instead an interface between hardware and software.
  It is the guide to the hardware describing how and where the operations specified by the user (using software) should be managed.

  As such, ISA of a processor can be described using 5 paramaters/questions. Since all data processes can be described using operators and operands, such terms are used here as well.
  1. What is the number of operands?
     (are they 0,1,2 or more than 2?)
  2. Where are they stored?
     (Accumulator, Stack, Register and Memory are the available types of storage)
  3. What is size and type of operands?
     (Are the operands of type float, int, character, double or string?)
  4. What is the addressing mode?
     (How is the hardware referring to the data?)

  Consider an n bit instruction, of which m are reserved for the operation code (opcode for short).
  Operation code is used to identify the type of operation that the hardware must perform. There are 
  basically 7 types of operations in every computer, regardless of specs:
    1. Data transfer
    2. Arithmetic
    3. Logical
    4. Conversion
    5. I/O
    6. System control
    7. Transfer of control
 
  Coming back to the topic at hand, we have n-m bits left for keeping track of the data.
  Now, if there is one operand, we only have to store one addressing mode data and one data type.
  Similarly, if there are two operands we have to store 2 two addressing modes and two data types in the n-m bits.
  Next, we have to decide where to store the data, on basis of which of we will decide the addressing mode.
  Accumulators and Stacks are not used is this day and age so we have to choose between Register and Memory.
  Register is faster but has less space in comparison to Memory. So it is upto the designed what they want to use.

  Now, there are two types of Instruction Set Architectures. CISC and RISC.
  CISC refers Complex Instruction Set computer and RISC refers to Reduced Instruction Set Computer.
  In RISC, the instuction lengths are fixed and there are no joint instructions. Thus less instructions are provided and the less significant instructions are thrown out. 
  In CISC, the instruction size varies from 16-96 bits and as such, there is a lot of room of joint instructions and it can also support backward compatitbility.
  Next, I will cover Memory Addressing.

   
    