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

    declare

    num int:=0;

    begin

    loop
    dbms_output.put_line('Hi');
    num:=num+1;
    if num>2
    then exit;
    end if;
    end loop;

    end;

### while loop

Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.

    declare 
    num int := 0;
    begin
    while num<3 loop
    dbms_output.put_line(num);
    num := num + 1;
    end loop;
    end;

### for loop 

Execute a sequence of statements multiple times and abbreviates the code that manages the loop variable.

    declare
    num int;
    begin
    for i in 1..3 loop
    dbms_output.put_line('Hi');
    end loop;
    end;

### Nested loops

You can use one or more loop inside any another basic loop, while, or for loop.

<b>PL/SQL loops can be labeled</b>. The label should be enclosed by double angle brackets <code>(<< and >>)</code> and appear at the beginning of the LOOP statement. The label name can also appear at the end of the LOOP statement.

    begin
    for i in 0..2 loop
    for j in 1..3 loop
        dbms_output.put_line(i||' '||j);
    end loop;
    end loop;
    end;

### Labelling Loops

PL/SQL loops can be labeled. The label should be enclosed by double angle brackets (<< and >>) and appear at the beginning of the LOOP statement. The label name can also appear at the end of the LOOP statement.

    DECLARE 
    i number(1); 
    j number(1); 
    BEGIN 
    << outer_loop >> 
    FOR i IN 1..3 LOOP 
        << inner_loop >> 
        FOR j IN 1..3 LOOP 
            dbms_output.put_line('i is: '|| i || ' and j is: ' || j); 
        END loop inner_loop; 
    END loop outer_loop; 
    END; 

## Loop Control Statements

### EXIT statement

The Exit statement completes the loop and control passes to the statement immediately after the END LOOP.

### CONTINUE statement

Causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating.

### GOTO statement

Transfers control to the labeled statement. Though it is not advised to use the GOTO statement in your program.

## String Functions and Operators

ASCII(x);

Returns the ASCII value of the character x.
	
CHR(x);

Returns the character with the ASCII value of x.
	
CONCAT(x, y);

Concatenates the strings x and y and returns the appended string.
	
INITCAP(x);

Converts the initial letter of each word in x to uppercase and returns that string.
	
INSTR(x, find_string [, start] [, occurrence]);

Searches for find_string in x and returns the position at which it occurs.
	
INSTRB(x);

Returns the location of a string within another string, but returns the value in bytes.
	
LENGTH(x);

Returns the number of characters in x.
	
LENGTHB(x);

Returns the length of a character string in bytes for single byte character set.
	
LOWER(x);

Converts the letters in x to lowercase and returns that string.
	
LPAD(x, width [, pad_string]) ;

Pads x with spaces to the left, to bring the total length of the string up to width characters.
	
LTRIM(x [, trim_string]);

Trims characters from the left of x.
	
NANVL(x, value);

Returns value if x matches the NaN special value (not a number), otherwise x is returned.
	
NLS_INITCAP(x);

Same as the INITCAP function except that it can use a different sort method as specified by NLSSORT.

NLS_LOWER(x) ;

Same as the LOWER function except that it can use a different sort method as specified by NLSSORT.
	
NLS_UPPER(x);

Same as the UPPER function except that it can use a different sort method as specified by NLSSORT.
	
NLSSORT(x);

Changes the method of sorting the characters. Must be specified before any NLS function; otherwise, the default sort will be used.
	
NVL(x, value);

Returns value if x is null; otherwise, x is returned.
	
NVL2(x, value1, value2);

Returns value1 if x is not null; if x is null, value2 is returned.
	
REPLACE(x, search_string, replace_string);

Searches x for search_string and replaces it with replace_string.
	
RPAD(x, width [, pad_string]);

Pads x to the right.
	
RTRIM(x [, trim_string]);

Trims x from the right.
	
SOUNDEX(x) ;

Returns a string containing the phonetic representation of x.
	
SUBSTR(x, start [, length]);

Returns a substring of x that begins at the position specified by start. An optional length for the substring may be supplied.
	
SUBSTRB(x);

Same as SUBSTR except that the parameters are expressed in bytes instead of characters for the single-byte character systems.
	
TRIM([trim_char FROM) x);

Trims characters from the left and right of x.
	
UPPER(x);

Converts the letters in x to uppercase and returns that string.

## Arrays in PL/SQL

The PL/SQL programming language provides a data structure called the <code>VARRAY</code>, which can store a fixed-size sequential collection of elements of the same type. A varray is used to store an ordered collection of data, however it is often better to think of an array as a collection of variables of the same type.

All varrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

A varray type is created with the CREATE TYPE statement.<br>
Basic syntax at schema level: 

    CREATE OR REPLACE TYPE varray_type_name IS VARRAY(n) of <element_type>
    
    * varray_type_name is a valid attribute name,
    * n is the number of elements (maximum) in the varray,
    * element_type is the data type of the elements of the array.

Basic syntax within a PL/SQL block: 

    TYPE varray_type_name IS VARRAY(n) of <element_type>

<i><b>Question:</b> Initialize the array through a loop and print it.</i>

    DECLARE
        type arr is varray(5) of int;
        arr1 arr := arr();
        total int;
    BEGIN
        arr1.extend(5);
        for i in 1..5 loop
            arr1(i) := i;
        end loop;
        
        total := arr1.count;
        
        for i in 1..total loop
            dbms_output.put_line(arr1(i));
        end loop;
    END;

<i><b>Question:</b> Creates a nested table of employee salaries.
Loops through the table and calculates the total salary and average salary of all employees.
Prints the total and average salary.</i>
<i><b>
Question:</b>
Write a PL/SQL block that:
Creates a record type that stores information about an employee (ID, Name, Salary).
Initializes a table of records with data for multiple employees.
Loops through the table, checks if the salary of each employee is below the average salary, and prints the employee's name and salary if their salary is below the average.</i>

    DECLARE
    -- Step 1: Define a record type for employee information
    TYPE employee_record IS RECORD (
        id    NUMBER,
        name  VARCHAR2(100),
        salary NUMBER
    );

    -- Step 2: Define a nested table type of the employee record
    TYPE employee_table IS TABLE OF employee_record;

    -- Step 3: Initialize a table of records with employee data
    employees employee_table := employee_table(
        employee_record(1, 'John Doe', 5000),
        employee_record(2, 'Jane Smith', 6000),
        employee_record(3, 'Alice Johnson', 4500),
        employee_record(4, 'Bob Brown', 7000),
        employee_record(5, 'Charlie Davis', 4000)
    );

    -- Variables to store total salary and average salary
    total_salary NUMBER := 0;
    average_salary NUMBER;
    BEGIN
    -- Step 4: Calculate the total salary of all employees
    FOR i IN 1 .. employees.COUNT LOOP
        total_salary := total_salary + employees(i).salary;
    END LOOP;

    -- Step 5: Calculate the average salary
    average_salary := total_salary / employees.COUNT;

    -- Step 6: Print the average salary
    DBMS_OUTPUT.PUT_LINE('Average Salary: ' || average_salary);

    -- Step 7: Loop through the table and print employees with salary below average
    DBMS_OUTPUT.PUT_LINE('Employees with salary below average:');
    FOR i IN 1 .. employees.COUNT LOOP
        IF employees(i).salary < average_salary THEN
        DBMS_OUTPUT.PUT_LINE('Name: ' || employees(i).name || ', Salary: ' || employees(i).salary);
        END IF;
    END LOOP;
    END;
    /