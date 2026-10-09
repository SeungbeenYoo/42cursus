# 1. 결과물 라이브러리 이름 지정 (NAME 변수)
NAME = libft.a

# 2. 컴파일러 및 옵션 설정
CC = cc
CFLAGS = -Wall -Wextra -Werror

# 3. 작성할 .c 소스 파일 목록 (필요한 함수를 여기에 추가하시면 됩니다)
SRCS = ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_strlen.c

# 4. .c 파일들을 기반으로 만들어질 .o 오브젝트 파일 목록
OBJS = $(SRCS:.c=.o)

# 기본 규칙: make 입력 시 all -> $(NAME) 순서로 실행
all: $(NAME)

# libft.a 라이브러리 생성 규칙
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# .c 파일을 .o 파일로 컴파일하는 패턴 규칙
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# clean: 오브젝트 파일(.o) 삭제
clean:
	rm -f $(OBJS)

# fclean: 오브젝트 파일(.o) 및 libft.a 완전 삭제
fclean: clean
	rm -f $(NAME)

# re: 완전히 지웠다가 다시 처음부터 빌드
re: fclean all

# 타겟 이름과 동일한 파일이 폴더 내에 존재할 때 충돌 방지
.PHONY: all clean fclean re
