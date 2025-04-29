cmake_minimum_required(VERSION 3.30)
project(Cinema)

set(CMAKE_CXX_STANDARD 20)

add_executable(Cinema main.cpp
        Domain/User.cpp
        Domain/User.h
        Domain/Client.cpp
        Domain/Client.h
        Repository/Repository.cpp
        Repository/Repository.h
        Domain/Movies.cpp
        Domain/Movies.h
        Domain/Booking.cpp
        Domain/Booking.h
        Domain/Seat.cpp
        Domain/Seat.h
        Domain/Room.cpp
        Domain/Room.h
        Controllers/cinema.cpp
        Controllers/cinema.h)
