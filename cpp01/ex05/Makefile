NAME := SedIs4Losers

CC := c++
CFLAGS := -Wall -Wextra -Werror

OBJDIR := .objs

SRCS := $(shell find . -type f -name '*.cpp' -not -path './.git/*' -not -path './$(OBJDIR)/*')
OBJS := $(patsubst ./%.cpp,$(OBJDIR)/%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: ./%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all