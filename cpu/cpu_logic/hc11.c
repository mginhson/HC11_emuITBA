#include "../private_headers/cpu_definitions.h"
#include "../cpu.h"

typedef struct
{
    uint64_t pc;
    uint8_t reg;
    uint8_t mem[64];
} hc11_t;


static hc11_t * self;

void hc11_init(void * _self)
{
    self = (hc11_t *) _self; //Hooked
    self->pc = 0x0000;
    
}
void hc11_work(void * _self, command_t _command)
{
    
    
   switch(_command.id)
   {
        case no_command:
        {
            
        }break;

        case next_instruction:
        {

        }break;
        default: break;
   }
}

//Aca va implementada cada funcion especifica
