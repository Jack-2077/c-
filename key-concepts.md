1. Passing the string by reference:

- Efficiency: When you pass a string by reference, you avoid making a copy of the entire string

- Avoid Modification: By using const std::string&, you indicate that the parameter will not be modified
 
 2. Generating CMake and Make builds on windows

- cmake -G "MinGW Makefiles" <src> && make

 2. Generating CMake and Make builds on linux (ubuntu)
 
 - cmake -DCMAKE_PREFIX_PATH="pkg_src" "src"

3. Classes

- functions that can be defaulted : Default ctor, Copy ctor, Move ctor, Copy assnmt optr, Move assnmt optr, Destructor

- libraries can be imported into h file, for eg: <string> for using std::string

- when using initializer lists, {} or () can be used and the format is ```className :: className(_x, _y): x(_x), y(_y){}```

- when implementing functions, format is ```RETURN_TYPE className :: fnName(_params){}```
