**1. Run the program with the following flags: ./process-run.py
-l 5:100,5:100. What should the CPU utilization be (e.g., the
percent of time the CPU is in use?) Why do you know this? Use the
-c and -p flags to see if you were right.**

CPU utilization should be 100%. Because the arguments follow a form of X1:Y1,
where X is the number of instructions to run and Y is the chance that the instruction
will use the CPU or IO.
