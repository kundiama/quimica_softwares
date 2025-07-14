
import os
os.system("cls")    
def semelhanca_atomica():
    prot1 = int(input("Número de protões do 1° elemento: "))
    neut1 = int(input("Número de neutrões do 1° elemento: "))
    prot2 = int(input("Número de protões do 2° elemento: "))
    neut2 = int(input("Número de neutrões do 2° elemento: "))

    if prot1 == prot2 and neut1 != neut2:
        print("Os elementos são isótopos.")
    elif (prot1 + neut1) == (prot2 + neut2):
        print("Os elementos são isóbaros.")
    elif neut1 == neut2 and prot1 != prot2:
        print("Os elementos são isótonos.")
    else:
        print("Os elementos não são isótopo, isóbaro ou isótono.")

def calcular_particulas():
    Z = int(input("Digite o número atômico (Z): "))
    A = int(input("Digite o número de massa (A): "))
    C = int(input("Digite a carga do átomo (C): "))
    print('')
    P = Z
    N = A - Z
    E = Z - C

    print("Número de protões:", P)
    print("Número de neutrões:", N)
    print("Número de eletrões:", E)
    
    print("")
while True :
    print("======== Projecto de TLP ========")
    print("Nome:Elias Timóteo Manuel   Nº14\nTurma:GSI10AM")
    print("=================================")
    print("Escolha uma opção:")
    print("1 - Semelhança Atómica")
    print("2 - Calcular partículas")
    print("3 - Sair")
    print('=================================')
    op = int(input("Opção: "))
    os.system("cls")
    if op == 1:
        semelhanca_atomica()
    elif op == 2:
        calcular_particulas()
    elif op == 3:
        print("Programa finalizado!")
        break
    else:
        print("Opção incorreta!")