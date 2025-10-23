// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     pid_t id = fork();

//     if (id == 0)
//     {
//         int cnt = 5;
//         printf("id=%d\n", id);
//         while (--cnt)
//         {
//             printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//             sleep(1);
//         }
//         exit(0);
//     }
//     else if (id > 0)
//     {
//         int cnt = 5;
//         printf("id=%d\n", id);
//         while (--cnt)
//         {
//             printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//             sleep(1);
//         }
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     int cnt = 1;

//     pid_t id = fork();

//     if (id == 0)
//     {
//         cnt = 10;
//         printf("child: %d, addr: %p\n", cnt, &cnt);
//         exit(0);
//     }
//     else if (id > 0)
//     {
//         cnt = 20;
//         printf("father: %d, addr: %p\n", cnt, &cnt);
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     int cnt = 1;

//     pid_t id = fork();

//     if (id > 0)
//     {
//         cnt = 20;
//         printf("father: %d, addr: %p\n", cnt, &cnt);
//     }
//     else if (id == 0)
//     {
//         printf("child: %d, addr: %p\n", cnt, &cnt);
//         exit(0);
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     printf("pid: %d\n", getpid());
//     printf("ppid: %d\n", getppid());
//     sleep(50);
//     chdir("/");
//     printf("chdir done\n");
//     sleep(100);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// int main()
// {
//     while(true);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>

// int main()
// {
//     int x = 0;
//     scanf("%d", &x);
//     printf("x=%d\n", x);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>

// int main()
// {
//     int cnt = 5;
//     while (cnt--)
//     {
//         printf("hello world!, pid:%d\n", getpid());
//         sleep(3);
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     pid_t id = fork();
//     if (id == 0)
//     {
//       printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//       exit(0);
//     }
//     else if (id > 0)
//     {
//       sleep(1);
//       printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//     }
//     else
//     {
//       printf("fork error!\n");
//     }
//     while (true);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     pid_t id = fork();
//     if (id == 0)
//     {
//       printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//       sleep(3);
//     }
//     else if (id > 0)
//     {
//       sleep(1);
//       printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//     }
//     else
//     {
//       printf("fork error!\n");
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>

// int global_uninit_variable;
// int global_init_variable = 0;

// int main()
// {
//     const char *static_data = "hello world";
//     static int static_uninit_variable;
//     static int static_init_variable = 0;
//     int* heap_space = (int*)malloc(sizeof(int));
//     int* heap_space_up = (int*)malloc(sizeof(int));
//     int* heap_space_upup = (int*)malloc(sizeof(int));
//     int stack_space = 0;
//     int stack_space_down = 0;
//     int stack_space_downdown = 0;

//     printf("local: %s, addr: %p\n", static_data, static_data);
//     printf("global uninit: %d, addr: %p\n", global_uninit_variable, &global_uninit_variable);
//     printf("global init: %d, addr: %p\n", global_init_variable, &global_init_variable);
//     printf("static uninit: %d, addr: %p\n", static_uninit_variable, &static_uninit_variable);
//     printf("static init: %d, addr: %p\n", static_init_variable, &static_init_variable);
//     printf("heap space: addr: %p\n", heap_space);
//     printf("heap space up: addr: %p\n", heap_space_up);
//     printf("heap space upup: addr: %p\n", heap_space_upup);
//     printf("stack space: addr: %p\n", &stack_space);
//     printf("stack space down: addr: %p\n", &stack_space_down);
//     printf("stack space downdown: addr: %p\n", &stack_space_downdown);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// int main(){
//     return 23;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     for (int i = 0; i < 200; i++)
//     {
//         printf("err[%d]: %s\n", i, strerror(i));
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>

// int main()
// {
//     // printf("hello world!\n"); // 立刻打印出来
//     printf("hello world!");   // 等待3秒当程序退出时才打印出来
//     sleep(3);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>

