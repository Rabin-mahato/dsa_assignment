# Program 2: Infix to Postfix Conversion and Evaluation

## Aim 
To convert an infix mathematical expression into postfix and then evaluate it.


# Data Structures Used

Two stacks are used:

1. Character stack
   - It is used to store operators and parentheses.

2. Integer stack
   - It is used to evaluate postfix expressions.


## Functions Description

1.initChar() / initInt()
Initialize stack by setting top = -1.

2.pushChar() / popChar()
Push and pop operators from character stack.

3.pushInt() / popInt()
Push and pop integer values from integer stack.

4.precedence()
Returns precedence level of operators.

5.applyOperator()
Performs arithmetic operation on two operands.

6.infixToPostfix()
Converts infix expressions into postfix using stack.

7.evaluatePostfix()
Evaluates postfix expressions using integer stack.


## Main Function Overview

i. Declare infix expressions.
ii. Convert infix to postfix.
iii. Print postfix expressions.
iv. Evaluate postfix expressions.
v. Print final results.


## Sample Output

Infix Expression: 3+(2*4)
Postfix Expression: 324*+
Evaluated Result: 11


## # Conclusion

Stack is used to perform infix to postfix conversion and evaluation.


It is used to manage operator precedence and execution.
