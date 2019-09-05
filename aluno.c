#include "aluno.h"

struct al
{
  char nome[20];
  char cpf[12];
  int num_mat;
  char curso[20];
  char data_ing[10];
};

Al* cria_al()
{
  Al* al = (Al*)malloc(sizeof(Al));
  return al;
}


void set_al(Al* al)
{
  printf("Nome: ");
  scanf("%[^\n]s", al->nome);
  setbuf(stdin, NULL);

  printf("CPF: ");
  scanf("%[^\n]s", al->cpf);
  setbuf(stdin, NULL);

  printf("Numero de Matricula: ");
  scanf("%d", &al->num_mat);
  setbuf(stdin, NULL);

  printf("Curso: ");
  scanf("%[^\n]s", al->curso);
  setbuf(stdin, NULL);

  printf("Data de Ingresso: ");
  scanf("%[^\n]s", al->data_ing);
  setbuf(stdin, NULL);
}
void deletar_al(Al *al)
{
  free(al);
}

void printer_al(Al *al)
{
  printf("\t\tnome: %s\n", al->nome);
  printf("CPF: %s\nNumero de Matricula: %d\nCurso: %s\nData de Ingresso: %s", al->cpf, al->num_mat, al->curso, al->data_ing);
}
