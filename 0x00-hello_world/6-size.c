iinclude<stdio.h>
/**                                                                                                                                                 
* main - it shows the size of different kinds types                                                                                              
* Return: Always 0 (Success)                                                                                                                        
*/
int main(void)
{
printf("Size of a char: '%c' byte(s)",sizeof(char));
printf("Size of an int: '%d' byte(s)",sizeof(int));
printf("Size of a long int: '%li' byte(s)",sizeof(long));
printf("Size of a long long int: '%lli' byte(s)",sizeof(long long int));
print f("Size of a float: '%f' byte(s)",sizeof(float));
return(0);
}
