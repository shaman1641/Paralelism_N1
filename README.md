Первое задание по паралелиму \n
Коспиляция через make файл: \n
1) Для Double \n
>>make double \n
2) Для Float
>>make float
Коспиляция через CMake файл:
>>cmake CMakeCache.txt

1) Для Double
>>cmake -DUSE_DOUBLE=ON
2) Для Float
>>cmake -DUSE_DOUBLE=OFF

>>cmake --build ./  
