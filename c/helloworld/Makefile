# binary name
APP = test

# all source are stored in SRCS-y
SRCS-y := main.c

# 去掉-fsanitize=address ， 因为在不同的gcc中可能会出现误报，需要时再各个例程中单独打开
# -no-pie关闭地址随机化(ASLR（Address space layout randomization）是一种针对缓冲区溢出的安全保护技术，
# 通过对堆、栈、共享库映射等线性区布局的随机化，防止攻击者直接定位攻击代码位置，达到阻止溢出攻击的目的。)
CFLAGS += -g -O0 -no-pie
LDFLAGS +=
LDLIBS +=

.PHONY: all
all: build

.PHONY: build
build: ${APP}

${APP}: ${SRCS-y}
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ ${SRCS-y} ${LDLIBS}

.PHONY: clean
clean:
	rm -rf ${APP}
