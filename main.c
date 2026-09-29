#include "stdio.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "RegisterABI.h"
#include "InstructionSets.h" // Only the RiscVIMAC at the moment.

int main( int argc, char *argv[] ) {

    uint8_t *vm_memory = malloc(4 * sizeof(uint8_t));

    // CLI
    if ( argc >= 2 ) {
        //printf("arg: %s\n", argv[1]); // DEBUG ONLY

        if (
            (strcmp(argv[1], "--help") == 0)
            || (strcmp(argv[1], "-help") == 0)
            || (strcmp(argv[1], "--h") == 0)
            || (strcmp(argv[1], "-h") == 0)
        ) {
            printf("Help page TODO!\n"); // TODO:

        } else if ((strcmp(argv[1], "malloc")) == 0) {

            if (argc != 3) {
                printf("You must state after alloc, the amount of bytes.");
            } else {
                free(vm_memory);
                int bytes = atoi(argv[2]);
                vm_memory = malloc( bytes * sizeof(uint8_t));
                printf("Allocated: %d bytes of memory.\n", bytes);
            }

        } else {
            printf("rvch argument not found, refer to --help for arguments.\n");
        }

    } else {
        printf("rvch requires arguments, --help for arguments.\n");
    }



    // Clean up
    printf("Virtual Machine Process Ended.\n");
    free(vm_memory);
    return 0;
}
