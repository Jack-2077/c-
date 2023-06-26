1.Passing the string by reference:

- Efficiency: When you pass a string by reference, you avoid making a copy of the entire string

- Avoid Modification: By using const std::string&, you indicate that the parameter will not be modified
 
 2.Generating CMake and Make builds on windows

- cmake -G "MinGW Makefiles" <src> && make

 2.Generating CMake and Make builds on linux (ubuntu)
 
 - cmake -DCMAKE_PREFIX_PATH="pkg_src" "src"