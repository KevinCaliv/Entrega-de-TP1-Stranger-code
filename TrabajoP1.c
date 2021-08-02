#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char confi[8];
int animo,sumatoria=0;
void confimal();
void ifi();

int main()
{
    printf("Ingresar animo (1-10): ");
    scanf("%d",&animo);

    while(animo<1 || animo>10){
    printf("El numero %d no esta en el rango (1-10), reingresar animo: ",animo);
    scanf("%d",&animo);}

    fflush(stdin);
    printf("\nIngresar confianza en sus amigos (alta-media-baja): ");
    fgets(confi,8,stdin);
    confi[strlen(confi)-1]='\0';

    while(confi[0]!='a' && confi[0]!='A' && confi[0]!='m' && confi[0]!='M' && confi[0]!='b' && confi[0]!='B'){
    fflush(stdin);
    printf("\nReingresar confianza en sus amigos (alta-media-baja): ");
    fgets(confi,8,stdin);
    confi[strlen(confi)-1]='\0';}


    if(confi[0]=='a' || confi[0]=='A'){
    if(confi[1]=='l' || confi[1]=='L'){
    sumatoria=sumatoria+1;}
    if(confi[2]=='t' || confi[2]=='T'){
    sumatoria=sumatoria+1;}
    if(confi[3]=='a' || confi[3]=='A'){
    sumatoria=sumatoria+1;}

    while(sumatoria!=3){

    fflush(stdin);
    printf("\nReingresar confianza en sus amigos (alta-media-baja): ");
    fgets(confi,8,stdin);
    confi[strlen(confi)-1]='\0';

    sumatoria=0;
    if(confi[1]=='l' || confi[1]=='L'){
    sumatoria=sumatoria+1;}
    if(confi[2]=='t' || confi[2]=='T'){
    sumatoria=sumatoria+1;}
    if(confi[3]=='a' || confi[3]=='A'){
    sumatoria=sumatoria+1;}
    }}


    if(confi[0]=='m' || confi[0]=='M'){
    if(confi[1]=='e' || confi[1]=='E'){
    sumatoria=sumatoria+1;}
    if(confi[2]=='d' || confi[2]=='D'){
    sumatoria=sumatoria+1;}
    if(confi[3]=='i' || confi[3]=='I'){
    sumatoria=sumatoria+1;}
    if(confi[4]=='o' || confi[4]=='O'){
    sumatoria=sumatoria+1;}

    while(sumatoria!=4){

    fflush(stdin);
    printf("\nReingresar confianza en sus amigos (alta-media-baja): ");
    fgets(confi,8,stdin);
    confi[strlen(confi)-1]='\0';

    sumatoria=0;
    if(confi[1]=='e' || confi[1]=='E'){
    sumatoria=sumatoria+1;}
    if(confi[2]=='d' || confi[2]=='D'){
    sumatoria=sumatoria+1;}
    if(confi[3]=='i' || confi[3]=='I'){
    sumatoria=sumatoria+1;}
    if(confi[4]=='o' || confi[4]=='O'){
    sumatoria=sumatoria+1;}
    }}

    if(confi[0]=='b' || confi[0]=='B'){
    if(confi[1]=='a' || confi[1]=='A'){
    sumatoria=sumatoria+1;}
    if(confi[2]=='j' || confi[2]=='J'){
    sumatoria=sumatoria+1;}
    if(confi[3]=='a' || confi[3]=='A'){
    sumatoria=sumatoria+1;}

    while(sumatoria!=3){

    fflush(stdin);
    printf("\nReingresar confianza en sus amigos (alta-media-baja): ");
    fgets(confi,8,stdin);
    confi[strlen(confi)-1]='\0';

    sumatoria=0;
    if(confi[1]=='a' || confi[1]=='A'){
    sumatoria=sumatoria+1;}
    if(confi[2]=='j' || confi[2]=='J'){
    sumatoria=sumatoria+1;}
    if(confi[3]=='a' || confi[3]=='A'){
    sumatoria=sumatoria+1;}
    }}


    return 0;
}
