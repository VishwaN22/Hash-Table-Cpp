#include <iostream>
#include <hash_table.h>

int main() {

    HashTable table;

    std::cout << "=== BASIC INSERT / FIND ===\n";

    table.insertEntry(10, 100);
    table.insertEntry(20, 200);
    table.insertEntry(30, 300);

    std::cout << "10 -> " << table.findValue(10) << '\n';
    std::cout << "20 -> " << table.findValue(20) << '\n';
    std::cout << "30 -> " << table.findValue(30) << '\n';

    std::cout << "\n=== FIND MISSING KEY ===\n";

    std::cout << "99 -> " << table.findValue(99) << '\n';

    std::cout << "\n=== DELETE ===\n";

    table.deleteEntry(20);

    std::cout << "20 -> " << table.findValue(20) << '\n';

    std::cout<< "\n=== INSERT COLISION PAIR 12,27 ===\n";

    table.insertEntry(12, 1200);
    table.insertEntry(27, 2700);

    std::cout << table.findValue(12) << '\n';
    std::cout << table.findValue(27) << '\n';

    return 0;
}