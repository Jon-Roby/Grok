**1. Run the program with the following flags: ./process-run.py
-l 5:100,5:100. What should the CPU utilization be (e.g., the
percent of time the CPU is in use?) Why do you know this? Use the
-c and -p flags to see if you were right.**

CPU utilization should be 100%. Because the arguments follow a form of X1:Y1,
where X is the number of instructions to run and Y is the chance that the instruction
will use the CPU or IO.

**2. Now run with these flags: ./process-run.py -l 4:100,1:0.
These flags specify one process with 4 instructions (all to use the
CPU), and one that simply issues an I/O and waits for it to be done.
How long does it take to complete both processes? Use -c and -p
to find out if you were right.**

It took 10 time units. I expected 6, which included a time unit to finish. Instead,
an additional four time units were spent waiting.

**3. Now switch the order of the processes: ./process-run.py -l
1:0,4:100. What happens now? Does switching the order matter?
Why? (As always, use -c and -p to see if you were right)**

It took 6 time units! Switching the order does matter. 4 time units were saved.

**4. We’ll now explore some of the other flags. One important flag is -S,
which determines how the system reacts when a process issues an
I/O. With the flag set to SWITCH ON END, the system will NOT
switch to another process while one is doing I/O, instead waiting
until the process is completely finished. What happens when you
run the following two processes, one doing I/O and the other doing
CPU work? (-l 1:0,4:100 -c -S SWITCH ON END)**

It took 9 time units. The CPU doesn't run until IO is finished.

**Now, run the same processes, but with the switching behavior set
to switch to another process whenever one is WAITING for I/O (-l
1:0,4:100 -c -S SWITCH ON IO). What happens now? Use -c
and -p to confirm that you are right.**

It takes 6 time units, with the CPU starting before IO is done.

**6. One other important behavior is what to do when an I/O completes.
With -I IO RUN LATER, when an I/O completes, the process that issued it is not
necessarily run right away; rather, whatever was running at the time keeps running.
What happens when you run this combination of processes? (./process-run.py -l
3:0,5:100,5:100,5:100 -S SWITCH ON IO -I IO RUN LATER -c -p)
Are system resources being effectively utilized?**

No, IO processes are being run after CPU completes.

**7. Now run the same processes, but with -I IO RUN IMMEDIATE set,
which immediately runs the process that issued the I/O. How does
this behavior differ? Why might running a process that just completed
an I/O again be a good idea?**

Time units decrease from 27 to 18 (9 total time units saved). Also the CPU is
busy 100% of the time, whereas in problem 6, it was busy only 66% of the time.

**8. Now run with some randomly generated processes, e.g., -s 1 -l
3:50,3:50, -s 2 -l 3:50,3:50, -s 3 -l 3:50,3:50. See
if you can predict how the trace will turn out. What happens when
you use -I IO RUN IMMEDIATE vs. -I IO RUN LATER? What happens
when you use -S SWITCH ON IO vs. -S SWITCH ON END?**

IO_RUN_IMMEDIATE - SWITCH_ON_IO :  
Stats: Total Time 13  
Stats: CPU Busy 6 (46.15%)  
Stats: IO Busy  9 (69.23%)  

IO_RUN_IMMEDIATE - SWITCH_ON_END :  
Stats: Total Time 18  
Stats: CPU Busy 6 (33.33%)  
Stats: IO Busy  12 (66.67%)  

IO_RUN_LATER - SWITCH_ON_IO :  
Stats: Total Time 13  
Stats: CPU Busy 6 (46.15%)  
Stats: IO Busy  9 (69.23%)  

IO_RUN_LATER - SWITCH_ON_END :  
Stats: Total Time 18  
Stats: CPU Busy 6 (33.33%)  
Stats: IO Busy  12 (66.67%)  
