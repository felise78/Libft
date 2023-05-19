NAME = libft.a

CC = clang

CFLAGS = -Wall -Werror -Wextra -g

RM = rm -rf

SRC = ft_atoi.c \
      ft_itoa.c \
      ft_putnbr_fd.c \
      ft_strlcpy.c \
      ft_tolower.c \
      ft_bzero.c \
      ft_memchr.c \
      ft_putstr_fd.c \
      ft_strlen.c \
      ft_toupper.c \
      ft_calloc.c \
      ft_memcmp.c \
      ft_split.c \
      ft_strmapi.c \
      ft_isalnum.c \
      ft_memcpy.c \
      ft_strchr.c \
      ft_strncmp.c \
      ft_isalpha.c \
      ft_memmove.c \
      ft_strdup.c \
      ft_strnstr.c \
      ft_isascii.c \
      ft_memset.c \
      ft_striteri.c \
      ft_strrchr.c \
      ft_isprint.c \
      ft_putendl_fd.c \
      ft_strlcat.c \
      ft_substr.c \
      ft_isdigit.c \
      ft_putchar_fd.c \
      ft_strjoin.c \
      ft_strtrim.c \

FILES_B =   ft_lstnew.c \
            ft_lstadd_front.c \
            ft_lstsize.c \
            ft_lstlast.c \
            ft_lstadd_back.c \
            ft_lstdelone.c \
            ft_lstclear.c \
            ft_lstiter.c \
            ft_lstmap.c \
      
OBJ = $(SRC:.c=.o)

BONUS_OBJS = $(FILES_B:.c=.o)

AR = ar rcs #rcs replace create sort

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus : $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : 	fclean all

.PHONY: bonus all clean fclean re
