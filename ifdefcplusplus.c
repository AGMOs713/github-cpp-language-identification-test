#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
#ifdef __cplusplus
    printf("This was compiled as C++\n");
#endif // #ifdef __cplusplus
    return 0;
}
