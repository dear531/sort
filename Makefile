src	:=$(filter-out collect.c,$(wildcard *.c))
obj	:=$(src:.c=.o)

vpath	%.h ./
hpath	:= -I ./
CFLAGS	:=-Wall -g -c
CC	:=cc

default:collect a.out
a.out:$(obj)
	$(CC) $^ -o $@ 
$(obj):%.o:%.c
	$(CC) $(CFLAGS) $< -o $@ $(hpath)
collect:collect.c
	$(CC) $^ -o $@
clean:
	-rm -rf $(obj) collect.o
.PHONY:
	default all clean
