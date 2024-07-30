#include <iostream>

extern int x ;

int main() {

    std::cout << x;
    return 0;
}

/*Linker error linker tries to LinkerError.o and iostream to make a linkererror.exe but cant find where to find x because
 * its written as external.
 */
