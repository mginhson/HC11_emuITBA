CC := gcc
CFLAGS := -Wall
OUTPUT := cpu.a
INTERFACE := cpu.h
OBJECT_FILES := cpu_logic/cpu.o cpu_logic/hc11.o


cpu_all: ${OUTPUT} 
	

${OUTPUT}: ${OBJECT_FILES} ${INTERFACE}
	ar cr cpu.a ${OBJECT_FILES}

cpu_logic/cpu.o: cpu_logic/cpu.c private_headers/cpu_definitions.h
	${CC} -c cpu_logic/cpu.c -o cpu_logic/cpu.o ${CFLAGS}

cpu_logic/hc11.o: cpu_logic/hc11.c private_headers/cpu_definitions.h
	${CC} -c cpu_logic/hc11.c -o cpu_logic/hc11.o ${CFLAGS}

cpu_clean:
	rm -f ${OBJECT_FILES}

