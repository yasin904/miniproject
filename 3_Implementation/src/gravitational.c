/**
 * @file gravitational.c
 * @author mohammed yasin(mohammedyasin1904@gmail.com)
 * @brief file to calculate the gravitational energy
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright(c) 2021
 * 
 */
#include "func.h"
#include<stdio.h>
 
 double gravitational(double m,double h)
 {
  double g;
  
  
  g=9.8*m*h;
  return g;

  
 }