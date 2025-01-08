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

 