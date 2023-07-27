#include <stdint.h>

// #define BLOCKSIZE 262144

#define BLOCKSIZE 4194304

struct sdrbuf
{
    uint32_t serial_no;
    uint32_t cfreq;
    uint32_t srate;
    uint32_t tv_sec;
    uint32_t tv_nsec;
    uint32_t bufsize;
    uint8_t  buffer[BLOCKSIZE];
    // uint8_t  *buffer;

};