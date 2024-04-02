@rem Script de compilare pentru Proiectul 1
@echo off
g++ -c -o obj/Bike.o src/Bike.cpp
g++ -c -o obj/BMX.o src/BMX.cpp
g++ -c -o obj/City_Bike.o src/City_Bike.cpp
g++ -c -o obj/Customer.o src/Customer.cpp
g++ -c -o obj/E_Bike.o src/E_Bike.cpp
g++ -c -o obj/Mechanic.o src/Mechanic.cpp
g++ -c -o obj/MTB.o src/MTB.cpp
g++ -c -o obj/Parking.o src/Parking.cpp
g++ -c -o obj/Race_Bike.o src/Race_Bike.cpp
g++ -c -o obj/Rental.o src/Rental.cpp
g++ -c -o obj/Tandem_Bike.o src/Tandem_Bike.cpp
g++ -c -o obj/User.o src/User.cpp
g++ -c -o obj/main.o main.cpp
g++ -o main obj/main.o obj/Bike.o obj/BMX.o obj/City_Bike.o obj/Customer.o obj/E_Bike.o obj/Mechanic.o obj/MTB.o obj/Parking.o obj/Race_Bike.o obj/Rental.o obj/Tandem_Bike.o obj/User.o
main.exe
pause
@echo on