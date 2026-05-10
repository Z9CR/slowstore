# 编译选项
CC      = gcc
CFLAGS  = -Wall -Wextra -Iinclude
TARGET  = ./build/slowstore

# 源神
SRCDIR  = src
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))

# 滚(向)目(标)
$(TARGET): $(OBJECTS)
	-mkdir ./build
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理FVV
.PHONY: clean
clean:
	-rm -rf ./build/* 
	-rm ./src/*.o


