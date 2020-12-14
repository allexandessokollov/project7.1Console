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

int countAnsewer(std::string str);


int main(int argc, char* argv[])
{
    std::string str;
    int answer;
    char chArr[256];

    printf("Enter your string\n");

    gets(chArr);

    answer = countAnsewer(chArr);

    printf("\nAnswer is: %d \n\n\n", answer);

    printf("Enter 1 to close aoolication");
    int close;

    scanf("%d", close);



    return 0;
}
//---------------------------------------------------------------------------
int countAnsewer(std::string str)
{

    str += " ";

    const char *chArr = str.c_str();

    int counter = 0, tmpCounter = 0, strLength = strlen(chArr);


    

    for(int i = 0; i < strLength; i++)
    {

        if(chArr[i] == '1' || chArr[i] == '0')
        {
            tmpCounter++;
        }
        else if(chArr[i] == ' ')
        {
            if(tmpCounter == 5)
            {
                counter++;
            }
            tmpCounter = 0;
        }
        else
        {
            printf("\n\nunexpected symbol!\n\n");
        }
    }

    return counter;
}
