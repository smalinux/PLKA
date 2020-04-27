processes types:
	1- Real-time processes (ex: RTOS, RTLinux, Xenomai, RATI) 
	2- Not Real-time (ex: Linux)

Linux supports different scheduling classes
	fair scheduling, realtime scheduling, so on...



> all processes in a process table == 




+--------+
|syscalls|
+--------+


==============================================================================

struct task_struct
/*
Each process in the system uses certain amount of different resources like files,
	CPU time, memory and so on.
Such resources are not infinite and each process and we should have an instrument to 
	manage it. Sometimes it is useful to know current limits for a certain resource or 
	to change it's value.

task_struct->rlimit
*/
struct rlimit // resources limit
	cat /proc/1816/limits
	best resource: https://github.com/smalinux/linux-insides/blob/master/SysCall/linux-syscall-6.md
	My linux books
/*
Google: linux kernel Namespaces 
*/
struct nsproxy