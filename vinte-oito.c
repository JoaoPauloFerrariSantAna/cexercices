#include <stdio.h>
#include <string.h>

// https://www.scaler.com/topics/c/c-string-input-output-function/
int main() {
	char palavra[16];
	printf("Por favor digite uma palavra (max. 16 letras): ");
	scanf("%s", palavra);

	int comp_pala = strlen(palavra);

	int num_consoante = 0;
	int num_volgal = 0;

	// a gente vai precisar de um loop
	// porque preciso olhar todas as letras
	// a gente precisa agora de um "switch" ou um "if"
	// porque se "for consoante, some mais um" se "for vogal, some mais um"
	for(int i = 0; i < comp_pala; i++) {
		char letra = palavra[i];

		if(letra == 'b' || letra == 'c' || letra == 'd' || letra == 'f' ||
			letra == 'h' || letra == 'j' || letra == 'k' || letra == 'l' ||
			letra == 'm' || letra == 'n' || letra == 'p' || letra == 'q' ||
			letra == 'r' || letra == 's' || letra == 't' || letra == 'y' ||
			letra == 'x' || letra == 'y' || letra == 'w' || letra == 'z') {
				num_consoante++;
		}

		if(letra  == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			num_volgal++;
		}
	}
	
	printf("A palavra '%s' tem %d letras que são consoates", palavra, num_consoante);
	printf(" e %d vogais.\n", num_volgal);

	return 0;
}
