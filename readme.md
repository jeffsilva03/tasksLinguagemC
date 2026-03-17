# tasksLinguagemC — Gerenciador de Tarefas em C

<div align="center">

![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)
![Terminal](https://img.shields.io/badge/Terminal-000000?style=for-the-badge&logo=gnubash&logoColor=white)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-brightgreen?style=for-the-badge)

**Projeto em linguagem C que implementa um gerenciador de tarefas no terminal, explorando fundamentos da programação como variáveis, estruturas condicionais, switch case e loops.**

</div>

---

## Sobre o projeto

Este projeto foi desenvolvido como exercício prático dos fundamentos da linguagem C. A proposta foi simples: construir um programa funcional no terminal que demonstrasse, de forma aplicada, o uso de variáveis globais e locais, estruturas de controle de fluxo, manipulação de strings e organização do código em funções.

O programa permite adicionar e listar tarefas diretamente pelo terminal, com um menu interativo que persiste em loop até o encerramento explícito. O limite de 5 tarefas é tratado com validação e feedback claro ao usuário.

## Objetivos da entrega

- Aplicar **variáveis globais e locais** em um contexto real de programa.
- Implementar controle de fluxo com **switch case** e **estruturas condicionais**.
- Utilizar **loops** para manter o menu ativo enquanto o programa estiver em execução.
- Manipular **strings em C** com `scanf`, `strcpy` e `printf`.
- Organizar o código em **funções separadas** por responsabilidade.

## Funcionalidades

| Funcionalidade | Descrição |
|---|---|
| **Adicionar tarefa** | Lê uma string do terminal e armazena na lista |
| **Listar tarefas** | Exibe todas as tarefas cadastradas com numeração |
| **Validação de limite** | Impede inserção além de 5 tarefas com aviso ao usuário |
| **Menu interativo** | Loop contínuo com switch case até o usuário escolher sair |
| **Tratamento de opção inválida** | Exibe mensagem de erro sem travar o programa |

## Conceitos aplicados

```
1. Variáveis globais   — array de tarefas e contador acessíveis por todas as funções
2. Variáveis locais    — buffers declarados dentro de cada função
3. Switch case         — navegação entre as opções do menu
4. Loop while          — execução contínua do menu até a opção de saída
5. For loop            — iteração sobre as tarefas para listagem
6. Funções             — separação de responsabilidades entre adicionarTarefa() e listarTarefas()
7. Strings em C        — uso de scanf com máscara, strcpy e printf formatado
```

## Tecnologias

- **C** — linguagem principal do projeto
- **stdio.h** — entrada e saída padrão
- **string.h** — manipulação de strings (`strcpy`)

Nenhuma biblioteca externa. Compila e roda em qualquer ambiente com GCC.

## Estrutura do projeto

```
tasksLinguagemC/
└── main.c    # Código-fonte completo com menu, funções e lógica principal
```

## Como usar

### Pré-requisitos

- GCC instalado (`gcc --version` para verificar)
- Terminal (Linux, macOS ou Windows com MinGW/WSL)

### Compilação e execução

```bash
# Clone o repositório
git clone https://github.com/jeffsilva03/tasksLinguagemC.git

# Acesse a pasta
cd tasksLinguagemC

# Compile
gcc main.c -o tasks

# Execute
./tasks
```

### Uso no terminal

```
=== Gerenciador de Tarefas em C ===

Menu:
1 - Adicionar tarefa
2 - Listar tarefas
3 - Sair

Escolha uma opção: 
```

Selecione uma opção digitando o número correspondente e pressionando Enter.

## Limitações conhecidas

| Limitação | Comportamento |
|---|---|
| Máximo de 5 tarefas | Exibe aviso e retorna ao menu ao atingir o limite |
| Sem persistência | As tarefas são perdidas ao encerrar o programa |
| Sem remoção | Não é possível deletar tarefas individualmente |

> Essas limitações são intencionais para o escopo do exercício. Expansões como persistência em arquivo `.txt` e remoção de tarefas podem ser implementadas como próximos passos.

## Licença

Este projeto é de uso livre para fins educacionais. Sinta-se à vontade para adaptar, expandir e usar como base de estudo.

---

<div align="center">

Desenvolvido como exercício prático dos fundamentos da linguagem C.

</div>
