# profileMemoryUsage


### To profile:


gcc -pg -Wall main.cpp -o ./main -lstdc++


./main 


gprof main gmon.out >gprof.txt


python3 -m gprof2dot <gprof.txt >gprof.dot


dot -Tpdf -o gprof.pdf gprof.dot