// int main()
// {
//     printf("hello world!");
//     fflush(stdout);
//     sleep(3);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     printf("Hello World!");
//     exit(0);
//     // _exit(0);
//     // abort();

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main()
// {
//     pid_t id = fork();
//     if (id == 0)
//     {
//         printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//         sleep(3);
//         exit(0);
//     }
//     else if (id > 0)
//     {
//         printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//         sleep(5);
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     pid_t wait_id = wait(NULL);
//     if (wait_id == -1)
//     {
//         printf("wait error!\n");
//     }
//     else
//     {
//         printf("wait success, wait_id=%d\n", wait_id);
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main(){
//     pid_t id = fork();
//     if (id == 0)
//     {
//         // 正常退出
//         printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//         sleep(3);
//         exit(0);
//         // exit(23);

//         // 异常退出
//         // int* p = NULL;
//         // *p = 100;
//     }
//     else if (id > 0)
//     {
//         printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//         sleep(5);
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     int status = 0;
//     pid_t wait_id = waitpid(id, &status, 0);
//     if (wait_id == -1)
//     {
//         printf("waitpid error!\n");
//     }
//     else
//     {
//         if (WIFEXITED(status))
//         {
//             printf("child exit normally, exit code=%d\n", WEXITSTATUS(status));
//         }
//         else
//         {
//             printf("child exit abnormally\n");
//         }
//         printf("wait success, ret: %d, exit signal: %d, exit code: %d\n", wait_id, status&0x7F, (status>>8)&0xFF);
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/wait.h>
// #include <stdbool.h>

// int main()
// {
//     pid_t id = fork();
//     if (id == 0)
//     {
//         printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//         sleep(6);
//         exit(0);
//     }
//     else if (id > 0)
//     {
//         printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     int status = 0;
//     while (true)
//     {
//         pid_t wait_id = waitpid(id, &status, WNOHANG);
//         if (wait_id == -1)
//         {
//             printf("waitpid error!\n");
//             break;
//         }
//         else if(wait_id == 0)
//         {
//             printf("child process has not exited yet, continue to wait...\n");
//             sleep(1);
//             continue;
//         }
//         else
//         {
//             if (WIFEXITED(status))
//             {
//                 printf("child exit normally, exit code=%d\n", WEXITSTATUS(status));
//             }
//             else
//             {
//                 printf("child exit abnormally\n");
//             }
//             break;
//         }
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/wait.h>
// #include <stdbool.h>

// #define MAX_TASKS 100

// typedef void (*TaskFunc)(); // 函数指针类型定义

// TaskFunc task_list[MAX_TASKS] = {NULL}; // 任务函数指针数组
// int task_count = 0;                     // 任务数量

// void Task1() // 任务函数1
// {
//     printf("Task1 executed\n");
// }

// void Task2() // 任务函数2
// {
//     printf("Task2 executed\n");
// }

// void Task3() // 任务函数3
// {
//     printf("Task3 executed\n");
// }

// void AddTask(TaskFunc func) // 添加任务函数到列表
// {
//     if (task_count < MAX_TASKS)
//     {
//         task_list[task_count++] = func;
//     }
// }

// void Tasks() // 执行所有任务函数
// {
//     for (int i = 0; i < task_count; i++)
//     {
//         task_list[i]();
//     }
// }

// void InitTasks() // 初始化任务列表
// {
//     AddTask(Task1);
//     AddTask(Task2);
//     AddTask(Task3);
// }

// int main()
// {
//     pid_t id = fork();
//     if (id == 0)
//     {
//         printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//         sleep(6);
//         exit(0);
//     }
//     else if (id > 0)
//     {
//         printf("father: pid:%d, ppid:%d\n", getpid(), getppid());
//     }
//     else
//     {
//         printf("fork error!\n");
//     }

//     int status = 0;
//     InitTasks();
//     while (true)
//     {
//         pid_t wait_id = waitpid(id, &status, WNOHANG);
//         if (wait_id == -1)
//         {
//             printf("waitpid error!\n");
//             break;
//         }
//         else if (wait_id == 0)
//         {
//             printf("child process has not exited yet, continue to wait...\n");
//             Tasks();
//             sleep(1);
//             continue;
//         }
//         else
//         {
//             if (WIFEXITED(status))
//             {
//                 printf("child exit normally, exit code=%d\n", WEXITSTATUS(status));
//             }
//             else
//             {
//                 printf("child exit abnormally\n");
//             }
//             break;
//         }
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main()
// {
//     for (int i = 0; i < 5; ++i)
//     {
//         pid_t id = fork();
//         if (id == 0)
//         {
//             printf("child: pid:%d, ppid:%d\n", getpid(), getppid());
//             if (i == 0)
//             {
//                 printf("0 ----------------------------------------\n");
//                 execlp("ls", "ls", "-l", "-F", NULL);
//                 exit(1);
//             }
//             else if (i == 1)
//             {
//                 printf("1 ----------------------------------------\n");
//                 execl("/usr/bin/bash", "bash", "./41Other.sh", NULL);
//                 exit(2);
//             }
//             else if (i == 2)
//             {
//                 printf("2 ----------------------------------------\n");
//                 char *const tmp_argv[] = {
//                     "ls",
//                     "-l",
//                     "-F",
//                     NULL};
//                 execvp("ls", tmp_argv);
//                 exit(3);
//             }
//             else if (i == 3)
//             {
//                 printf("3 ----------------------------------------\n");
//                 char *const tmp_argv[] = {
//                     "python3",
//                     "./41Other.py",
//                     NULL};
//                 execv("/usr/bin/python3", tmp_argv);
//                 exit(4);
//             }
//             else
//             {
//                 printf("4 ----------------------------------------\n");
//                 char *const tmp_argv[] = {
//                     "16",
//                     "123456",
//                     NULL};
//                 char *const envir[] = {
//                     "TEST=23",
//                     "TMP=123456",
//                     NULL};
//                 execve("./41Other", tmp_argv, envir);
//                 exit(5);
//             } // end of if
//         }
//         else if (id > 0)
//         {
//             printf("fork success: %d\n", id);
//         }
//         else
//         {
//             printf("fork error!\n");
//         } // end of if
//     } // end of for

//     for (int i = 0; i < 5; ++i)
//     {
//         int status = 0;
//         while (true)
//         {
//             pid_t wait_id = waitpid(-1, &status, WNOHANG);
//             if (wait_id == -1)
//             {
//                 printf("waitpid error!\n");
//                 break;
//             }
//             else if (wait_id == 0)
//             {
//                 printf("child process has not exited yet, continue to wait...\n");
//                 sleep(1);
//                 continue;
//             }
//             else
//             {
//                 if (WIFEXITED(status))
//                 {
//                     printf("child exit normally, exit code=%d\n", WEXITSTATUS(status));
//                 }
//                 else
//                 {
//                     printf("child exit abnormally\n");
//                 }
//                 break;
//             }
//         } // end of while
//     } // end of for

//     return 0;
// }