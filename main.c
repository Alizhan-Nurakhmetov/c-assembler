#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "scanner.h"
#include "parser.h"

int main(int argc, char *argv[]) {
  char *file_name = "example.asm";

  for (int i = 1; i < argc; i++) {
    if ((strcmp(argv[i], "-f") == 0 || strcmp(argv[i], "--file") == 0) && i + 1 < argc) {
      file_name = argv[i + 1];
      i++;
    } else {
      printf("Unknown flag '%s'. Use: ./main -f yourfile.asm\n", argv[i]);
      return 1;
    }
  }

  init_scanner(file_name);
  scan_tokens();
  parse_lines();
  print_binary();
  return 0;
}
