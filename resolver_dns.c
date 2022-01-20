#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
 
        if(argc<=1) {
                system("clear");
                printf("\n[*] Falta informar o host. Ex: ./dns_resolver google.com \n");
                return 0;
        } else {
                struct hostent *alvo = gethostbyname(argv[1]);
                if(alvo == NULL) {
                        system("clear");
                        printf("[*] Host invalido. Ex: ./dns_resolver google.com \n");
                } else {
                        printf("\n[*]     Host informado: %s \n",argv[1]);
                        printf("[*] DNS correspondente: %s \n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));
                }
        }
return 0;
}
