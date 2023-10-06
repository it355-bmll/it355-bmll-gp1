# GROUP PROJECT 1
---
#### Setting up Build ENV


##### Windows
On Windows recommendation is to Install [Chocolaty](https://community.chocolatey.org)

Guide to install is @ https://chocolatey.org/install

After it is installed GCC can be installed simply using the following command
- ```choco install mingw```

##### Linux
G++ should be installed by default and if not can be aquired from your package provider



#### Building

Building a C++ program is using 
```(gcc|g++) -o (ExecutableName) (path to .cpp files)```

You can inelgantly just comiple the dir using the following
``` g++ -o executable *.cpp```

There is also a make file in the general directory that will compile all files under the src file in the current folder when the make command is run i.e.
```make```

---
#### Rule Allocation


##### Bill
- [ ] 2- EXP53-CPP. Do not read uninitialized memory
- [ ] 2- EXP60-CPP. Do not pass a nonstandard-layout type object across execution boundaries
- [ ] 4- CTR52-CPP. Guarantee that library functions do not overflow
- [ ] 4- CTR55-CPP. Do not use an additive operator on an iterator if the result would overflow
- [ ] 4- CTR50-CPP. Guarantee that container indices and iterators are within the valid range
- [ ] 4- CTR51-CPP. Use valid references, pointers, and iterators to reference elements of a container
- [ ] 4- CTR53-CPP. Use valid iterator ranges
- [ ] 4- CTR54-CPP. Do not subtract iterators that do not refer to the same container
- [ ] 4- CTR56-CPP. Do not use pointer arithmetic on polymorphic objects


##### Megan
- [ ] 5- STR50-CPP. Guarantee that storage for strings has sufficient space for character data and the null terminator
- [ ] 5- STR51-CPP. Do not attempt to create a std::string from a null pointer
- [ ] 8- ERR54-CPP. Catch handlers should order their parameter types from most derived to least derived
- [ ] 8- ERR59-CPP. Do not throw an exception across execution boundaries
- [ ] 8- ERR56-CPP. Guarantee exception safety
- [ ] 8- ERR58-CPP. Handle all exceptions thrown before main() begins executing
- [ ] 7- FIO50-CPP. Do not alternately input and output from a file stream without an intervening positioning call
- [ ] 5- STR52-CPP. Use valid references, pointers, and iterators to reference elements of a basic_string
- [ ] 5- STR53-CPP. Range check element access



##### Levi
- [ ] 6- MEM52-CPP. Detect and handle memory allocation errors
- [ ] 6- MEM53-CPP. Explicitly construct and destruct objects when manually managing object lifetime
- [ ] 6- MEM54-CPP. Provide placement new with properly aligned pointers to sufficient storage capacity
- [ ] 6- MEM55-CPP. Honor replacement dynamic storage management requirements
- [ ] 6- MEM56-CPP. Do not store an already-owned pointer value in an unrelated smart pointer
- [ ] 8- ERR55-CPP. Honor exception specifications
- [ ] 1- DCL57-CPP. Do not let exceptions escape from destructors or deallocation functions
- [ ] 1- DCL58-CPP. Do not modify the standard namespaces
- [ ] 2- EXP50-CPP. Do not depend on the order of evaluation for side effects



##### Lo
- [ ] 1- DCL50-CPP. Do not define a C-style variadic function
- [ ] 6- MEM50-CPP. Do not access freed memory
- [ ] 6- MEM51-CPP. Properly deallocate dynamically allocated resources
- [ ] 49- MSC51-CPP. Ensure your random number generator is properly seeded
- [ ] 2- EXP55-CPP. Do not access a cv-qualified object through a cv-unqualified type
- [ ] 9- OOP52-CPP. Do not delete a polymorphic object without a virtual destructor
- [ ] 9- OOP58-CPP. Copy operations must not mutate the source object
- [ ] 6- MEM57-CPP. Avoid using default operator new for over-aligned types
2- EXP54-CPP. Do not access an object outside of its lifetime


#### Recomendations


##### Bill
- [ ] .
- [ ] .
- [ ] .
- [ ] .

##### Megan
- [ ] .
- [ ] .
- [ ] .
- [ ] .

##### Levi
- [ ] .
- [ ] .
- [ ] .
- [ ] .

##### Lo
- [ ] .
- [ ] .
- [ ] .
- [ ] .



#### Rules in Combined Example
