1.Passing the string by reference:

- Efficiency: When you pass a string by reference, you avoid making a copy of the entire string

- Avoid Modification: By using const std::string&, you indicate that the parameter will not be modified
 
 2.Generating CMake and Make builds

- cmake -G "MinGW Makefiles" <src> && make
