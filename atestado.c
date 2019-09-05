#include "atestado.h"
#include "aluno.h"
#include "disc.h"

struct at
{
  Al* al;
  Ds** ds;
  int index;
};

At* cria_at()
{
  At* at = (At*)malloc(sizeof(At));
  at->ds = (Ds**)malloc(sizeof(Ds*));
  at->al = cria_al();
  set_al(at->al);
  at->index = 0;
  return at;
}
void set_at(At* at)
{
  at->al = cria_al();
  set_al(at->al);
}

void deletar_at(At* at)
{
  deletar_al(at->al);
  for(int i=0; i<at->index;i++)
  {
    deletar_ds(at->ds[i]);
  }
}


void printer_at(At* at)
{
  system("cls");
  printer_al(at->al);
  printf("\n");
  for(int i=0; i<at->index;i++)
  {
    printer_ds(at->ds[i]);
    printf("\n");
  }
}

void set_ds1(At* at)
{
  at->ds[at->index] = cria_ds();
  set_ds(at->ds[at->index]);
  at->index++;
}
