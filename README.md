# Biblioteca em C

![biblioteca Logo](https://terminalroot.com.br/assets/img/livros/c/c-livros.jpg)

## 📝 Descrição

**Libft** é uma biblioteca escrita em C que reúne funções essenciais para manipulação de strings, memória, conversões e verificação de caracteres. Ela contém reimplementações de funções da biblioteca padrão C ``libc``e também funções auxiliares, sendo uma base reutilizável para futuros projetos.

## 📚 Funções Implementadas

### **Manipulação de Memória**
-  ``ft_memset`` - Preenche uma área de memória com um valor.
-  ``ft_bzero`` - Zera uma área de memória.
-  ``ft_memcpy`` - Copia uma área de memória.
- ``ft_memccpy`` - Copia até encontrar um caractere específico.
- ``ft_memmove`` - Copia uma área de memória com suporte a sobreposição.
- ``ft_memchr `` - Encontra um caractere em uma área de memória.
- ``ft_memcmp`` - Compara duas áreas de memória.

### **Manipulação de Strings**
- ``ft_strlen`` - Calcula o comprimento de uma string.
- ``ft_strdup`` - Duplica uma string.
- ``ft_strcpy`` - Copia uma string.
- ``ft_strncpy`` - Copia no máximo \`n\` caracteres de uma string.
- ``ft_strcat`` - Concatena duas strings.
- ``ft_strncat`` - Concatena no máximo \`n\` caracteres de uma string.
- ``ft_strlcat`` - Concatena strings de forma segura (evita overflow).
- ``ft_strchr`` - Encontra a primeira ocorrência de um caractere em uma string.
- ``ft_strrchr`` - Encontra a última ocorrência de um caractere em uma string.
- ``ft_strstr`` - Encontra uma substring dentro de outra string.
- ``ft_strnstr`` - Encontra uma substring em uma string limitada por \`n\` caracteres.
- ``ft_strcmp`` - Compara duas strings.
- ``ft_strncmp`` - Compara no máximo \`n\` caracteres de duas strings.

### **Conversão e Verificação**
- ``ft_atoi`` - Converte uma string para um número inteiro.
- ``ft_isalpha`` - Verifica se um caractere é uma letra.
- ``ft_isdigit`` - Verifica se um caractere é um dígito.
- ``ft_isalnum`` - Verifica se um caractere é alfanumérico.
- ``ft_isascii`` - Verifica se um caractere pertence à tabela ASCII.
- ``ft_isprint`` - Verifica se um caractere é imprimível.
- ``ft_toupper`` - Converte um caractere para maiúsculo.
- ``ft_tolower`` - Converte um caractere para minúsculo.

- ``Arquivos``: Contêm as implementações de cada função.
- ``libft.h``: Arquivo de cabeçalho com os protótipos das funções.
- ``Makefile``: Script de automação para compilar a biblioteca.

- ## Contribuição
Sinta-se à vontade para sugerir melhorias ou adicionar novas funções à biblioteca.

### O aprendizado genuíno se baseia na originalidade. Em vez de copiar, busque entender e desenvolver suas próprias habilidades. <3
