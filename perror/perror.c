/**
 * perror. c
 * 
 * The function perror() is used to print the last error message on the
 * standard error / console.
 *
 * The error messages can be the result of failure to execute the system call.
 *
 * perror generates the message corresponding to the current value of errno.
 *
 * Below is the example usage of the perror.
 *  Program is trying to simulate the memory allocation issue by passing
 *  -1 as argument. When the malloc call gets executed it results in error
 *  and perror prints the appropriate reason for not allocating the memory.
 *
 */   


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *arr;

  // Allocating memory
  arr = malloc(-1);
  if (arr == NULL) 
  {
    perror("Error allocating memory");
    return -1;
  }

  printf("Memory allocated successfully\n");
}

