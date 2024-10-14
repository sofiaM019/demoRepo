#include<iostream>
#include"Array.h"
using namespace std;
bool Array:: isValidIndex(int index)
{
  if(index>=0&& index< capacity)
  { 
    return true;
  }
  return false;
}
Array:: Array(int count,...)
{  
  if(ount <=0)
  { 
    data=nullptr;
    capacity=0;
    return;
  }
  capacity=count;
  data=new int[count];
  va_list v1;
  va_start(v1,count);
  for(int i=0;i<count;i++)
    { 
      data[i]= va_arg(v1,int);
    }
  va_end(v1);
}
