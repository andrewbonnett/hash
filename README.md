# hash
CS 235 (Data Structures) lab to practice implementing a hash table.

## Description
Creates a C++ class that implements a set container using a hash table that uses chaining to resolve "collisions."  This set only stores integers.  This class has the following functions:
```
// returns the number of items in the set
int size(); 

// returns true if the integer "data" is in the set and false otherwise
bool find(int data); 

// inserts the integer "data" into the set if that integer is not already in the set
// if the integer "data" is already in the set, the integer should not be inserted
// return true if the function adds the integer to the set, and false otherwise
bool insert(int data); 

// erases the integer "data" from the set if it is in the set
// return true if the function removes the integer from the set, and false otherwise
bool erase(int data);
```
