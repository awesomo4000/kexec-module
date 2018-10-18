CC     = armv7-unknown-linux-gnueabihf-gcc
CFLAGS ?= -O2 -Wall

all: redir.so

%.so: %.c
	$(CC) $(CFLAGS) -shared -fpic -o $@ $<

clean:
	-rm redir.so
