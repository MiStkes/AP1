
    char ch1[100];
    FILE *inicial;

    inicial=fopen("aulas.txt", "w");



    printf("Insira o seu curso: \n");
    gets(ch1);
    fputs(ch1, inicial);
    fputc('|', inicial);
    printf("Insira a Materia: \n");
    gets(ch1);
    fputs(ch1, inicial);
    fputc('|', inicial);
    printf("Insira o dia e o mes em que a aula sera ministrada: \n");
    gets(ch1);
    fputs(ch1, inicial);
    fputc('|', inicial);
    printf("Insira o Horario: \n");
    gets(ch1);
    fputs(ch1, inicial);
    fputc('|', inicial);
    printf("Insira o seu nome: \n");
    gets(ch1);
    fputs(ch1, inicial);
    fputc('|', inicial);
    printf("Insira o Local de aula: \n");
    gets(ch1);
    fputs(ch1, inicial);
    fputc('|', inicial);

    fclose(inicial);

	return 0;
}
*/
