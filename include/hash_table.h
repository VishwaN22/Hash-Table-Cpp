#include <entry.h>

class HashTable {

    private:

        //the size of the hash table,PRIME  
        static constexpr int SIZE = 67;

        //table array of type entry
        Entry table[SIZE];

        //hash function to map values to key
        long long hashFunction(int key);

        //function to get index of the key in the table
        int getIndex(long long hashValue);

    public:

        //insert new entry into the table
        void insertEntry(int key, int value);

        //find the value of key from table
        int findValue(int key);

        //delete the entry from the table
        void deleteEntry(int key);


};