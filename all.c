#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int main(void) {
    printf("Hello, World!\n");
#ifdef __cplusplus
    printf("This was compiled as C++\n");
#endif
    return 0;
}

#ifdef __cplusplus
} // extern "C"
#endif
