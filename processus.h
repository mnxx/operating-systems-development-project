#ifndef PROCESSUS_H_
#define PROCESSUS_H_

#include <cpu.h>
#include <stdbool.h>
#include "stdio.h"
#include <inttypes.h>
#include "affichage.h"
#include "segment.h"

typedef enum {ELU, ACTIVABLE} etat;

typedef struct t_proc {
    //signed since error is -1
    int32_t pid;
    uint8_t nom[10];
    etat mon_etat;
    uint32_t regs[5];
    uint32_t pile{512];
} t_proc;

t_proc procs[2];

// default process, you may idle here
void idle(void);

// a process we implement
void proc1(void);



#endif
