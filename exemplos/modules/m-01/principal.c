#include <stdio.h>
// como se estivessemos usando o modulo convert.c
/**
 * como o modulo convert.c esta compilado dentro do mesmo programa objeto,
 * podemos chamar a funcao convert() dentro do programa principal.c
 * assim o modulo convert.c não precisa conter uma funcao main()
 * pois a funcao main() dentro do modulo principal.c quando chamada executa a funcao convert()
 * e assim o computador entende que deve chamar a funcao convert() de dentro do modulo convert.c
 *
 * mas assim achei muito confuso.... vi outro exemplo onde a pessoa criava um arquivo .h
 * e incluia em outros arquivos assim como fazemos com o <stdio.h> por exemplo.
 *
 * NOTA: estudar mais sobre estruturas de arquivos em C.
 */
float convert(float c);

int main(){
  float t1;
  float t2;

  printf("Digite a temperatura em Celsius:\t");
  scanf("%f", &t1);
  t2 = convert(t1);
  printf("Temperatura em Fahrenheit: %0.2f\n", t2);
  return 0;
}
