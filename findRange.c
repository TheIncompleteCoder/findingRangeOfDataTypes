#include<stdio.h>

void checkSigned(size_t bitValue,char *string)
{
int countBits = 8*bitValue;
int fromRange = -( 1 << (countBits-1) );
int toRange = ( 1 << (countBits-1) ) -1;\
printf(" range of signed %s : is %d to %d\n",string,fromRange,toRange);
}

void checkUnSigned(size_t bitValue,char *string)
{
int countBits = 8*bitValue;
int Range = (1 << (countBits-1) ) + ( 1 << (countBits-1))-1;
printf(" range of unsigned %s : is %u to %u\n",string,0,Range);
}

int main()
{
//without "sizeof()" function

// for unsigned
printf("Ranges for unsigned...\n");
checkUnSigned(2,"int");
checkUnSigned(1,"char");
checkUnSigned(4,"float");
checkUnSigned(4,"double");

// for signed
printf("Ranges for signed...\n");
checkSigned(2,"int");
checkSigned(1,"char");
checkSigned(4,"float");
checkSigned(4,"double");

//with "sizeof" function

/*checkUnSigned(sizeof(unsigned int),"int");
checkUnSigned(sizeof(unsigned char),"char");
checkUnSigned(sizeof(float),"float");
checkUnSigned(sizeof(double),"double");

// for signed
checkSigned(sizeof(signed int),"int");
checkSigned(sizeof(signed char),"char");
checkSigned(sizeof(float),"float");
checkSigned(sizeof(double),"double");
*/
return 0;
}
