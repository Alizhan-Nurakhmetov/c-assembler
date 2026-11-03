#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "scanner.h"

int main() {
  init_scanner("example.asm");
  scan_tokens();

  for (int i=0; true; i++) {
    if (tokens[i].type == TOKEN_MOV)
      printf("mov\n");
    if (tokens[i].type == TOKEN_REGISTER)
      printf("register %d\n", tokens[i].value);
    if (tokens[i].type == TOKEN_COMMA)
      printf("comma\n");
    if (tokens[i].type == TOKEN_INTEGER)
      printf("integer %d\n", tokens[i].value);
    if (tokens[i].type == TOKEN_EOF)
      return 0;
  }

  return 0;
}

