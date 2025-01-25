set terminal wxt
plot 'data.txt' using 1:2 with lines title 'f1(x)', 'data.txt' using 1:3 with lines title 'f2(x)', 'data.txt' using 1:4 with lines title 'f3(x)', 'data.txt' using 1:5 with lines title 'f(x)'
pause -1
