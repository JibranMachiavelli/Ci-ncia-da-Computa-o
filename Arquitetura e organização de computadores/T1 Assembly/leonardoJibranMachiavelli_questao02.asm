# Disciplina: Arquitetura e Organização de Processadores
# Atividade: Avaliação 01 – Programação em Linguagem de Montagem
# Programa 02
# Grupo: - Leonardo Jibran Machiavelli
#    	 

.data
    V1: .asciz "Informe primeiro valor: "
    V2: .asciz "Informe segundo valor: "

.text

    # exibe a mensagem Informe primeiro valor
    addi a7, zero, 4 
    la a0, V1
    ecall
    
    # le o primeiro valor
    addi a7, zero, 5 
    ecall
    mv t0, a0

    # exibe a mensagem Informe segundo valor
    addi a7, zero, 4 
    la a0, V2
    ecall
    
    # le o segundo valor
    addi a7, zero, 5 
    ecall
    mv t1, a0

    li t2, 0   # acumulador
    mv t3, t1  # contador

Multiplicacao:
    beqz t3, FimMultiplicacao  # t3 for 0 sai do loop
    add t2, t2, t0             # t2 = t2 + t0, soma em cada passagem
    addi t3, t3, -1            # contador -1
    j Multiplicacao

FimMultiplicacao:
    
    mv a0, t2   	# o resultado vai para a0
    addi a7, zero, 1
    ecall
