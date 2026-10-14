# ♟️ Terminal Chess Game em C

Bem-vindo ao repositório do **Terminal Chess**, um jogo de xadrez completo desenvolvido em linguagem C para execução em linha de comandos (terminal/consola).

## 📖 Sobre o Jogo de Xadrez
O xadrez é um jogo de tabuleiro estratégico para dois jogadores, disputado num tabuleiro quadriculado de 64 casas (8x8). O objetivo principal é dar o **xeque-mate** ao rei do adversário, colocando-o numa posição onde a captura seja inevitável e não haja movimentos legais para escapar.

Cada jogador inicia com 16 peças:
* 1 Rei 
* 1 Dama (Rainha)
* 2 Torres
* 2 Bispos
* 2 Cavalos
* 8 Peões

As peças movem-se de acordo com regras estritas e próprias de cada tipo, exigindo planeamento tático, lógica e antecipação dos movimentos do oponente.

## 🔗 Jogue Online / Demonstração
Pode experimentar uma versão interativa e visual deste conceito de xadrez diretamente no seu navegador através do seguinte link de demonstração:
👉 [Aceder à Demonstração Online do Jogo de Xadrez](https://lichess.org/) *(substitua este link pelo seu projeto publicado ou versão web)*

## 🚀 Como Compilar e Executar o Código Localmente

1. Certifique-se de que tem um compilador de C instalado (como o `gcc`).
2. Clone este repositório ou descarregue o ficheiro de código fonte (`xadrez.c`).
3. Abra o terminal na pasta do projeto e execute o comando de compilação:
   ```bash
   gcc xadrez.c -o xadrez
