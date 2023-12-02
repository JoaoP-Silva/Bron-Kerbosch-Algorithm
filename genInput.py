import random

def gerar_grafo(vertices, arestas):
  """
  Gera um grafo com vertices vértices e arestas arestas.

  Args:
    vertices: O número de vértices do grafo.
    arestas: O número de arestas do grafo.

  Returns:
    Um grafo representado por uma matriz de adjacência.
  """

  grafo = [[False] * vertices for _ in range(vertices)]

  for _ in range(arestas):
    v1 = random.randint(0, vertices - 1)
    v2 = random.randint(0, vertices - 1)

    while v1 == v2:
      v2 = random.randint(0, vertices - 1)

    grafo[v1][v2] = True
    grafo[v2][v1] = True

  return grafo


def main():
  """
  Função principal.
  """

  nome_arquivo = input("Nome do arquivo de saída: ")
  vertices = int(input("Número de vértices: "))
  arestas = int(input("Número de arestas: "))

  grafo = gerar_grafo(vertices, arestas)

  with open(nome_arquivo, "w") as f:
    f.write(f"{vertices} {arestas}\n")
    for i in range(vertices):
      for j in range(i, vertices):
        if grafo[i][j]:
          f.write(f"{i + 1} {j + 1}\n")


if __name__ == "__main__":
  main()