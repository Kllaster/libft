NAME			= libft.a
CC				= gcc
RM				= rm -f
LIB				= ar rc
MKDIR			= mkdir -p
DEBUG			= 0
ifeq ($(DEBUG), 1)
	DEBUG_FLAGS	= -fsanitize=address -g
else
	DEBUG_FLAGS = -march=native -O2 -flto -D_FORTIFY_SOURCE=2 -fpie
endif
PROTECT_FLAGS	= -fno-exceptions -fcf-protection=full -fstack-protector-all
COMMON_FLAGS	= -std=c99 -Wall -Wextra -Werror -Wfloat-equal -MMD -pipe
CFLAGS			= $(COMMON_FLAGS) $(DEBUG_FLAGS) $(PROTECT_FLAGS)

BIN_DIR			= bin/
SRC_DIR			= srcs
BUILD_DIR		= build
INC_DIR			= include

SRCS			= $(shell find $(SRC_DIR) -name "*.c")

OBJS			= $(notdir $(SRCS))
OBJS			:= $(subst $(SRC_DIR), $(BUILD_DIR), $(SRCS:%.c=%.o))
NAME			:= $(addprefix $(BIN_DIR), $(NAME))
DEPS			= $(OBJS:.o=.d)
VPATH			= $(SRC_DIR):$(INC_DIR):$(BUILD_DIR)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(MKDIR) $(dir $@)
				$(LIB) $(NAME) $(OBJS)
				ranlib $(NAME)

$(BUILD_DIR)/%.o: %.c
				$(MKDIR) $(dir $@)
				$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
				$(RM) $(OBJS)
				$(RM) $(DEPS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

-include		$(DEPS)
.PHONY:			all, clean, fclean, re