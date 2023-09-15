#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char** argv) {
    uint64 val;

    for (int i = 2; i < 12; i++) {
        uint64 res = dump2(getpid(), i, &val);
        if (res > 0) {
            printf("dump2: failed to get s%d: %d", res);
        }
        printf("S%d: %d, %d\n", i, val, res);
    }

    exit(0);
}