//---------------------------------------------------------------------------

#pragma hdrstop
//--------------------------------------------------------------------------

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#pragma argsused

const int MAX_STRING_SIZE = 512;
const int EXPECTED_GROUP_LEN = 5 ;

int findQuantOfSequences(char chArr[]);

int main()
{
    int answer;
    char chArr[MAX_STRING_SIZE];

    printf("Enter your string\n");

    gets(chArr);

    answer = findQuantOfSequences(chArr);

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
    strLength = strlen(chArr);


    for(int i = 0; i < strLength; i++)
    {

        if(chArr[i] == '1' || chArr[i] == '0')
        {
            lengthOfgroup++;
        }
        else
        {
            if(lengthOfgroup == EXPECTED_GROUP_LEN)
            {
                counter++;
            }
            lengthOfgroup = 0;
        }

    }

    if(lengthOfgroup == EXPECTED_GROUP_LEN)
    {
         counter++;
    }

    return counter;
}
