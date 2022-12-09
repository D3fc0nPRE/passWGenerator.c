 //simple PasswordGENERATOR IN 'C' lang

  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
    int main()
  {
  int k_brought,i;
  char lower_case[]="abcdefghijklmnopqrstuvwxyz";
  char *pass;
  srand(time(NULL));
     printf("Enter the length of your password:");
     scanf("%d", &k_brought);
     pass = malloc(k_brought+1);
   for(i=0;i<k_brought;i++) {
   pass[i] = lower_case[rand() % (sizeof(lower_case) - 1)];
   }
   pass[i]='\0';
   puts(pass);
   free(pass);
     return 0;
   }
