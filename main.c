#include "atestado.h"
#include <stdio.h>
#include "aluno.h"
#include "disc.h"

int main(int argc, char const *argv[]) {

  int opx;
  At* new = cria_at();

  do
  {
    system("cls");

      printf("1 - Criar Alno\n2 - Adicionar Disciplina\n3 - Ver Aluno\n4 - Deletar e Sair\n\n");
      scanf("%d", &opx);
      setbuf(stdin, NULL);

      switch(opx)
      {
        case 1:
        //cria_at();
        break;

        case 2:
        set_ds1(new);
        break;

        case 3:
        printer_at(new);
        break;

        case 4:
        deletar_at(new);

        break;

        default:
        printf("Invalid Option\n\n");
        break;
      }

      printf("\nsair s/n ?\n\n");
  }while(getchar() != 's');


  return 0;
}
