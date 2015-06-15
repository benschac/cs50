#include <cs50.h>
#include <stdio.h>
void fun(int num, string hi);
int main(int argc, string argv[2])
{
    for(int i = 0; i < 10; i++)
    {
        fun(i, "Benjamin");
    }
    
}

void fun(int num, string hi) {

      printf("Hi %s %i\n", hi, num);
   
}
