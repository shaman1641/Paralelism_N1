Первое задание по паралелиму 
Коспиляция через make файл: 
1) Для Double
  make double
2) Для Float
  make float
Коспиляция через CMake файл:
cmake CMakeCache.txt 
1) Для Double
  cmake -DUSE_DOUBLE=ON
2) Для Float
  cmake -DUSE_DOUBLE=OFF
cmake --build ./  
