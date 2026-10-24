#include "Header.h"

#include <assert.h>     //for testing

int main(){

    assert(addition(10 , 11) == 11);

    assert(addition(-10 , 20) == 10);

    assert(addition(-10 , -20) == -30);

    return EXIT_SUCCESS;
}