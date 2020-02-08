#include <stdio.h>

int main() {
#ifdef __APPLE__
    const char *host_os = "macOS";
#elif __LINUX__
    const char *host_os = "Linux";
#elif _WIN32
    const char *host_os = "Windows";
#endif
    printf("Hello, %s!\n", host_os);
    return 0;
}
