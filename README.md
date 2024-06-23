- [English](#english)
- [Português](#português)

# English

# pipex - 42

This project, pipex, is part of the curriculum at School 42. The goal of this project is to create a program that simulates the behavior of the pipe (`|`) operator in shell commands. It involves redirecting the input and output of two commands to create a pipeline.

## Table of Contents

- [Problem Statement](#problem-statement)
- [How to Use](#how-to-use)

## Problem Statement

The pipex project involves the following aspects:

1. Read two commands and a filename as arguments.
2. Redirect the input/output of the commands using file descriptors and pipes.
3. Execute the commands in separate child processes and connect them with a pipe.
4. Handle errors such as invalid commands or file access issues.
5. Redirect the output of the commands to a specified file.

## How to Use

To use the pipex program, follow these steps:

1. Clone the pipex repository:
   ```sh
   git clone git@github.com:rofnavarro/42-pipex.git
   cd 42-pipex
   ```

2. Compile the program:
   ```sh
   make
   ```

3. Run the pipex program with two commands and a filename:
   ```sh
   ./pipex file1 cmd1 cmd2 file2
   ```

   Replace `file1`, `cmd1`, `cmd2`, and `file2` with the actual filenames and commands you want to use.

***

# Português

# pipex - 42

Este projeto, pipex, faz parte do currículo da Escola 42. O objetivo deste projeto é criar um programa que simula o comportamento do operador pipe (`|`) em comandos de shell. Envolve redirecionar a entrada e saída de dois comandos para criar um pipeline.

## Sumário

- [Descrição do Problema](#descrição-do-problema)
- [Como Usar](#como-usar)

## Descrição do Problema

O projeto pipex envolve os seguintes aspectos:

1. Ler dois comandos e um nome de arquivo como argumentos.
2. Redirecionar a entrada/saída dos comandos usando descritores de arquivo e pipes.
3. Executar os comandos em processos filhos separados e conectá-los com um pipe.
4. Lidar com erros como comandos inválidos ou problemas de acesso ao arquivo.
5. Redirecionar a saída dos comandos para um arquivo especificado.

## Como Usar

Para usar o programa pipex, siga estas etapas:

1. Clone o repositório pipex:
   ```sh
   git clone git@github.com:rofnavarro/42-pipex.git
   cd 42-pipex
   ```

2. Compile o programa:
   ```sh
   make
   ```

3. Execute o programa pipex com dois comandos e um nome de arquivo:
   ```sh
   ./pipex arquivo1 comando1 comando2 arquivo2
   ```

   Substitua `arquivo1`, `comando1`, `comando2` e `arquivo2` pelos nomes de arquivo e comandos reais que deseja usar.
