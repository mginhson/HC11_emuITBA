CC := gcc
CFLAGS := -Wall
EXEC_NAME := hc11
MODULES := cpu
OBJECT_FILES := main.o cpu/cpu.a


all: ${EXEC_NAME} 

${EXEC_NAME}: ${OBJECT_FILES} ${MODULES} 
	${CC} -o ${EXEC_NAME} ${OBJECT_FILES} ${CFLAGS}

main.o: main.c
	${CC} -c main.c ${CFLAGS}

cpu/cpu.a: 
	make -f cpu/cpu_Makefile.mk cpu_all

clean:
	rm -f ${OBJECT_FILES} ${EXEC_NAME}
	make -f cpu/cpu_Makefile.mk cpu_clean