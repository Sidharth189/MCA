# PL/SQL 

It is a <b>block-structured language</b>. It is divided and written in logical blocks of code. 

## Blocks

<b>Declarations</b>: This block starts with the keyword <code>DECLARE</code>. 	It is optional , defines variables ,cursors etc..
	

<b>Executable commands</b>: This block is enclosed between <code>BEGIN</code> and <code>END</code>.
	It is mandatory in a program.

<b>Exception Handling</b>: This block starts with <code>EXCEPTION</code>. It is optional and is used to handle errors in the program.

<b><i>Every PL/SQL statement ends with a semicolon.</i></b>

## Basic Syntax:
	
    DECLARE
   		<declarations section> 
	BEGIN 
   		<executable command(s)>
	EXCEPTION
   		<exception handling> 
	END;

## The PL/SQL Delimiters

A delimiter is a symbol with a special meaning. Following is the list of delimiters in PL/SQL −
<table>
<tr><th>Delimiter</th> <th>Description</th></tr>
<tr><td>+, -, *, /</td>	<td>Addition, subtraction/negation, multiplication, division</td>
</tr>
<tr>
<td>%</td>		<td>Attribute indicator</td>
</tr>
<tr>
<td>'</td>		<td>Character string delimiter</td>
</tr>
<tr>
<td>.</td>		<td>Component selector</td>
</tr>
<tr>
<td>(,)</td>		<td>Expression or list delimiter</td>
</tr>
<tr>
<td>:</td>		<td>Host variable indicator</td>
</tr>
<tr>
<td>,</td>		<td>Item separator</td>
</tr>
<tr>
<td>"</td>		<td>Quoted identifier delimiter</td>
</tr>
<tr>
<td>=</td>		<td>Relational operator</td>
</tr>
<tr>
<td>@</td>		<td>Remote access indicator</td>
</tr>
<tr>
<td>;</td>		<td>Statement terminator</td>
</tr>
<tr>
<td>:=</td>	<td>Assignment operator</td>
</tr>
<tr>
<td>=></td>		<td>Association operator</td>
</tr>
<tr>
<td>||</td>		<td>Concatenation operator</td>
</tr>
<tr>
<td>**</td>		<td>Exponentiation operator</td>
</tr>
<tr>
<td><<, >></td>		<td>Label delimiter (begin and end)</td>
</tr>
<tr>
<td>/*, */</td>		<td>Multi-line comment delimiter (begin and end)</td>
</tr>
<tr>
<td>--</td>		<td>Single-line comment indicator</td>
</tr>
<tr>
<td>..</td>		<td>Range operator</td>
</tr>
<tr>
<td><, >, <=, >=</td>	<td>Relational operators</td>
</tr>
<tr><td><>, '=, ~=, ^=</td>	<td>Different versions of NOT EQUAL</td>
</tr>
</table>

## Variable Declaration in PL/SQL

It must be declared in the declaration section or in a package as a global variable. 

<b>Syntax</b>:

    variable_name [CONSTANT] datatype [NOT NULL] [:= | DEFAULT initial_value] 

When you provide a size, scale or precision limit with the data type, it is called a <b>constrained declaration</b>. Constrained declarations require less memory than unconstrained declarations.
	
## Initializing Variables in PL/SQL

Whenever you declare a variable, PL/SQL assigns it a default value of NULL. If you want to initialize a variable with a value other than the NULL value, you can do so during the declaration, using either of the following −

<ul><li>The <code>DEFAULT</code> keyword</li>

<li>The assignment operator</li></ul>

Example: 

    counter binary_integer := 0; 
    greetings varchar2(20) DEFAULT 'Have a Good Day';

You can also specify that a variable should not have a NULL value using the NOT NULL constraint. If you use the NOT NULL constraint, you must explicitly assign an initial value for that variable.

## Constants

A constant holds a value that once declared, does not change in the program. A constant declaration specifies its name, data type, and value, and allocates storage for it. The declaration can also impose the NOT NULL constraint.

A constant is declared using the <code>CONSTANT</code> keyword. It requires an initial value and does not allow that value to be changed. 

Example:

    DECLARE 
        Const_num CONSTANT INT := 200;
    BEGIN
        DBMS_OUTPUT.PUTLINE(Const_num);
    END;

## Descision Making Statements

### IF-THEN statement

The IF statement associates a condition with a sequence of statements enclosed by the keywords <code>THEN</code> and <code>END IF</code>. If the condition is true, the statements get executed and if the condition is false or NULL then the IF statement does nothing.

### IF-THEN-ELSE statement
IF statement adds the keyword ELSE followed by an alternative sequence of statement. If the condition is false or NULL, then only the alternative sequence of statements get executed. It ensures that either of the sequence of statements is executed.

### IF-THEN-ELSIF statement
It allows you to choose between several alternatives.

### Case statement

Like the IF statement, the CASE statement selects one sequence of statements to execute.

However, to select the sequence, the CASE statement uses a selector rather than multiple Boolean expressions. A selector is an expression whose value is used to select one of several alternatives.

Example:

    DECLARE 
        grade char(1) := 'A'; 
    BEGIN 
        CASE grade 
            when 'A' then dbms_output.put_line('Excellent'); 
            when 'B' then dbms_output.put_line('Very good'); 
            when 'C' then dbms_output.put_line('Well done'); 
            when 'D' then dbms_output.put_line('You passed'); 
            when 'F' then dbms_output.put_line('Better try again'); 
            else dbms_output.put_line('No such grade'); 
        END CASE; 
    END; 

### Searched CASE statement

The searched CASE statement has no selector, and it's WHEN clauses contain search conditions that yield Boolean values.

Example:

    DECLARE 
        grade char(1) := 'B'; 
    BEGIN 
        CASE  
            when grade = 'A' then dbms_output.put_line('Excellent'); 
            when grade = 'B' then dbms_output.put_line('Very good'); 
            when grade = 'C' then dbms_output.put_line('Well done'); 
            when grade = 'D' then dbms_output.put_line('You passed'); 
            when grade = 'F' then dbms_output.put_line('Better try again'); 
            else dbms_output.put_line('No such grade'); 
        END CASE; 
    END; 

### nested IF-THEN-ELSE

You can use one IF-THEN or IF-THEN-ELSIF statement inside another IF-THEN or IF-THEN-ELSIF statement(s).

## Loops in PL/SQL

### Basic loop

In this loop structure, sequence of statements is enclosed between the <code>LOOP</code> and the <code>END LOOP</code> statements. At each iteration, the sequence of statements is executed and then control resumes at the top of the loop.

### while loop

Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.

### for loop 

Execute a sequence of statements multiple times and abbreviates the code that manages the loop variable.

### Nested loops

You can use one or more loop inside any another basic loop, while, or for loop.

<b>PL/SQL loops can be labeled</b>. The label should be enclosed by double angle brackets <code>(<< and >>)</code> and appear at the beginning of the LOOP statement. The label name can also appear at the end of the LOOP statement.


