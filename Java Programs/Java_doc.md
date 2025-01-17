# Java

## 

When you specify <code>String[] args</code> in the main method, the Java program is set up to accept command-line arguments that are passed when you run the program. These arguments are always received as strings in the args array. If you pass multiple arguments, they are stored as individual strings in that array.

### How Command-Line Arguments Work:

<strong>Command-Line Arguments as Strings:</strong>

When you run the program from the command line (e.g., terminal, console), any text you type after the program name is passed to the program as strings in the <code>args</code> array.

    java MyProgram Hello 123 true

In this case:
<ul>
<li>"Hello" will be in args[0]</li>
<li>"123" will be in args[1]</li>
<li>"true" will be in args[2]</li>
</ul>

Automatic Conversion:

The command-line arguments are always received as strings. If you want to convert them to other data types you need to manually perform the conversion using methods like <code>Integer.parseInt()</code>, <code>Double.parseDouble()</code>, <code>Boolean.parseBoolean()</code>, etc.

For example, if you wanted to convert "123" (a string) to an integer:

    int number = Integer.parseInt(args[1]);
Or if you wanted to convert "true" (a string) to a boolean:

    boolean flag = Boolean.parseBoolean(args[2]);

Example of using command line arguments: 

    public class Main {
    public static void main(String[] args) {
        // Checking if arguments were passed
        if (args.length > 0) {
            System.out.println("First argument: " + args[0]);

            // Example of parsing a string argument to an integer
            int num = Integer.parseInt(args[1]);
            System.out.println("Second argument as integer: " + num);
        } else {
            System.out.println("No arguments passed.");
        }
    }
    }

Running the Program:

If you run the program like this from the command line:

    java Main Hello 123

The output will be:

    First argument: Hello
    Second argument as integer: 123

In this case:

"Hello" is passed as args[0] (a string).<br>
"123" is passed as args[1] (a string), which is then converted to an integer using Integer.parseInt().<br>

## Java User Input (Scanner)

The <code>Scanner</code> class is used to read input from various sources, such as the console (keyboard), files, or strings. It provides a convenient way to capture and parse data in different formats (e.g., integers, floating-point numbers, strings) and is commonly used for interactive applications where user input is required.<br>

<code>System.in</code> is an InputStream that represents the input from the user (usually via the keyboard).
When you pass <code>System.in</code> to the Scanner constructor, it tells the Scanner to read input from this stream (i.e., from the console).

### How <code>system.in</code> works ?
<ul>
<li><code>System.in</code> is a low-level byte stream that handles the keyboard input.</li>
<li><code>Scanner</code> works by converting these bytes into a format that is easier to work with (like int, double, String, etc.).</li>
<li><strong>The Scanner class provides convenient methods to read different types of data, such as:</strong></li>
<ul>
<li><code>nextLine()</code>: Reads an entire line of text (String).</li>
<li><code>nextInt()</code>: Reads an integer.</li>
<li><code>nextDouble()</code>: Reads a floating-point number.</li>
<li><code>next()</code>: Reads a single token (like a word).</li>
</ul>
</ul>

Without passing <code>System.in</code>, the Scanner would not know where to read input from. By passing <code>System.in</code>, you're specifically telling the Scanner to read from the standard input stream, which in most environments is the keyboard.

## Java Type Casting

Assigning a value of one primitive data type to another type.<br>
There are two types of casting: <ul>
<li><strong>Widening casting</strong> - Automatically converts a smaller type to a larger type.</li>
    <code>int myInt = 9;<br>
    double myDouble = myInt;</code>
<li><strong>Narrowing Casting</strong> - Manually convert a larger type to a smaller type </li>
    <code>double myDouble = 9.78d;<br>
    int myInt = (int) myDouble;</code>
</ul>

## String Concatenation

<code>+</code> operator can be used to concatenate two strings.

    System.out.println(firstName + " " + lastName);

<code>concat()</code> method is used to concat two strings. It creates a space between the two strings during concatenation.

    System.out.println(firstName.concat(lastName));

<ul>
<li>If you add a string and a number , then the result will be a string concatenation.</li>
</ul>

## Math class

<code>Math.random()</code> returns a random number between <strong>0.0 (inclusive) and 1.0 (exclusive) </strong><br>
To generate a number between a specific range :

    double randomNumber = Math.random() * (max - min) + min;