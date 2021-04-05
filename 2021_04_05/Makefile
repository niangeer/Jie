cc = gcc
bin = pro_bar 
file_list = pro_bar.o test.o

$(bin):$(file_list)
	$(cc) -o $@ $^
%.o:%.c
	$(cc) -c $<

.PHONY:clean
clean:
	rm -f $(file_list) $(bin)
