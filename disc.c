#include "disc.h"

struct ds
{
  char nome[20];
  int carga_h;
  char curso[20];
  int sala;
  int cod;
};

Ds* cria_ds()
{
  Ds* ds = (Ds*)malloc(sizeof(Ds));
  return ds;
}


void set_ds(Ds* ds)
{
  printf("Nome de Discplina: ");
  scanf("%[^\n]s", ds->nome);
  setbuf(stdin, NULL);

  printf("Carga horaria: ");
  scanf("%d", &ds->carga_h);
  setbuf(stdin, NULL);

  printf("Curso: ");
  scanf("%[^\n]s", ds->curso);
  setbuf(stdin, NULL);

  printf("Sala: ");
  scanf("%d", &ds->sala);
  setbuf(stdin, NULL);

  printf("codigo: ");
  scanf("%d", &ds->cod);
  setbuf(stdin, NULL);
}
void deletar_ds(Ds *ds)
{
  free(ds);
}

void printer_ds(Ds *ds)
{
  printf("\t\tDiscplina: %s\n", ds->nome);
  printf("Carga horaria: %d\nSala: %d\nCodigo: %d\n", ds->carga_h, ds->sala, ds->cod);
}
