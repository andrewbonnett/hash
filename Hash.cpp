#include <iostream>
#include "Hash.h"

Hash::Hash(int b) 
{ 
    this->BUCKET = b; 
    table = new list<int>[BUCKET];
    numItems = 0;
}

Hash::~Hash() {
  delete []table;
}

int Hash::size() {
    return numItems;
}

bool Hash::find(int data) {
    // get the hash index of key 
  int index = hashFunction(data); 
  
  // find the key in (inex)th list 
  list <int> :: iterator i; 
  for (i = table[index].begin(); i != table[index].end(); i++) { 
    if (*i == data) 
      break; 
  } 
  
  // if key is found in hash table, return true
  if (i != table[index].end() )
    return true;
  else
    return false;
}

bool Hash::insert(int data) 
{ 
    if (this->find(data))
        return false;
    int index = hashFunction(data);
    table[index].push_back(data);
    numItems++;
    return true;
}
  
bool Hash::erase(int data) 
{ 
  // get the hash index of key 
  int index = hashFunction(data); 
  
  // find the key in (inex)th list 
  list <int> :: iterator i; 
  for (i = table[index].begin(); i != table[index].end(); i++) { 
    if (*i == data) 
      break; 
  } 
  
  // if key is found in hash table, remove it 
  if (i != table[index].end()) { 
    table[index].erase(i);
    numItems--;
    return true;
  }
  else return false;
} 
  
// function to display hash table 
void Hash::displayHash() { 
  for (int i = 0; i < BUCKET; i++) { 
    cout << i; 
    for (auto x : table[i]) 
      cout << " --> " << x; 
    cout << endl; 
  } 
}

int Hash::hashFunction(int x) { 
    return (x % BUCKET); 
} 
  