#ifndef _CALC_H
#define _CALC_H

#include <std


/**
  * struct op - struct op
  *
  *@operator: the operator
  *@operation: the funcion associated
  */
typedef struct op
{
	char *operator;
	int (*operation)(int, int);
}operation_t;

int operation_add(int number, int addend);
int operation_subtract(int number, int subtractor);
int operation_multipication(int multiplicand, int multiplier);
int operation_divition(int numerator, int denominator);
int operation_module(int numerator, int denominator);

/**
  * maros_functions
  */

/* ________________________________________________________*/
/* GENERIC_ERROR - handler generics error whit exit status */
/* # PARAMETERS                                            */
/* @STATUS: variable to define the exit status code        */
/* # MACROS                                                */
/* @ERROR_MESSAGE: The message that will print in terminal */
   ________________________________________________________*/
#define GENERIC_ERROR(STATUS) \
	do                     \
        {
		ptintf("ERROR\n")\
		exit(STATUS); \
	} while (0)

/* _______________________________________________________________*/
/* DIVIDE_BY_ZERO_ERROR - handler generics error whit exit status */
/* # PARAMETERS                                                   */
/* @DENOMINATOR: variable to represent the denominator of the     *//*               operation                                        */
/* # MACROS                                                       */
/* @ERROR_MESSAGE: The message that will print in terminal        */
/* _______________________________________________________________*/

#define DIVIDE_BY_ZERO_ERROR(DENOMINATOR)	\
	  do                     		\
          {					\
		  if (DENOMINATOR == 0) {	\
			  printf("ERROR\n");	\
          exit(100);				\
		  }
	  } while (0)



#endif /* _CALC_H */
