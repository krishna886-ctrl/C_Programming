#include <stdio.h>
int main()
{
char c;
int b;
float a;
printf("ch occupied %d size of char  %d\n",sizeof(char),sizeof(char));

printf("b  occupied %d size of int   %d\n",sizeof(b),sizeof(b));

printf("a  occupied %d size of float %d\n",sizeof(a),sizeof(a));
return 0;  
}
/* Output:>
ch occupied 1 size of char  1
b  occupied 4 size of int   4
a  occupied 4 size of float 4*/
