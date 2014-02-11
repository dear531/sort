src	:=$(wildcard *.c)
obj	:=$(src:.c=.o)

vpath	%.h ./
hpath	:= -I ./
CFLAGS	:=-Wall -g -c
CC	:=cc

a.out:$(obj)
	$(CC) $^ -o $@ 
$(obj):%.o:%.c
	$(CC) $(CFLAGS) $< -o $@ $(hpath)
clean:
	-rm -rf $(obj)
.PHONY:
	all clean
