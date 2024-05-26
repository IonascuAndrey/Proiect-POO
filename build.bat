@rem Script de compilare pentru Proiectul 2
@REM @echo off
g++ -c -o obj/Book.o src/Book.cpp
g++ -c -o obj/Magazine.o src/Magazine.cpp
g++ -c -o obj/EBook.o src/EBook.cpp
g++ -c -o obj/ClassicBook.o src/ClassicBook.cpp
g++ -c -o obj/AudioBook.o src/AudioBook.cpp
g++ -c -o obj/main.o main.cpp
g++ -o main obj/main.o obj/Book.o obj/Magazine.o obj/EBook.o obj/ClassicBook.o obj/AudioBook.o
@REM main.exe < input.txt
pause
@REM @echo on