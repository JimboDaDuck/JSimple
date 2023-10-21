
# JSimple Library Documentation

The JSimple library provides a set of utility functions for common tasks. Below, you'll find a description of each function and how to use it.

## `void Print(string String)`

The `Print` function is used to print a string to the console.

### Parameters

-   `String`: The string to be printed.

### Example

`Print("Hello, World!");` 

----------

## `string GetInput()`

The `GetInput` function is used to read a line of text input from the user.

### Returns

-   A string containing the user's input.

### Example

`string userInput = GetInput();` 

----------

## `string CreateInput(const string& prompt)`

The `CreateInput` function displays a prompt and reads a line of text input from the user.

### Parameters

-   `prompt`: The prompt to display to the user.

### Returns

-   A string containing the user's input.

### Example

`string userInput = CreateInput("Enter your name: ");` 

----------

## `vector<string> ReadFileToList(const string& filepath)`

The `ReadFileToList` function reads the contents of a file line by line and stores them in a vector of strings.

### Parameters

-   `filepath`: The path to the file to be read.

### Returns

-   A vector of strings, where each element represents a line from the file.

### Example

`vector<string> lines = ReadFileToList("myfile.txt");` 

----------

## `string ReadFileToString(const string& filepath)`

The `ReadFileToString` function reads the entire contents of a file and returns them as a single string.

### Parameters

-   `filepath`: The path to the file to be read.

### Returns

-   A string containing the contents of the file.

### Example

`string fileContents = ReadFileToString("myfile.txt");` 

----------

## `template <typename T> void WriteToFile(const string& filename, const T& data)`

The `WriteToFile` function writes data to a file.

### Parameters

-   `filename`: The name of the file to write to.
-   `data`: The data to be written to the file.

### Example

`vector<int> numbers = {1, 2, 3, 4, 5};
WriteToFile("output.txt", numbers);` 

----------

## `string StringListToString(vector<string> stringList)`

The `StringListToString` function concatenates a vector of strings into a single string.

### Parameters

-   `stringList`: A vector of strings to be concatenated.

### Returns

-   A single string containing the concatenated contents of the vector.

### Example

`vector<string> words = {"Hello", "World"};
string result = StringListToString(words);` 

----------

## `float RandomFloat(float min, float max)`

The `RandomFloat` function generates a random floating-point number between `min` and `max`.

### Parameters

-   `min`: The minimum value of the random number.
-   `max`: The maximum value of the random number.

### Returns

-   A random floating-point number.

### Example

`float randomValue = RandomFloat(0.0f, 1.0f);` 

----------

## `int RandomInt(int min, int max)`

The `RandomInt` function generates a random integer between `min` and `max`.

### Parameters

-   `min`: The minimum value of the random number.
-   `max`: The maximum value of the random number.

### Returns

-   A random integer.

### Example

`int randomNumber = RandomInt(1, 100);` 

----------

## `string ToLowerCase(string string)`

The `ToLowerCase` function converts a string to lowercase.

### Parameters

-   `string`: The string to be converted.

### Returns

-   A new string with all characters in lowercase.

### Example

`string text = "Hello World";
string lowercaseText = ToLowerCase(text);` 

----------

## `string ToUpperCase(string string)`

The `ToUpperCase` function converts a string to uppercase.

### Parameters

-   `string`: The string to be converted.

### Returns

-   A new string with all characters in uppercase.

### Example

`string text = "Hello World";
string uppercaseText = ToUpperCase(text);`

----------

## `string ReverseString(string Input)`

The `ReverseString` function returns the Input string but reversed character wise.

### Parameters

-   `Input`: The string to be reversed.

### Returns

-   A new string with all characters reversed.

### Example

`string text = "Hello World";
string reversedString = ReverseString(text);`

----------

## `wstring ToWideString(string Input)`

The `ToWideString` function converts the string into a wide string.

### Parameters

-   `Input`: The string to be converted.

### Returns

-   A new wide string.

### Example

`string text = "Hello World";
wstring WideString = ToWideString(text);`

----------

## `bool IsPrime(int Number)`

The `IsPrime` function checks if a number is a prime.

### Parameters

-   `Number`: The string to be checked.

### Returns

-   True if the number is a prime or false if not.

### Example

`int Number = 1;
bool IsPrime = IsPrime(number);`
