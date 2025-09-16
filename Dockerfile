# Используем официальный образ с GCC
FROM gcc:12.2.0

# Устанавливаем Doxygen и другие утилиты
RUN apt-get update && apt-get install -y doxygen graphviz

# Копируем все исходные файлы в контейнер
COPY . /usr/src/myapp

# Устанавливаем рабочую директорию
WORKDIR /usr/src/myapp

# Компилируем программу и тесты
RUN g++ -c fraction.cpp -o fraction.o
RUN g++ main.cpp fraction.o -o fraction_app
RUN g++ test.cpp fraction.o -o test_app

# Генерируем документацию
RUN doxygen Doxyfile

# Команда по умолчанию при запуске контейнера - запуск тестов
CMD ["./test_app"]
