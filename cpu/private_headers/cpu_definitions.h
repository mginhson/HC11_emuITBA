#ifndef CPU_DEFINITIONS_H
#define CPU_DEFINITIONS_H

#include "../cpu.h"
/**
 * Un CPU tiene una struct especifica a su arquitectura,
 * esta corresponde al void * instance. La cosa es que cada
 * estructura cpu_t tiene un puntero a una funcion "oculta" work
 * la cual DEPENDE DE LA ARQUITECTURA. Solo esa funcion va a saber 
 * como interpretar el void* de instance.  
 */

typedef enum{
    no_command,
    next_instruction,
}command_id_t;

typedef struct
{
    command_id_t id;
    uint32_t arg;
}
command_t;

typedef struct{
    void * self;
    void (*work)(void * _self,command_t _command);
    void (*init)(void * _self);
    void * instance;
}cpu_t;

/**
 *  EACH ARCHITECTURE HAS BOTH A STRUCT AND A WORK FUNCTION!!
 */

typedef struct{
    uint8_t  reg;
    uint8_t memory[64];
}hc11_architecture;

void hc11_work(void* _self,command_t _command);
void hc11_init(void* _self);
#endif
