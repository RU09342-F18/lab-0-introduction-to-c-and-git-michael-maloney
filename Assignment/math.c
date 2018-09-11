/*
 * math.c
 *
 *  Created on: Sept 10, 2018
 * 	Last Edited: Sept 10, 2018
 *      Author: Michael Maloney
 */

#include <math.h>

/* + Add (num1 + num2)
* - Subtract (num1 - num2)
* * Multiply (num1 * num2)
* / Divide (num1 / num2)
* % Modulus (num1 % num2)
* < Left Shift (num1 << num2)
* > Right Shift (num1 >> num2)
* & Bitwise AND (num1 & num2)
* | Bitwise OR (num1 | num2)
* ^ Bitwise XOR (num1 ^ num2)
* ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed/
 */

//Range of input integers: [-2,147,483,648 to 2,147,483,647]
//Range of output integer: [-2,147,483,648 to 2,147,483,647]
int math(int num1, int num2, char Operator) {
    int output = 0; // Output variable returned from function, set to 0 in case Operator is invalid.

    //(Below) If statements to perform actions on variables int1 and int2 based on input Operator.

    if (Operator  ==  '+'){   //Addition
        output = num1 + num2;
    }
    else if (Operator == '-'){ //Subtraction
        output = num1 - num2;
    }
    else if (Operator == '*'){ //Multiplication
        output = num1 * num2;
    }
    else if (Operator == '/'){ //Division
        output = num1 / num2;
    }
    else if (Operator == '%'){ //Modulus
        output = num1 % num2;
    }
    else if (Operator == '<'){ //Left Shift
        output = num1 << num2;
    }
    else if (Operator == '>'){ //Right Shift
        output = num1 >> num2;
    }
    else if (Operator == '&'){ //Bitwise AND
        output = num1 & num2;
    }
    else if (Operator == '|'){ //Bitwise OR
        output = num1 | num2;
    }
    else if (Operator == '^'){ //Bitwise XOR
        output = num1 ^ num2;
    }
    else if (Operator == '~'){ //Bitwise Inverse
        output = ~num1;    //Only uses num1, but both are necessary for compilation
    }
    return output; //Returns output of operation
}
