# Disciplina: Arquitetura e Organização de Processadores
# Atividade: Avaliação 01 – Programação em Linguagem de Montagem
# Programa 01
# Grupo: - Leonardo Jibran Machiavelli
#

.data

	V1:.asciz "Digite o valor 1: "
	V2:.asciz "Digite o valor 2: "
	V3:.asciz "Digite o valor 3: "
	V4:.asciz "\n"

.text

 	addi a7, zero, 4 # Digite o valor 1 # Define a syscall 4 (escrever string)
	la a0, V1                           # Carrega o endereço da string V1 (solicita valor no registrador a0)
	ecall                               # Chama sistema para exibir a string V1
	
	addi a7, zero, 5 # valor 1          # Define syscall 5 (ler valor do input)
	ecall                               # Chama o sistema para ler valor
	add t0, zero, a0                    # Armazena o valor lido no registrador t0
	
	addi a7, zero, 4 # Digite o valor 2
	la a0, V2
	ecall
	
	addi a7, zero, 5 # valor 2
	ecall
	add t1, zero, a0
	
	addi a7, zero, 4 # Digite o valor 3
	la a0, V3
	ecall
	
	addi a7, zero, 5 #  valor 3
	ecall
	add t2, zero, a0
	
	addi a7, zero, 4 # \n
	la a0, V4
	ecall
	
	blt t0, t1, comparaValorSeTroca #se t0 = 12 < t1 = 10 ( false ), final: t0 = 10 e t1 = 12
	add t5, zero, t0       #copia o valor de t0 para registrador temporario t5
	add t0, zero, t1       #copia o valor t1 para t0
	add t1, zero t5        #armazena o valor de de t5 registro temporario para t1 valor original
	
	
comparaValorSeTroca:

	blt t0, t2, naoTroca #se t0 = 12 < t2 = 10 ( false ), final: t0 = 10 e t1 = 12
	add t5, zero, t0       #copia o valor de t0 para registrador temporario t5
	add t0, zero, t2       #copia o valor t2 para t0
	add t2, zero t5        #armazena o valor de de t5 registro temporario para t2 valor original

naoTroca:

	blt t1, t2, naoTrocaUltimo
	add t5, zero, t1
	add t1, zero, t2
	add t2, zero t5
	
naoTrocaUltimo:

	addi a7, zero, 4 # \n
	la a0, V4
	ecall
	
	addi a7, zero, 1 # syscall para imprimir um inteiro
	add a0, zero, t0 # move o valor de t0 para a0
	ecall            # imprime o valor de t0
	
	addi a7, zero, 4 # \n
	la a0, V4
	ecall
	
	addi a7, zero, 1
	add a0, zero, t1
	ecall
	
	addi a7, zero, 4 # \n
	la a0, V4
	ecall
	
	addi a7, zero, 1
	add a0, zero, t2
	ecall
	
	
