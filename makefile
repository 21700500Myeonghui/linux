project_exe : 21500830.o 21700500.o main.o
	gcc -o project_exe 21500830.o 21700500.o main.o

21500830.o : 21500830.c
	gcc -c -o 21500830.o 21500830.c

21700500.o : 21700500.c
	gcc -c -o 21700500.o 21700500.c

main.o : main.c
	gcc -c -o main.o main.c

clean : 
	rm *.o project_exe
