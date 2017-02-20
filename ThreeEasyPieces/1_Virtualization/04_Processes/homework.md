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

Time     PID: 0     PID: 1        CPU        IOs
  1     RUN:cpu      READY          1
  2     RUN:cpu      READY          1
  3     RUN:cpu      READY          1
  4     RUN:cpu      READY          1
  5        DONE     RUN:io          1
  6        DONE    WAITING                     1
  7        DONE    WAITING                     1
  8        DONE    WAITING                     1
  9        DONE    WAITING                     1
 10*       DONE       DONE

Stats: Total Time 10
Stats: CPU Busy 5 (50.00%)
Stats: IO Busy  4 (40.00%)

It took 10 time units. I expected 6, which included a time unit to finish. Instead,
an additional four time units were spent waiting.
