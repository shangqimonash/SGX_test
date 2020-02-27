#include "EnclaveUtil.h"
void ecall_test(void *test, size_t test_size) {

    uint8_t *a = (uint8_t*) test;
    free(test);
}