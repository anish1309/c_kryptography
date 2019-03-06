#include<stdio.h>
#include<string.h>
int main(){
    int column=0,i,k=0,ch, rows=0;char str1[100],str2[100];
    printf("\nenter text : ");
    scanf(" %[A-Za-z ._]",str1);
    printf("\npress 1to encrypt and 2 to decrypt: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
                printf("enter no. of     column : ");
                scanf("%d",&column);
                rows=strlen(str1);
                if(rows%column!=0){
                rows=rows/column;rows++;}
                else
                rows=rows/column;
                char encrypted[rows][column];
                for(i=0;i<rows;++i){
                for(int j=0;j<column;++j){
                    if(str1[k]==' ')
                    str1[k]='.';
                encrypted[i][j]=str1[k];++k;}
                }
                for(int i=0;i<column;++i){
                for(int j=0;j<rows;++j)
                printf("%c",encrypted[j][i]);
                if(i==column-1)
                break;
                printf("_");
                }
                 break;}
        
        case 2:{
                 //simplifying str2ing
                for(int i=0; str1[i]!='\0'; ++i){
                if(str1[i]=='_'){
                continue;}
                if(str1[i]=='.'){
                str1[i]=' ';}
                str2[k]=str1[i];++k;}
                

                //finding rows, column and str2ing length
                 for(int i=0; str1[i]!='\0'; ++i)
                if(str1[i]=='_')
                ++column;
                ++column;
                for(rows=0; str1[rows]!='_'; ++rows);
                int len_str2=strlen(str2)-2;
                k=0;

                //putting into matrix
                char arr[column][rows];
                for(int i=0;i<column;++i){
                    for(int j=0;j<rows;++j){
                        arr[i][j]=str2[k];++k;
                    }
                }
                 //transpose and show 
                for(int i=0;i<rows;++i){
                for(int j=0;j<column;++j)
                printf("%c",arr[j][i]);
                }
                break;}
        default : printf("\noption not available");
    }
    return 0;
}