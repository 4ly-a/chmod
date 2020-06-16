//# chmod
//chmod for permission to /opt/lampp/htdocs/(The folder of your choice);

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int x = -1;
void chmod(){
      char buffer[512];
      char name[30];
      while (x!=0)
      {
      system("clear");
      printf("\t\nDigite o nome do diretório que você deseja conceder a permissão\n| ");
      scanf("%s", name);
      const char*texto[] = {"cd /opt/lampp/htdocs/","sudo chmod 777 -R",name};
      snprintf(buffer,sizeof(buffer),"%s %s %s",texto[0],texto[1],texto[2]);
      system(buffer);

      printf("\n\n\t0 - Sair\n| ");
      scanf("%d", &x);
      }      
}

int main(){
      setlocale(LC_ALL,"Portuguese");
      int y = -1;
      while (y!=0)
      {
      system("clear");
      printf("\n\t\t\tWellcome\n\t1 - exit    2 - chmod.exe\n | ");
      scanf("%d", &y);
            if (y == 1){
                  chmod();
            }else if(y == 2)
            {
                  return 0;
            } 
      }
}

