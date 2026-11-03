#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "scanner.h"
#include "parser.h"

int main() {
  init_scanner("example.asm");
  scan_tokens();
  parse_lines();
  print_binary();
  return 0;
}

