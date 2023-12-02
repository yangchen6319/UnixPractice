#include "iostream"
#include "gnu/libc-version.h"
#include "unistd.h"
#include "errno.h"

const char* version = gnu_get_libc_version();

int main(){
    errno = 0;
    char buffer[1024];
    ssize_t bytesRead;
    bytesRead = read(STDIN_FILENO, buffer, sizeof(buffer));
    if (bytesRead >= 0){
        printf("Read %d bytes: %.*s\n", (int)bytesRead, buffer);
    }else{
        perror("read error");
    }
    printf("hello!");
    std::cout << version << std::endl;
    
    return 0;
}