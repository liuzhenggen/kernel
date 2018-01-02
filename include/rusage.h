#pragma once

#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

void print_rusage(void)
{
    struct rusage usage;

    getrusage(RUSAGE_SELF, &usage);

    printf("rusage: user time=%d,%u&sys time=%d,%u"
           "&max rss=%d&shared rss=%d&data rss=%d&stack rss=%d"
           "&page reclaims=%d&page fault=%d&swap=%d"
           "&block input=%d&block output=%d"
           "&msg send=%d&msg rcv=%d"
           "&signal rev=%d"
           "&voluntary context switch=%d&involuntary=%d"
           "\n",
           usage.ru_utime.tv_sec, usage.ru_utime.tv_usec, usage.ru_stime.tv_sec, usage.ru_stime.tv_usec,
           usage.ru_maxrss, usage.ru_isrss, usage.ru_idrss, usage.ru_isrss,
           usage.ru_majflt, usage.ru_minflt, usage.ru_nswap,
           usage.ru_inblock, usage.ru_oublock,
           usage.ru_msgsnd, usage.ru_msgrcv,
           usage.ru_nsignals,
           usage.ru_nvcsw, usage.ru_nivcsw);
}