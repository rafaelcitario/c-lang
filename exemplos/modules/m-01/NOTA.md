# Dica do Autor

Uma alternativa é compilar tudo junto e gerar o executável:

```bash
gcc –o prog converte.c principal.c
```

No entanto, esta não é a melhor estratégia, pois se alterarmos a implementação de um
determinado módulo não precisaríamos re-compilar os outros. Uma forma mais eficiente é
compilarmos os módulos separadamente e depois ligar os diversos módulos objetos gerados
para criar um executável.

```bash
> gcc –c converte.c
> gcc –c principal.c
> gcc –o prog converte.o principal.o
```

A opção –c do compilador gcc indica que não queremos criar um executável, apenas gerar
o arquivo objeto (com extensão “.o” ou “.obj”). Depois, invocamos gcc para fazer a
ligação dos objetos, gerando o executável
