#include <stdio.h>
#include <math.h>
int math(int num1, int num2, char Operator) //calculator function for performing different operations on two different integers
{
	int answer; //creates variable in which to store answer to calculation
	switch (Operator) //a switch statment to find the right operation to perform based on the inputed operator
	{
		case '+': answer = num1 + num2; //Performs Addition
			break;
		case '-': answer = num1 - num2; //Performs Subtraction
			break;
		case '*': answer = num1 * num2; //Performs Multiplication
			break;
		case '/': answer = num1 / num2; //Performs Division
			break;
		case '%': answer = num1 % num2; //Performs Modulus
			break;
		case '<': answer = num1 << num2; //Performs Bitshift Left
			break;
		case '>': answer = num1 >> num2; //Performs Bitshift Right
			break;
		case '&': answer = num1 & num2; //Performs Bitwise AND
			break;
		case '|': answer = num1 | num2; //Performs Bitwise OR
			break;
		case '^': answer = num1 ^ num2; //Performs Bitwise XOR
			break;
		case '~': answer = ~num1; //Performs Bitwise Inverse
			break;
		default: answer = -1; //Performs Addition
			break;

	}
	return answer; //returns the answer

}




