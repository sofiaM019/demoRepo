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
Array:: ~ Array()
{
  delete data[];
  capacity=0;
  data=nullptr;
}
Array:: Array(const Array& ref)
{ 
  capacity=ref.capacity;
  if(ref.data==nullptr)
  { 
    data=nullptr;
    return;
  }
  data= new int[capacity];
  for( int i=0;i<capacity;i++)
    { 
      data[i]= ref.data[i];
    }
}
int & Array:: getsetcapacity(int index)
{ 
  if(isValidIndex(index))
    return data[index];
  exit(0);
}
int Array:: getCapacity()
{ 
  return capacity;
}
void Array:: display ()
{ 
  for(int i=0; i<capacity; i++)
    cout<< data[i];
} 

