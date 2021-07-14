/**
 * @file kinetic.c
 * @author mohammed yasin(mohammedyasin1904@gmail.com)
 * @brief file to calculate the kinetic energy
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright(c) 2021
 * 
 */
#include "func.h"
#include<stdio.h>
 
 double kinetic(double m,double v)
 {
  double k;


  k=0.5*m*v;
  
  return k;

  
 }