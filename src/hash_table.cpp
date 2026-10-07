#include <hash_table.h>




long long HashTable::hashFunction(int key) {
    key ^= key >> 16;
    key *= 0x45d9f3b;
    key ^= key >> 16;
    key *= 0x45d9f3b;
    key ^= key >> 16;

    return key;
}

int HashTable::getIndex(long long hashValue) {
    return hashValue % SIZE;
}

void HashTable::insertEntry(int key,int value){

    long long hashValue = hashFunction(key);
    int index = getIndex(hashValue);

    table[index].key = key;
    table[index].value = value;
}

int HashTable::findValue(int key){

    long long hashValue = hashFunction(key);
    int index = getIndex(hashValue);

    if(table[index].key != key){
        return -1;
    }

    return table[index].value;

}


void HashTable::deleteEntry(int key){

    long long hashValue = hashFunction(key);
    int index = getIndex(hashValue);

    if(table[index].key == key){
        table[index].key = -1;
        table[index].value = 0;
    }
}
