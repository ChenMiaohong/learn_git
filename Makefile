LDFLAGS += -Wall -std=gnu99
SRCS     = $(wildcard *.c)
OBJS     = $(patsubst %.c, %.o, $(SRCS))
TARGETS  = $(SRCS:%.c=%)



all : $(TARGETS)

$(TARGETS): %: %.o
	$(CC) $(LDFLAGS)  -o $@ $<

$(OBJS) : %.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<


clean :
	@rm -rf $(TARGETS) $(OBJS)
