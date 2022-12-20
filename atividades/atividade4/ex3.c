/*
  Exercício 3
*/
// (...)

struct ponto
{
  float x, y;
};

struct ponto v1;
struct ponto *p1;
float distancia, *f;

// (...)

/*
  Considere a definição de variáveis a seguir e assinale com V as afirmações verdadeiras e com F as falsas:
  
  (F) Existem 3 variáveis declaradas no trecho de código apresentado: v1, ponto, distancia.
  (F) Tanto a variável distancia como a variável v1 são de tipos primitivos da linguagem C. 
  (V) A variável v1 pode conter as coordenadas de um ponto no plano bidimensional. 
  (F) Considerando os tipos de dados da struct ponto, podemos concluir que a variável
  v1 deve possuir exatamente 5 bytes nas implementações padrão de 32 bits da linguagem C. 
  (V) A instrução sizeof(struct ponto *) poderia responder adequadamente a questão indicada no item anterior.
*/
