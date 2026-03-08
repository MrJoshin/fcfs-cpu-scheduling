# FCFS CPU Scheduling (C Program)

This project implements the **First Come First Serve (FCFS) CPU Scheduling Algorithm** in C.

## Input Format

```
n
PID1 AT1 BT1
PID2 AT2 BT2
...
PIDn ATn BTn
```

## Sample Input

```
5
P1 0 4
P2 1 5
P3 2 1
P4 3 2
P5 10 3
```

## Sample Output

```
Waiting Time:
P1 0
P2 3
P3 7
P4 8
P5 0

Turnaround Time:
P1 4
P2 8
P3 8
P4 10
P5 3

Average Waiting Time: 3.60
Average Turnaround Time: 6.60
```

## Compile and Run

```
gcc fcfs.c -o fcfs
./fcfs
```

## Files

* `fcfs.c` → FCFS scheduling program
* `testcase.txt` → Sample input and output
