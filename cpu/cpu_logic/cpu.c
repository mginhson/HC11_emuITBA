#include "../cpu.h"
#include <stdio.h>
#include <stdint.h>
#include "../private_headers/cpu_definitions.h"






/** 
    @brief 
    RECEIVES: The cpu's id decided to create
    RETURNS: How many bytes should be allocated to create it, returns 0 on error
*/

/**
 * @brief 
 * returns memory amount to contain the cpu
 */
struct duple cpuMemoryRequirements(cpu_id_t _id)
{   
   return (struct duple){10,102};
   
}



/** 
    @brief
    RECEIVES: The cpu's id decided to create and the memory allocated for it
    RETURNS: (cpu_returnable_t)success if succesful
*/
cpu_returnable_t createCpu(void * _generic_space,void * _specific_space, cpu_id_t _id)
{
    cpu_t * cpu = (cpu_t *)_generic_space;
    if ((_generic_space == NULL) || (_specific_space == NULL) || (_id >= cpu_id_count))
        return cpu_error;
    cpu->instance = _specific_space;
    switch(_id)
    {
        case hc11_id:
        {
            cpu->init = &hc11_init;
            cpu->work = &hc11_work; //Hook to specific HC11
            cpu->self = (void*)cpu->instance;
            
        }break;
    }


    cpu->init(cpu->self);
}


