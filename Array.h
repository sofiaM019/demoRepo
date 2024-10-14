class Array 
{ 
int * data;
int capacity;
bool isValidIndex(int index);
piblic:
Array(Array &&);
Array(int cap=0,...);
~Array();
Array & operator=(const Array & ref);
void operator=(Array && ref);
Array (const Array & );
int & getsetcapacity();
int getcapacity();
void display();
}
