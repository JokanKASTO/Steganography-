//stego.h contains declarations of constants, structs, functions, etc., common to both programs

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Function to parse header, checks and returns 1 if header begins with "P6\0" and returns 0 if otherwise
int parse_header(FILE *);

// Function to read the original file, and write the hidden byte onto the output file
void write_hidden_byte(FILE *, FILE *, char);