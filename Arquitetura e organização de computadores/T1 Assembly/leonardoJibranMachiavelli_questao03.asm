# Disciplina: Arquitetura e Organização de Processadores
# Atividade: Avaliação 01 – Programação em Linguagem de Montagem
# Programa 03
# Grupo: - Leonardo Jibran Machiavelli
#    	

.data

	T1 : .asciz  "Informe valor de Mx: "
	T2 : .asciz  "Informe valor de My: "
	T3 : .asciz  "\nDeseja manter ou inverter os valores de posição na memória? \n\n"
	T4 : .asciz  "0 - Manter \n"
	T5 : .asciz  "1 - Inverter \n"
	T6 : .asciz  "\nValores apos operacao:\n"
	V_Mx : .asciz "Mx: "
	V_My : .asciz "My: "
	T7 : .asciz "\n"
	
	Mx: .word 0
	My: .word 0
	
.text

	la t4, Mx  # carrega o endereço de Mx em t4
	la t5, My  # carrega o endereço de My em t5

	addi a7, zero, 4
	la a0, T1
	ecall
	
	addi a7, zero, 5 # valor de Mx
	ecall
	add t0, zero, a0
	sw t0, 0(t4)

	addi a7, zero, 4
	la a0, T2
	ecall
	
	addi a7, zero, 5 # valor de My
	ecall
	add t1, zero, a0
	sw t1, 0(t5)
	
	addi a7, zero, 4 # exibe - Deseja manter ou inverter
	la a0, T3
	ecall
	
	addi a7, zero, 4 # exibe 0 - Manter
	la a0, T4
	ecall
	
	addi a7, zero, 4 # exibe 1 - Inverter
	la a0, T5
	ecall
	
	# escolha
	addi a7, zero, 5
	ecall
	add t3, zero, a0  # Move a escolha para t3
	
	beq t3, zero, naoTroca # se for 0 não troca
	sw t1, 0(t4)           
	sw t0, 0(t5)
	

	addi a7, zero, 4
	la a0, T6
	ecall

	# exibe mx
	addi a7, zero, 4
	la a0, V_Mx
	ecall
	# valor de mx
	lw a0, 0(t4)         
	addi a7, zero, 1
	ecall
	
	# exibe quebra de linha
	addi a7, zero, 4
	la a0, T7
	ecall

	# exibe my
	addi a7, zero, 4
	la a0, V_My
	ecall
	# valor de my
	lw a0, 0(t5)
	addi a7, zero, 1
	ecall

naoTroca: nop
	
	
	
	
	
	
	
	
	
	
	
	
	
	
