#include <stdio.h>
#include <stdlib.h>

#ifndef ALUNO_H
#define ALUNO_H

typedef struct al Al;

Al* cria_al();
void set_al(Al* al);
void deletar_al(Al *al);
void printer_al(Al *al);
#endif
