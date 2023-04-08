#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 64
#define PASSWORD "AAA"

int passwordCheck(char *password) {
  char input[BUFFER_SIZE];

  while(1) {
    printf("Please enter password: ");
    fgets(input, 32, stdin);
    input[strcspn(input, "\n")] = '\0';

    if(strcmp(password, input) != 0) {
      printf("Password incorrect!\n");
    } else {
      printf("Correct password!\n");
      return 0;
    }
  }
  return 1;
}

int main(int argc, char **argv) {
  //char b[16];
  char a[64] = "Welcome to our stuff Idk im bored as fuck";
  //scanf("%s", &b); <-- Unsafe!!
  
  if(passwordCheck(PASSWORD) != 0) {
    printf("Password check returned unexpected value. Stopping program.\n");
    return 1;
  }

  printf("%s\n", a);
  return 0;
}
