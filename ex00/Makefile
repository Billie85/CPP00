NAME	= megaphone

SRCS	= megaphone.cpp

OBJS		= $(SRCS:%.c=%.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(SRCS)
		$(CXX) $(CXXFLAGS) -o $@ $^ -lreadline

clean	:

fclean	: clean
	rm -f $(NAME)

re : fclean all