#ifndef CPU_H
#define CPU_H

#include <stdint.h>


typedef enum{
    cpu_success = 0,
    cpu_error,
}cpu_returnable_t;


typedef enum {
    hc11_id,
    cpu_id_count,
}cpu_id_t;

struct duple{uint64_t generic,specific;};



struct duple cpuMemoryRequirements(cpu_id_t _id);
cpu_returnable_t createCpu(void * _generic_space,void * _specific_space, cpu_id_t _id);
#endif