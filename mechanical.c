/**
 * @file mechanical.c
 * @author mohammed yasin(mohammedyasin1904@gmail.com)
 * @brief file to calculate the mechanical energy
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright(c) 2021
 * 
 */
#include "func.h"
 
 void mechanical()
 {
  float M,k,g;
  printf("enter kinetic and mechanical energy");
  scanf("%f%f",&k,&g);
  M=k+g;
  printf("mechanical energy is%f",M);

  
 }