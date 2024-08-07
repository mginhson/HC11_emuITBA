#include "../cpu.h"
#include <stdio.h>
#include <stdint.h>
#include "../private_headers/cpu_definitions.h"


/*
    cpuMemoryRequirements
    RECEIVES: The cpu's id decided to create
    RETURNS: How many bytes should be allocated to create it
*/
uint32_t cpuMemoryRequirements(cpu_id_t _id)
{
    
}

/*
    createCpu
    RECEIVES: The cpu's id decided to create and the memory allocated for it
    RETURNS: (cpu_returnable_t)success if succesful
*/
cpu_returnable_t createCpu(void * _mem, cpu_id_t _id)
{
    
}
