#include "cpu/cpu.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    void *ptrg,*ptrs;
    struct duple space;
    space = cpuMemoryRequirements(hc11_id);
    ptrg = malloc(space.generic);
    ptrs = malloc(space.specific);
    createCpu(ptrs,ptrg,hc11_id);
    return 0;
}