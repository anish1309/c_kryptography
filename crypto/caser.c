#include<stdio.h>
#include<string.h>

void decrypt(int str_math_funct[], int key_math_funct[], int str_cnt ){
    int temp;
    for(int i=0;i<str_cnt;++i){
        if(str_math_funct[i]==0){
        printf(" ");}
        else{
        temp=str_math_funct[i]-key_math_funct[i];
        if(temp<1){
        temp=temp+26;
        printf("%c",temp+96);
        continue;}
        printf("%c",temp+96);
        }
    }printf("\n");
}void crypt(int str_math_funct[], int key_math_funct[], int str_cnt ){
    int temp;
    for(int i=0;i<str_cnt;++i){
        if(str_math_funct[i]==0){
        printf(" ");}
        else{
        temp=str_math_funct[i]+key_math_funct[i]+96;
        if(temp>122){
        temp-=122;
        printf("%c",temp+96);
        continue;}
        printf("%c",temp);
        }
    }printf("\n");
}

void math_funct(char str[], char str1[],int str_cnt,int flag){
    int str_math_funct[str_cnt],temp,key_math_funct[str_cnt],temp1,ct[str_cnt];
    for(int i=0;i<str_cnt;++i){
        if(str[i]=='a'||str[i]=='A')
        temp=1;
        if(str[i]=='b'||str[i]=='B')
        temp=2;
        if(str[i]=='c'||str[i]=='C')
        temp=3;
        if(str[i]=='d'||str[i]=='D')
        temp=4;
        if(str[i]=='e'||str[i]=='E')
        temp=5;
        if(str[i]=='f'||str[i]=='F')
        temp=6;
        if(str[i]=='g'||str[i]=='G')
        temp=7;
        if(str[i]=='h'||str[i]=='H')
        temp=8;
        if(str[i]=='i'||str[i]=='I')
        temp=9;
        if(str[i]=='j'||str[i]=='J')
        temp=10;
        if(str[i]=='k'||str[i]=='K')
        temp=11;
        if(str[i]=='l'||str[i]=='L')
        temp=12;
        if(str[i]=='m'||str[i]=='M')
        temp=13;
        if(str[i]=='n'||str[i]=='N')
        temp=14;
        if(str[i]=='o'||str[i]=='O')
        temp=15;
        if(str[i]=='p'||str[i]=='P')
        temp=16;
        if(str[i]=='q'||str[i]=='Q')
        temp=17;
        if(str[i]=='r'||str[i]=='R')
        temp=18;
        if(str[i]=='s'||str[i]=='S')
        temp=19;
        if(str[i]=='t'||str[i]=='T')
        temp=20;
        if(str[i]=='u'||str[i]=='U')
        temp=21;
        if(str[i]=='v'||str[i]=='V')
        temp=22;
        if(str[i]=='w'||str[i]=='W')
        temp=23;
        if(str[i]=='x'||str[i]=='X')
        temp=24;
        if(str[i]=='y'||str[i]=='Y')
        temp=25;
        if(str[i]=='z'||str[i]=='Z')
        temp=26;
        if(str[i]==' ')
        temp=0;
        str_math_funct[i]=temp;
    
    }
    for(int i=0;i<str_cnt;++i){
         if(str1[i]=='a'||str1[i]=='A')
        temp1=1;
        if(str1[i]=='b'||str1[i]=='B')
        temp1=2;
        if(str1[i]=='c'||str1[i]=='C')
        temp1=3;
        if(str1[i]=='d'||str1[i]=='D')
        temp1=4;
        if(str1[i]=='e'||str1[i]=='E')
        temp1=5;
        if(str1[i]=='f'||str1[i]=='F')
        temp1=6;
        if(str1[i]=='g'||str1[i]=='G')
        temp1=7;
        if(str1[i]=='h'||str1[i]=='H')
        temp1=8;
        if(str1[i]=='i'||str1[i]=='I')
        temp1=9;
        if(str1[i]=='j'||str1[i]=='J')
        temp1=10;
        if(str1[i]=='k'||str1[i]=='K')
        temp1=11;
        if(str1[i]=='l'||str1[i]=='L')
        temp1=12;
        if(str1[i]=='m'||str1[i]=='M')
        temp1=13;
        if(str1[i]=='n'||str1[i]=='N')
        temp1=14;
        if(str1[i]=='o'||str1[i]=='O')
        temp1=15;
        if(str1[i]=='p'||str1[i]=='P')
        temp1=16;
        if(str1[i]=='q'||str1[i]=='Q')
        temp1=17;
        if(str1[i]=='r'||str1[i]=='R')
        temp1=18;
        if(str1[i]=='s'||str1[i]=='S')
        temp1=19;
        if(str1[i]=='t'||str1[i]=='T')
        temp1=20;
        if(str1[i]=='u'||str1[i]=='U')
        temp1=21;
        if(str1[i]=='v'||str1[i]=='V')
        temp1=22;
        if(str1[i]=='w'||str1[i]=='W')
        temp1=23;
        if(str1[i]=='x'||str1[i]=='X')
        temp1=24;
        if(str1[i]=='y'||str1[i]=='Y')
        temp1=25;
        if(str1[i]=='z'||str1[i]=='Z')
        temp1=26;
        if(str1[i]==' ')
        temp1=0;
        key_math_funct[i]=temp1;
    }
   if(flag==1)
   decrypt(str_math_funct, key_math_funct, str_cnt );
   else
   crypt(str_math_funct, key_math_funct, str_cnt );
}
void key_string(char str[],int str_cnt,char key[],int key_cnt,int flag){
    char temp_str[str_cnt]; int ai=0,je=0;
    while(ai<str_cnt){
            for(je=0;je<key_cnt;++je){
                temp_str[ai]=key[je]; ++ai;
                if(ai==str_cnt)
                break;
            }if(ai==str_cnt)
                break;
        }
        math_funct(str,temp_str,str_cnt,flag);
    }
int main(){
    char str[100],key[1000];
    int str_cnt, key_cnt, flag=0, cryptography;
    printf("enter string : ");
    scanf("%[A-Za-z ]",str);
    printf("\nenter key : ");
    scanf(" %[A-Za-z ]",key);
    printf("\npress 1: encrypt and 2: to decrypt : ");
    scanf(" %d",&cryptography);
    printf("\nnew text : ");
    if(cryptography==2)
    flag++;
    str_cnt=strlen(str);
    key_cnt=strlen(key);
    key_string(str,str_cnt,key,key_cnt,flag);
    return 0;
}