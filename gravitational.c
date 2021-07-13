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
 
 void gravitational()
 {
  float m,h,g;
  printf("enter mass and height");
  scanf("%f%f",&m,&h);
  g=m*h*9.8;
  printf("mechanical energy is%f",g);

  
 }