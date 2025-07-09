# FCG - TrabalhoFinal
### Arthur Lopes Sauer e Murilo Sterchile

A ideia do jogo é levar o monstro do início da plataforma até o planeta no final do mapa, sem encostar nos obstáculos(coelhos).

### Constribuições

|                             |  Arthur       |     Murilo    |
|-----------------------------|---------------|---------------|
| Malhas poligonais complexas |       x        |       x        |
| Transformações geométricas controladas pelo usuário | x | x |
| Câmera livre e câmera look-at  | | x |
| Instâncias de objetos  |x |x |
| Três tipos de testes de intersecção |x | |     
| Modelos de Interpolação de Phong e Gouraud |x |x |
| Modelos de Iluminação Difusa e Blinn-Phong | |x |       
| Mapeamento de texturas em todos os objetos | x| x|
| Movimentação com curva Bézier cúbica | | x|
| Animações baseadas no tempo ($\Delta t$) | x | x | 

O ChatGPT foi utilizado para resolver alguns erros encontrados, e também para dar o direcionamento em alguns requisitos, experimentamos utiliza-lo criando algo do zero, porém 
ele não se integrava corretamente com o restante do código na maioria das vezes.

No desenvolvimento, separamos alguns requisitos para cada um, e fomos adaptando conforme as necessidades que surgiram, então ambos contribuíram ao menos um pouco para cada requisito
### Malhas
Objetos como: Monstro, coelho, cubo, esfera.
### Transformações geométricas
Movimentação da câmera, personagem(monstro), obstáculos cúbicos. Esfera na movimentação de bezier, planeta e sky-box.
### Câmeras
Implementação da câmera livre e look-at.
### Instâncias
Cubos foram utilizados para fazer o chão, parede e obstáculos.
### Intersecção
Foram implemetadas as seguintes colisões: cubo-cubo, cubo-plano, cubo-esfera
### Interpolação
Aplicação da interpolação de Blinn-Phong no sky-box.
### Iluminação
Iluminação difusa em objetos como chão, parede, obtáculo cúbico, planeta etc. Iluminação de phong aplicada nos coelhos e monstro.
### Texturas
Aplicação de textura em todos os objetos, de forma que haja pouca ou nenhuma distorção. Foram utilizadas quatro texturas distintas.
### Bézier
Curva de Bézier cúbica no fim do mapa.
### Animações
Animações baseadas no tempo da curva de Bézier, monstro e obstáculos cúbicos.


## Imagens do jogo
![image](https://github.com/user-attachments/assets/e217ed44-b29b-45d1-bac7-08ffa6b0f262)
![image](https://github.com/user-attachments/assets/b1fdd056-37de-4509-8eb0-8a12a13cd47e)


### Manual 
W, A, S, D -> Movimentações do monstro<br>
T -> Movimentação das caixas (movimentação vertical)<br>
F, L -> Mudança de câmera  <Br>
Shift -> Aumenta velocidade do monstro<br>
Botão esquerdo mouse -> Muda a direção da câmera livre<br>

### Execução 
Para rodar o Compilado Binário, ir até a pasta 'FCG-TrabalhoFinal\bin\Debug'. Ali voce vai encontrar o arquivo main.exe, só clicar que o jogo irá abrir
