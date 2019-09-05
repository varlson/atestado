#ifndef ATESTADO_H
#define ATESTADO_H

typedef struct at At;

At* cria_at();
void set_at(At* at);
void deletar_at(At* at);
void printer_at(At* at);

void set_ds1(At* at);
#endif
