// dummied source from openpli-enigma2
#ifndef __wrappers_h
#define __wrappers_h

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <netdb.h>

#include <vector>
#include <string>
#include <sys/select.h>

ssize_t singleRead(int fd, void *buf, size_t count);
ssize_t timedRead(int fd, void *buf, size_t count, int initialtimeout, int interbytetimeout);
ssize_t readLine(int fd, char** buffer, size_t* bufsize);
ssize_t writeAll(int fd, const void *buf, size_t count);
int Select(int maxfd, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout);
int Connect(const char *hostname, int port, int timeoutsec);

#endif