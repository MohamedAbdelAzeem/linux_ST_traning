CC      = gcc
CFLAGS  = -Wall -g
RM      = rm -f



#  $<: The name of the first prerequisite.
#  $@: The file name of the target of the rule.
%: %.c
	$(CC) $(CFLAGS) $< -o $@.out

clean:
	rm -f *.o *.out
	rm -f *.i
	rm -f *.s
	rm -f *.map

