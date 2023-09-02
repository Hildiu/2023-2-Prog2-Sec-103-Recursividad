//
// Created by Maria Hilda Bermejo on 4/30/20.
//

#include "UFunciones.h"

double   factorial(unsigned int num)
{
    if(num==0 || num==1)
      return 1;
    return num * factorial(num-1);

}


/* 5! = 1 x 2 x 3 x 4 x 5
 * 5! =  5 x 4 x 3 x 2 x 1
 *
 * fac(5) = 120
 *
 * fac(5) = 5 * fac(4)
 *                 4 * fac(3)
 *                       3   * fac(2)
 *                                2 * fact(1)
 *                                      1 * fac(0)
 *                                            1
 */



unsigned int  producto(unsigned int n1, unsigned int n2)
{
  if( n2==1 )
    return n1;
  return n1 + producto(n1, n2-1);
}

/*   5 * 4 =  5 + 5 + 5 + 5
 *   producto(5,4) =  20
 *
 *producto(5,4) =  5  + producto(5,3)
 *                            5 + producto(5,2)
 *                                   5 + producto(5,1)
 *                                              5
 *
 */

unsigned int  sumatoria(unsigned int num)
{
  if( num == 1)
    return 1;
  return num + sumatoria(num-1);

}

/*
 * 7 = 1 + 2 + 3 + 4 + 5 + 6 + 7
 * 7 = 7 + 6 + 5 + 4 + 3 + 2 + 1
 * sumatoria(7) =  7 + sumatoria(6)
 *                        6 + sumatoria(5)
 *                                5 + sumatoria(4)
 *                                        4 + sumatoria(3)
 *                                               3  + sumatoria(2)
 *                                                       2 + sumatoria(1)
 *                                                                1
 *
 *
 */


unsigned int  cociente(unsigned int  dividendo, unsigned int divisor)
{
  if(dividendo < divisor)
    return 0;
  return 1 + cociente(dividendo - divisor, divisor);

}

/*
 * 13 / 3 =  13 - 3  = 10    (1)
 *           10 - 3  = 7     (2)
 *            7 - 3  = 4     (3)
 *            4 - 3  = 1     (4)
 */









