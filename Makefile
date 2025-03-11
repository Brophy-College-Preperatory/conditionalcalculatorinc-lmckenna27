CC = clang
CFLAGS = -g -Wno-everything -pthread -lm

SRCS = calculator.c
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: main

%.d: %.c
	@$(CC) -MM $(CFLAGS) $< -MT $(@:.d=.o) > $@

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

main-debug: $(OBJS)
	$(CC) $(CFLAGS) -O0 $(OBJS) -o $@

clean:
	rm -f $(OBJS) $(DEPS) main main-debug