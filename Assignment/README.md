##Math Header and .c Files

So far provided are the math.c and math.h files.  The header file (math.h) creates the "math" prototype, while the math.c file creates the logic for the "math" function.

#math Function

The math function prototyped in the header file reads as such: int math(int int2, int int2, char Operator).  The function returns an integer value ranging from -2,147,483,648 to 2,147,483,647.  The input variables int1 and int2 also need to be within this range.  The Operator character needs to one of the following (+, -, *, /, %, <, >, &, |, ^, ~) to allow the function to operate properly.

With all three variables properly used, the function allows for addition, subtraction, multiplication, division, modulus, right shift, left shift, bitwise AND, bitwise OR, bitwise XOR, and bitwise inverse (of int1).

The main logic and code for the function resides in the math.c file.  An output variable is first instantiated to 0 inside the function.  Then, a series of if statements compare the Operator character to its respective character.  In retrospect, this method mimics case statements and would be more efficient with use of a case statement.  Regardless, if the if statment is true, the appropriate logic is applied to the output variable.  For example, if the Operator char is '/', the code then allows the output variable to equal int1 divided by int2.  Since this is the case, no other if statement can be true and the returned variable is the output created from the division section.
