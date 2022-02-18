cmake_minimum_required(VERSION 3.20)
project(cplusplus-primer-plus)

set(CMAKE_CXX_STANDARD 14)

add_executable(workermi assets/ch14/workermi.cpp assets/ch14/workmi.cpp)

# 编程练习
# 第2章
add_executable(ex02-01 exercises/ch02/ex01.cpp)
add_executable(ex02-02 exercises/ch02/ex02.cpp)
add_executable(ex02-03 exercises/ch02/ex03.cpp)
add_executable(ex02-04 exercises/ch02/ex04.cpp)
add_executable(ex02-05 exercises/ch02/ex05.cpp)
add_executable(ex02-06 exercises/ch02/ex06.cpp)
add_executable(ex02-07 exercises/ch02/ex07.cpp)

# 第3章
add_executable(ex03-01 exercises/ch03/ex01.cpp)
add_executable(ex03-02 exercises/ch03/ex02.cpp)
add_executable(ex03-03 exercises/ch03/ex03.cpp)
add_executable(ex03-04 exercises/ch03/ex04.cpp)
add_executable(ex03-05 exercises/ch03/ex05.cpp)
add_executable(ex03-06 exercises/ch03/ex06.cpp)
add_executable(ex03-07 exercises/ch03/ex07.cpp)

# 第4章
add_executable(ex04-01 exercises/ch04/ex01.cpp)
add_executable(ex04-02 exercises/ch04/ex02.cpp)
add_executable(ex04-03 exercises/ch04/ex03.cpp)
add_executable(ex04-04 exercises/ch04/ex04.cpp)
add_executable(ex04-05 exercises/ch04/ex05.cpp)
add_executable(ex04-06 exercises/ch04/ex06.cpp)
add_executable(ex04-07 exercises/ch04/ex07.cpp)
add_executable(ex04-08 exercises/ch04/ex08.cpp)
add_executable(ex04-09 exercises/ch04/ex09.cpp)
add_executable(ex04-10 exercises/ch04/ex10.cpp)

# 第5章
add_executable(ex05-01 exercises/ch05/ex01.cpp)
add_executable(ex05-02 exercises/ch05/ex02.cpp)
add_executable(ex05-03 exercises/ch05/ex03.cpp)
add_executable(ex05-04 exercises/ch05/ex04.cpp)
add_executable(ex05-05 exercises/ch05/ex05.cpp)
add_executable(ex05-06 exercises/ch05/ex06.cpp)
add_executable(ex05-07 exercises/ch05/ex07.cpp)
add_executable(ex05-08 exercises/ch05/ex08.cpp)
add_executable(ex05-09 exercises/ch05/ex09.cpp)
add_executable(ex05-10 exercises/ch05/ex10.cpp)

# 第6章
add_executable(ex06-01 exercises/ch06/ex01.cpp)
add_executable(ex06-02 exercises/ch06/ex02.cpp)
add_executable(ex06-03 exercises/ch06/ex03.cpp)
add_executable(ex06-04 exercises/ch06/ex04.cpp)
add_executable(ex06-05 exercises/ch06/ex05.cpp)
add_executable(ex06-06 exercises/ch06/ex06.cpp)
add_executable(ex06-07 exercises/ch06/ex07.cpp)
add_executable(ex06-08 exercises/ch06/ex08.cpp)
add_executable(ex06-09 exercises/ch06/ex09.cpp)

# 第7章
add_executable(ex07-01 exercises/ch07/ex01.cpp)
add_executable(ex07-02 exercises/ch07/ex02.cpp)
add_executable(ex07-03 exercises/ch07/ex03.cpp)
add_executable(ex07-04 exercises/ch07/ex04.cpp)
add_executable(ex07-05 exercises/ch07/ex05.cpp)
add_executable(ex07-06 exercises/ch07/ex06.cpp)
add_executable(ex07-07 exercises/ch07/ex07.cpp)
add_executable(ex07-08-a exercises/ch07/ex08a.cpp)
add_executable(ex07-08-b exercises/ch07/ex08b.cpp)
add_executable(ex07-09 exercises/ch07/ex09.cpp)
add_executable(ex07-10 exercises/ch07/ex10.cpp)

