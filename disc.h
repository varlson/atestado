#include <stdio.h>
#include <stdlib.h>

#ifndef DISC_H
#define DISC_H

typedef struct ds Ds;

Ds* cria_ds();
void set_ds(Ds* ds);
void deletar_ds(Ds *ds);
void printer_ds(Ds *ds);

#endif
