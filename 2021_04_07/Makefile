cc = gcc
bin = hello
file_list = hello.o main.o

$(bin):$(file_list)
	$(cc) -o $@ $^
%.o:%.c
	$(cc) -c $<

.PHONY:clean
clean:
	rm -f $(file_list) $(bin)
