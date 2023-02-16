#include <stdio.h>
int main()
{
printf("%d %d %d %d %d\n",sizeof(032),sizeof(0x32),sizeof(32),sizeof(32U),sizeof(32L));
printf("%d %d %d",sizeof(32.4),sizeof(32.4f),sizeof(32.4F));
return 0;
}
/*Output:>
4 4 4 4 4
8 4 4*/

