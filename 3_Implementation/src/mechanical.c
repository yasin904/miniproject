/**
 * @file gravitational.c
 * @author mohammed yasin(mohammedyasin1904@gmail.com)
 * @brief file to calculate the mechanical energy
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright(c) 2021
 * 
 */
#include "func.h"
#include<stdio.h>
 
 void mechanical()
 {
  float k,g,m;
  printf("enter kinetic and gravitational energy");
  scanf("%f%f",&k,&g);
  m=g+k;
  printf("mechanical energy is%f",&m);

  
 }