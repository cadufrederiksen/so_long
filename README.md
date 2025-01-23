# 🎮 So_long - Introdução à Programação Gráfica com MiniLibX

![C](https://img.shields.io/badge/Language-C-blue) ![MiniLibX](https://img.shields.io/badge/Graphics-MiniLibX-orange) ![Makefile](https://img.shields.io/badge/Build-Makefile-yellow) ![Norminette](https://img.shields.io/badge/Style-Norminette-green)

O projeto **So_long** tem como objetivo introduzir os estudantes à programação gráfica em C utilizando a biblioteca gráfica **MiniLibX**. Através deste projeto, os participantes aprendem a criar um pequeno jogo 2D, manipulando eventos, gráficos e elementos interativos.

---

## 📋 Objetivo do Projeto

O objetivo principal do projeto é **desenvolver um jogo simples em um ambiente 2D**, onde o personagem principal pode:
- Mover-se pelo mapa.
- Interagir com elementos no ambiente.
- Completar objetivos definidos no jogo, como coletar itens e alcançar uma saída.

Além disso, o projeto serve como introdução a conceitos avançados, como:
- **Manipulação de gráficos 2D e 3D.**
- **Transformações geométricas e manipulação de matrizes.**
- **Gerenciamento de eventos de teclado e entrada do usuário.**

---

## 📚 Conceitos Fundamentais

- **MiniLibX**: biblioteca gráfica para criar janelas, exibir imagens, desenhar pixels e gerenciar eventos.  
- **Transformações Geométricas**: manipulação de posições, rotação e escala no espaço gráfico.  
- **Manejo de Eventos**: capturar entradas do teclado e reagir dinamicamente às ações do usuário.  
- **Programação de Jogos**: lógica de movimentação, interação com objetos e controle de estados.  

---

## ✨ Funcionalidades Implementadas

### 🔧 Estrutura do Jogo
- **Mapa do Jogo**: gerado a partir de um arquivo `.ber` contendo informações do layout do mapa.  
- **Movimentação do Personagem**: o jogador pode se mover para cima, baixo, esquerda e direita.  
- **Objetivos do Jogo**:  
  - Coletar todos os itens presentes no mapa.  
  - Alcançar a saída para vencer o jogo.  
- **Interatividade**: o personagem interage com diferentes elementos no mapa, como paredes, itens e a saída.  

### 🖼️ Gráficos e Interface
- **Renderização Gráfica**: 
  - Uso da MiniLibX para desenhar elementos do jogo, como o personagem, o chão, paredes e colecionáveis.  
- **Gerenciamento de Eventos**: 
  - Captura de teclas pressionadas para controlar o personagem.  
  - Fechamento da janela ao clicar no botão de fechar.  

### 🚨 Tratamento de Erros
- Verificação de erros no arquivo `.ber` (mapa).  
- Tratamento de mapas inválidos (exemplo: sem saída, sem itens ou com paredes incorretas).  
- Controle de eventos inesperados para evitar falhas.  

---

## 🛠️ Ferramentas e Padrões

| Ferramenta/Padrão      | Descrição                                               |
|-------------------------|-------------------------------------------------------|
| **GIT**                | Controle de versão para organizar o desenvolvimento do código. |
| **Makefile**           | Automação da compilação e geração do executável.       |
| **Norminette**         | Garantia de conformidade com os padrões de estilo da 42. |

---

