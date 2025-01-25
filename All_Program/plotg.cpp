#include <iostream>
#include <fstream>
#include <cmath>

// Gnuplot function to plot the data
void plotGraph() 
{
    std::ofstream plotFile("plotScript.gnu");
    plotFile << "set terminal wxt\n";
    plotFile << "plot 'data.txt' using 1:2 with lines title 'f1(x)', "
                "'data.txt' using 1:3 with lines title 'f2(x)', "
                "'data.txt' using 1:4 with lines title 'f3(x)', "
                "'data.txt' using 1:5 with lines title 'f(x)'\n";
    plotFile << "pause -1\n";
    plotFile.close();

    system("gnuplot plotScript.gnu");
}

int main() {
    std::ofstream dataFile("data.txt");
    if (!dataFile.is_open()) {
        std::cout << "Failed to create data file." << std::endl;
        return 1;
    }

    float x = 0.0;
    float interval = 0.01;

    while (x <= 5.0) {
        float f1 = 5.0 * sin(x);
        float f2 = 5.0 * sin(2 * x);
        float f3 = 5.0 * sin(3 * x);
        float f = f1 + f2 + f3;

        dataFile << x << " " << f1 << " " << f2 << " " << f3 << " " << f << "\n";

        x += interval;
    }

    dataFile.close();

    // Plot the graph using Gnuplot
    plotGraph();

    return 0;
}
