# RSZParser
The DLL used to parse the rsz data of DMC5 by reading the data from the JSON type dumps

For the full 010 template check: https://github.com/alphazolam/RE_RSZ

## Compile instructions
- Currently only compiles on linux, but can be enabled for windows with a WINDOWS #define flag
- Setup with VS Code CMake extension
- There's no help for manual cli compilation instructions because I have no idea how any of this works
- Compiles OK with gcc (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0
- No idea if other compilers work. No idea how c++ works. It works on my machine.

To use, copy `build/libRSZParser.so` to the RE_RSZ.bt dir as `RSZParser.so`

Edit the `#link` command there to just `#link RSZParser` which should then load either .dll or .so depending on platform
