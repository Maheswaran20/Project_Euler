#include<stdio.h>
                            int main()
                           {
                                 int n,squareOfSum,sumOfSquares=0,sum=0;
                                 for(n=1;n<=100;n++)
                                 {
                                     sum += n;
                                     sumOfSquares += n*n;
                                  }
                                  squareOfSum=sum*sum;
                                  printf("%i",squareOfSum-sumOfSquares);
                                  return 0;
                              }
