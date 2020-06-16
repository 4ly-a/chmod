/* Ignore

void start_xampp(){
      char name[30];
      system("clear");
      while (x!=0)
      {            
      printf("\t\n\t\tVocê quer parar ou iniciar o sever ? (p/s)\n| ");
      scanf("%s", name);
            if (*name == 's')
            {
                  system("sudo /opt/lampp/lampp start");
                  printf("\n\t0 - Sair\n| ");
                  scanf("%d", &x);
            }else 
      
            if(*name == 'p')
            {
                  system("sudo /opt/lampp/lampp stop");
                  printf("\n\t0 - Sair\n| ");
                  scanf("%d", &x);
            }
      }
}

*/
