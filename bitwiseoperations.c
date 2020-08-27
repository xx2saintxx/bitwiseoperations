//Toussaint Turnier Lab 6 bitWise Operators
#include <stdio.h>
#include <stdlib.h>

int setones(int userinput)
{
    int pointer = 0;
    while (userinput != 0) {
    if ((userinput & 1) == 1)
    pointer++;
    userinput = userinput >> 1;
    }
    return pointer;
}

int setzeros(int userinput)
{
    int counter = 0;
    int pointer = 0;
    while (userinput != 0) {
    counter++;
    if ((userinput & 1) == 0)
    pointer++;
    userinput = userinput >> 1;
}
     return pointer + (32 - counter);
}




int main(int argc, char const *argv[])

{

    int userinput = atoi(argv[1]);

    printf("Your number was %d\n", userinput);

    printf("In %d, there are %d bits set to 0.\n", userinput, setzeros(userinput));

    printf("In %d, there are %d bits set to 1.\n", userinput, setones(userinput));

    return 0;

}