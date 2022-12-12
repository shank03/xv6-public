#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
    int pid, pr;
    if (argc < 3) {
        printf(2, "Usage: nice <pid> <pr>\n");
        exit();
    }
    pid = atoi(argv[1]);
    pr  = atoi(argv[2]);
    if (pr < 0 || pr > 20) {
        printf(2, "Invalid priority (0-20)\n");
        exit();
    }
    chpr(pid, pr);
    exit();
}
