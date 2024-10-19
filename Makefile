NAME := push_swap

all: $(NAME)

$(NAME):
	cc -o push_swap push_swap.c utils.c swap.c

re: clean all

clean:
	@rm -f push_swap
