Первое задание по паралелиму 

Компиляция через make файл: 
1) Для Double 
>>make double 
2) Для Float
>>make float

Компиляция через CMake файл:
>>cmake CMakeCache.txt

1) Для Double
>>cmake -DUSE_DOUBLE=ON   
>>cmake --build ./  
2) Для Float
>>cmake -DUSE_DOUBLE=OFF   
>>cmake --build ./  
