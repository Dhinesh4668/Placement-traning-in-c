#include<stdio.h>
int main(){
    char str[50];
    char ch;
    int len=0,i,vo=0,con=0,bs=0,dig=0,spc=0;
    printf("\n each any string:");
    gets(str);
    for(i=0;str[i]!=0;i++) len=i;
    printf("\n\t length of the given string:");
    for(i=0;i<len;i++){
        ch=str[i];
        switch(ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vo++;
            break;

        case ' ':
            ++bs;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            dig++;
            break;
        case '+':
        case '-':
        case '/':
        case '*':
        case '(':
        case ')':
        case '$':
        case '%':
        case '&':
        case '=':
            ++spc;
            break;
        default:
            ++con;

        }
    }
    printf("\nGivern String is :%s",str);
    printf("\nGivern Vowel is :%d",vo);
    printf("\nblanck spaces :%d",bs);
    printf("\nGivern digits is :%d",dig);
    printf("\nconstant :%d",con);
    printf("\nGivern String is :%s",str);
}