# 第8章
add_executable(ex08-01 exercises/ch08/ex01.cpp)
add_executable(ex08-02 exercises/ch08/ex02.cpp)
add_executable(ex08-03 exercises/ch08/ex03.cpp)
add_executable(ex08-04 exercises/ch08/ex04.cpp)
add_executable(ex08-05 exercises/ch08/ex05.cpp)
add_executable(ex08-06 exercises/ch08/ex06.cpp)
add_executable(ex08-07 exercises/ch08/ex07.cpp)

# 第9章
add_executable(ex09-01 exercises/ch09/ex01/golf.cpp exercises/ch09/ex01/ex01.cpp)
add_executable(ex09-02 exercises/ch09/ex02.cpp)
add_executable(ex09-03 exercises/ch09/ex03.cpp)
add_executable(ex09-04 exercises/ch09/ex04/sales.cpp exercises/ch09/ex04/ex04.cpp)

# 第10章
add_executable(ex10-01 exercises/ch10/ex01.cpp)
add_executable(ex10-02 exercises/ch10/ex02.cpp)
add_executable(ex10-03 exercises/ch10/ex03/golf.cpp exercises/ch10/ex03/ex03.cpp)
add_executable(ex10-04 exercises/ch10/ex04/sales.cpp exercises/ch10/ex04/ex04.cpp)
add_executable(ex10-05 exercises/ch10/ex05/stack.cpp exercises/ch10/ex05/ex05.cpp)
add_executable(ex10-06 exercises/ch10/ex06.cpp)
add_executable(ex10-07 exercises/ch10/ex07.cpp)
add_executable(ex10-08 exercises/ch10/ex08/list.cpp exercises/ch10/ex08/ex08.cpp)

# 第11章
add_executable(ex11-01 exercises/ch11/ex01/vect.cpp exercises/ch11/ex01/ex01.cpp)
add_executable(ex11-02 exercises/ch11/ex02/vect.cpp exercises/ch11/ex02/ex02.cpp)
add_executable(ex11-03 exercises/ch11/ex03/vect.cpp exercises/ch11/ex03/ex03.cpp)
add_executable(ex11-04 exercises/ch11/ex04/mytime3.cpp exercises/ch11/ex04/ex04.cpp)
add_executable(ex11-05 exercises/ch11/ex05/stonewt.cpp exercises/ch11/ex05/ex05.cpp)
add_executable(ex11-06 exercises/ch11/ex06/stonewt.cpp exercises/ch11/ex06/ex06.cpp)
add_executable(ex11-07 exercises/ch11/ex07/complex0.cpp exercises/ch11/ex07/ex07.cpp)

# 第12章
add_executable(ex12-01 exercises/ch12/ex01/cow.hpp exercises/ch12/ex01/ex01.cpp)
add_executable(ex12-02 exercises/ch12/ex02/string2.cpp exercises/ch12/ex02/ex02.cpp)
add_executable(ex12-03 exercises/ch12/ex03/stock20.cpp exercises/ch12/ex03/ex03.cpp)
add_executable(ex12-04 exercises/ch12/ex04/stack.cpp exercises/ch12/ex04/ex04.cpp)
add_executable(ex12-05 exercises/ch12/ex05/queue.cpp exercises/ch12/ex05/ex05.cpp)
add_executable(ex12-06 exercises/ch12/ex06/queue.cpp exercises/ch12/ex06/ex06.cpp)

# 第13章
add_executable(ex13-01 exercises/ch13/ex01/classic.cpp exercises/ch13/ex01/ex01.cpp)
add_executable(ex13-02 exercises/ch13/ex02/classic.cpp exercises/ch13/ex02/ex02.cpp)
add_executable(ex13-03 exercises/ch13/ex03/dma.cpp exercises/ch13/ex03/ex03.cpp)
add_executable(ex13-04 exercises/ch13/ex04/vintageport.cpp exercises/ch13/ex04/ex04.cpp)

# 第14章
add_executable(ex14-01 exercises/ch14/ex01/winec.cpp exercises/ch14/ex01/ex01.cpp)
add_executable(ex14-02 exercises/ch14/ex02/winec.cpp exercises/ch14/ex02/ex02.cpp)
add_executable(ex14-03 exercises/ch14/ex03/queuetp.hpp exercises/ch14/ex03/ex03.cpp)
add_executable(ex14-04 exercises/ch14/ex04/person.hpp exercises/ch14/ex04/ex04.cpp)
add_executable(ex14-05 exercises/ch14/ex05/emp.h exercises/ch14/ex05/ex05.cpp)