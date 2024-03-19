#include <stdio.h>

int main() {
	
char login[50], loginSalvo = "Juca", senha[50], senhaSalva = "1234";
	
printf("LOGIN: ");
	scanf("%s", login);
	
printf("SENHA: ");
    scanf("%s", senha);
	
if (login == loginSalvo && senha == senhaSalva) {
	printf("BEM VINDO!");
} else {
	printf("RALA DAQUI!");
}	
	
	
	
	
	return 0;
	
	
}
