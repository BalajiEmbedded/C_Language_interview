volatile keyword is used in the embedded systems :-

where that variable can change at any point of time outside normal program flow

so dont optimize it always read it from the memory


with out volatile keyword compiler may store the value in the unused registers 
assume if it is not changing , it will skip reading it 

volatile is used for variables whose values can change unexpectedly due to hardware, interrupts,
or other tasks,and it prevents compiler optimization on those variables."

Real time usage:-

Hardware registers ( most important thing)

-> lets say hardware changes the  register values & compiler must read actual memory everytime

“I used volatile while accessing peripheral registers like GPIO, UART, and timers.”

