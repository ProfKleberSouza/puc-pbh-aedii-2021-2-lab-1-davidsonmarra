void numero_vogais(char texto[]) {
  int A = 0, E = 0, I = 0, O = 0, U = 0, j = 0;
  for (int j = 0; j < strlen(texto); j++) {
    texto[j] = toupper(texto[j]);
    switch (texto[j]) {
      case 'A':
        A++;
        break;
      case 'E':
        E++;
        break;
      case 'I':
        I++;
        break;
      case 'O':
        O++;
        break;
      case 'U':
        U++;
        break;
      default:
        break;
    }
  }
  printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d", A, E, I, O, U); // SAIDA
}