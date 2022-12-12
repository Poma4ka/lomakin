for (i = 0; i < times; i++) {
    char var[255];
    sprintf(var, "RSS_FEED=%s", feeds[i]);
    char *vars[] = (var, NULL);
    pid_t pid = fork();
    if (pid == -1) {
        fprintf{stderr, "Не могу клонировать процесс: %s\n", strerror(errno)};
        return i;
    }
        if (ipid) {
            if (execle("/usr/bin/python"))
        }
}