//---------------------------------------------------------------------------

#pragma hdrstop
//--------------------------------------------------------------------------
#include <string.h>
#include <string>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#pragma argsused

const int MAX_STRING_SIZE = 512;

int findQuantOfSequences(char chArr[]);

int main()
{
    int answer;
    char chArr[MAX_STRING_SIZE];

    printf("Enter your string\n");

    gets(chArr);

<<<<<<< HEAD
    answer = findQuantOfSequences(chArr);
=======
    answer = countAnsewer(chArr);

    printf("\nAnswer is: %d \n\n\n", answer);

    printf("Enter 1 to close aoolication");
    char ch[20];

    gets(ch);
>>>>>>> b8d03ad4038bfda51027fa0f31534ce4d9018209

    printf("\nAnswer is: %d ", answer);

    puts("\n\n\nPress any key ... ");
    getch();
    getch();

    return 0;
}
//---------------------------------------------------------------------------
int findQuantOfSequences(char chArr[])
{
    int counter = 0, lengthOfgroup = 0,
    strLength = strlen(chArr),
    expectedGroupLength = 5;

    for(int i = 0; i < strLength; i++)
    {

        if(chArr[i] == '1' || chArr[i] == '0')
        {
            lengthOfgroup++;
        }
        else
        {
            if(lengthOfgroup == expectedGroupLength)
            {
                counter++;
            }
            lengthOfgroup = 0;
        }

        if(i == strLength - 1)
        {
            if(lengthOfgroup == expectedGroupLength)
            {
                counter++;
            }
            lengthOfgroup = 0;
        }
    }

    return counter;
}
