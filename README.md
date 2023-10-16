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
- [x] 2- EXP53-CPP. Do not read uninitialized memory
- [x] 2- EXP60-CPP. Do not pass a nonstandard-layout type object across execution boundaries
- [x] 4- CTR52-CPP. Guarantee that library functions do not overflow
- [x] 4- CTR55-CPP. Do not use an additive operator on an iterator if the result would overflow
- [x] 4- CTR50-CPP. Guarantee that container indices and iterators are within the valid range
- [x] 4- CTR51-CPP. Use valid references, pointers, and iterators to reference elements of a container
- [x] 4- CTR53-CPP. Use valid iterator ranges
- [x] 4- CTR54-CPP. Do not subtract iterators that do not refer to the same container
- [x] 4- CTR56-CPP. Do not use pointer arithmetic on polymorphic objects


##### Megan
- [x] 5- STR50-CPP. Guarantee that storage for strings has sufficient space for character data and the null terminator
- [x] 5- STR51-CPP. Do not attempt to create a std::string from a null pointer
- [x] 8- ERR54-CPP. Catch handlers should order their parameter types from most derived to least derived
- [x] 8- ERR59-CPP. Do not throw an exception across execution boundaries
- [x] 8- ERR56-CPP. Guarantee exception safety
- [x] 8- ERR58-CPP. Handle all exceptions thrown before main() begins executing
- [x] 7- FIO50-CPP. Do not alternately input and output from a file stream without an intervening positioning call
- [x] 5- STR52-CPP. Use valid references, pointers, and iterators to reference elements of a basic_string
- [x] 5- STR53-CPP. Range check element access



##### Levi
- [x] 6- MEM52-CPP. Detect and handle memory allocation errors
- [x] 6- MEM53-CPP. Explicitly construct and destruct objects when manually managing object lifetime
- [x] 6- MEM54-CPP. Provide placement new with properly aligned pointers to sufficient storage capacity
- [x] 6- MEM55-CPP. Honor replacement dynamic storage management requirements
- [x] 6- MEM56-CPP. Do not store an already-owned pointer value in an unrelated smart pointer
- [x] 8- ERR55-CPP. Honor exception specifications
- [x] 1- DCL57-CPP. Do not let exceptions escape from destructors or deallocation functions
- [x] 1- DCL58-CPP. Do not modify the standard namespaces
- [x] 2- EXP50-CPP. Do not depend on the order of evaluation for side effects



##### Lo
- [x] 1- DCL50-CPP. Do not define a C-style variadic function
- [x] 6- MEM50-CPP. Do not access freed memory
- [x] 6- MEM51-CPP. Properly deallocate dynamically allocated resources
- [x] 49- MSC51-CPP. Ensure your random number generator is properly seeded
- [x] 2- EXP55-CPP. Do not access a cv-qualified object through a cv-unqualified type
- [x] 9- OOP52-CPP. Do not delete a polymorphic object without a virtual destructor
- [x] 9- OOP58-CPP. Copy operations must not mutate the source object
- [x] 6- MEM57-CPP. Avoid using default operator new for over-aligned types
- [x] 2- EXP54-CPP. Do not access an object outside of its lifetime


#### Recomendations


##### Bill
- [x] DCL00-C - Constant Values are immutable
- [x] DCL04-C - Only one variable declared
- [x] DCL07-C - Type Info In function Decloration
- [x] EXP19-C - Braces on Loop Body

##### Megan
- [x] ERR00-C Adopt Consistent Err Handling Strat
- [x] ERR01-C Use ferror rather then errno to check for FILE errors
- [x] ERR04-C Choose Appropriate Termination Strat
- [x] ERR06-C Understand termination Behavior of assert and abort

##### Levi
- [x] API00-C Functions Should validate parameters
- [x] API07-C Enforce Type Safety
- [x] EXP09-C Use size of to determine the size of a type or varaible
- [x] EXP12-C Do not ignore values return by functions

##### Lo
- [x] MEM01-C - Store a new value in pointers immediately after free
- [x] MEM03-C - Clear sensitive info in reusable resources
- [x] MEM06-C - Ensure Sensitive data is not written out to disk
- [x] MEM11-C - limiting the size of the amount of memory the data array



#### Rules in Combined Example
1. MEM57
2. DCL57
3. DCL58
4. ERR58
5. ERR56
6. STR50
7. STR51
8. EXP55
9. CTR53
10. CTR54
11. CTR55
12. CTR50
13. CTR51
14. CTR56
15. OOP52
16. MEM51
17. MEM50
18. MEM56
19. STR53
20. ESP50
21. MSC51
22. EXP54
23. MEM53
24. ERR55
25. MEM52
26. EXP53
27. ERR59
28. EXP60

#### Recommendations
1. ERR04
2. EXP19
3. DCL00
4. DCL07
5. MEM01