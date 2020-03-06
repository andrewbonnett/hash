#ifndef HASH_H
#define HASH_H

#include <iostream>
#include <list>

using namespace std;

class Hash {

private:
    int BUCKET;    // No. of buckets 
  
    // Pointer to an array containing buckets 
    list<int> *table;
    int numItems;
public:
	Hash(int V);  // Constructor 
	
	~Hash(); //Deconstructor
	
	// returns the number of items in the set
    int size(); 

    // returns true if the integer "data" is in the set and false otherwise
    bool find(int data);
    
    // inserts a key into hash table 
    bool insert(int data); 
  
    // deletes a key from hash table 
    bool erase(int data);
  
    void displayHash();
    
    // hash function to map values to key 
    int hashFunction(int x);

};
#endif