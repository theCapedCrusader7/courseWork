#include <stdio.h>

int main()
{
    char c;
    printf("Please enter a string :\t");
    while((c=getchar())!='\n')
    {
        if (c>='A' && c<='Z')
        {
            c = c - 'A' + 'a';
        }        

        switch (c)
        {
            case ('a') : printf("._ ");
                break;
            case ('b') : printf("-... ");
                break;
            case ('c') : printf("-.-. ");
                break;
            case ('d') : printf("-.. ");
                break;
            case ('e') : printf(". ");
                break;
            case ('f') : printf("..-. ");
                break;
            case ('g') : printf("--. ");
                break;
            case ('h') : printf(".... ");
                break;
            case ('i') : printf(".. ");
                break;
            case ('j') : printf(".--- ");
                break;
            case ('k') : printf("-.- ");
                break;
            case ('l') : printf(".-.. ");
                break;
            case ('m') : printf("-- ");
                break;
            case ('n') : printf("-. ");
                break;
            case ('o') : printf("--- ");
                break;
            case ('p') : printf(".--. ");
                break;
            case ('q') : printf("--.- ");
                break;
            case ('r') : printf(".-. ");
                break;
            case ('s') : printf("... ");
                break;
            case ('t') : printf("- ");
                break;
            case ('u') : printf("..- ");
                break;
            case ('v') : printf("...- ");
                break;
            case ('w') : printf(".-- ");
                break;
            case ('x') : printf("-..- ");
                break;
            case ('y') : printf("-.-- ");
                break;
            case ('z') : printf("--.. ");
                break;
            case (' ') : printf("/ ");
                break;
            case ('1') : printf(".---- ");
                break;
            case ('2') : printf("..--- ");
                break;
            case ('3') : printf("...-- ");
                break;
            case ('4') : printf("....- ");
                break;
            case ('5') : printf("..... ");
                break;
            case ('6') : printf("-.... ");
                break;
            case ('7') : printf("--... ");
                break;
            case ('8') : printf("---.. ");
                break;
            case ('9') : printf("----. ");
                break;
            case ('0') : printf("----- ");
                break;
            case ('.') : printf(".-.-.- ");
                break;
            case (',') : printf("--..-- ");
                break;
            case ('?') : printf("..--.. ");
                break;
            case ('\'') : printf(".----. ");
                break;
            case (':') : printf("---... ");
                break;
            case (';') : printf("-.-.-. ");
                break;
            case ('$') : printf("...-..- ");
                break;

        }
    }
}