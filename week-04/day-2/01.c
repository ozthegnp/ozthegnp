#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main() {
    struct Computer computer = {3.2, 8, 32};
    computer.bits = 64;

    printf("Speed: %.1fGHz\nRAM: %dGB\nBits: %d\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    return 0;
}
