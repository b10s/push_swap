NAME := push_swap

all: $(NAME)

# TODO remove test.c ?
$(NAME):
	cc -o push_swap push_swap.c utils.c swap.c push.c rotate.c reverse_rotate.c test.c core.c sort.c args.c

re: clean all

clean:
	@rm -f push_swap
	@find . -name '*.swp' -delete
