# Disciplina: Arquitetura e Organização de Processadores
# Atividade: Avaliação 01 – Programação em Linguagem de Montagem
# Programa 04
# Grupo: - Leonardo Jibran Machiavelli
#        

.data

	T1 : .asciz  "Digite o primeiro valor: "
	T2 : .asciz  "Digite o segundo valor: "
	T3: .asciz "O máximo divisor comum é: "

.text

pergT1:
	#imprime Digite o primeiro valor
	addi a7, zero, 4
	la a0, T1
	ecall
	#le o valor
	addi a7, zero, 5 
	ecall
	add t0, zero, a0
	
	blez t0, pergT1  # valida se < ou = zero
	
pergT2:
	#imprime Digite o segundo valor
	addi a7, zero, 4
	la a0, T2
	ecall
	#le o valor
	addi a7, zero, 5
	ecall
	add t1, zero, a0
	
	blez t1, pergT2  # valida se < ou = zero
	
Loop: 
	beq t0, t1, Exit   # Se t0 for igual a t1 vai para exit
	
	bgt t0, t1, primeiro  # t0 for maior que t1 vai para primeiroMaior
	bgt t1, t0, segundo   # t1 for maior que t0 vai para segundoMaior

primeiro:
	sub t0, t0, t1      # Subtrai t1 de t0 (t0 = t0 - t1)
	j Loop              

segundo:
	sub t1, t1, t0      # Subtrai t0 de t1 (t1 = t1 - t0)
	j Loop              

Exit:
	addi a7, zero, 4   # Syscall 4: imprimir string
	la a0, T3          # Carrega o endereço da string T3 (mensagem de resultado) em a0
	ecall              # Chama a syscall para imprimir a mensagem
	
	addi a7, zero, 1   # Syscall 1: imprimir inteiro
	add a0, zero, t0   # Move o valor de t0 (resultado) para a0
	ecall              # Chama a syscall para imprimir o valor do resultado