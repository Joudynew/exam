int count = 0;
int max_fd = 0;
int ids[65536];
char *msgs[65536];
fd_set rfds, afds, wfds;
char buf_read[1001];
char buf_write[42];

