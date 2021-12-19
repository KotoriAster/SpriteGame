@echo off
 
if exist *.o (
  echo 1
  del *.o 
  del *.exe
) else (
  gcc -c *.c
  g++ -c *.cpp
  g++ *.o -lgdi32 -lole32 -loleaut32 -luuid -lwinmm -lmsimg32 -o sprite.exe
)


