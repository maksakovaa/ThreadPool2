#pragma once

#include "BlockedQueue.h"

void taskFunc(int id, int delay);
typedef std::function<void()> task_type;
typedef void (*FuncType) (int, int);

class ThreadPool
{
public:
    ThreadPool();
    void start();
    void stop();
    void push_task(FuncType f, int id, int arg);
    void threadFunc(int qindex);
private:
    int m_thread_count;
    std::vector<std::thread> m_threads;
    std::vector<BlockedQueue<task_type>> m_thread_queues;
    int m_index;
};