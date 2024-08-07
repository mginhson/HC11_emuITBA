#ifndef CPU_H
#define CPU_H

#include <stdint.h>


typedef enum{
    success = 0,
    
}cpu_returnable_t;


typedef enum {
    hc11,
    available_cpus_count,
}cpu_id_t;


typedef int32_t (*instruction_t)(void);


uint32_t cpuMemoryRequirements(cpu_id_t _id);
cpu_returnable_t createCpu(void * _mem, cpu_id_t id);
#endif