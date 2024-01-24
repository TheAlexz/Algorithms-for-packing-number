# ALGORITHMS-FOR-COMPUTING-THE-EXACT-VALUE-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH.

For computing the exact packing number of 3 token graph of path graph $P_n$ with n $\le 12$ , only three files are needed, which should be run on python and Wolfram Mathematica.

## Libraries needed for the python file

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Libraries%20needed%20for%20the%20python%20file.png)

## The python file ("Generate Pn and F3_Pn files.py")
### This file is for generating the $P_n$, $F_3(P_n)$ and $F_3^2(P_n)$ graphs automatically and then store them both in .gml and .html files

Once you have your libraries correctly installed, you just have to run the python file.

When you run it, the program will ask which $P_n$ and $F_3(P_n)$ files do you want to generate? You just have to enter the order $n$ of the path graph as a positive integer and hit Enter (e.g. 12) 

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_question.png)

Then, once you run it, the program will generate the $P_n, F_3(P_n)$ and $F_3^2(P_n)$ graphs automatically and then store them both in .gml and .html files

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_results.png)

When the program is finished running, you should see $6$ files in the same folder as your python file, that is, the $P_n, F_3(P_n)$ and $F_3^2(P_n)$ both in .gml and .html files.
We recommend storing them on a folder called $Pn$ (where $n$ is a positive integer)

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_results2.png)

You can open any html file with any web browser and you should see that graph on your window, you are free to move each node with your cursor in a dynamic way

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/P8_html.png)


## The Wolfram Mathematica file ("Find exact value.nb")
### This file is for calculating the exact value for the packing number of the $F_3(P_n)$ graph (e.g., the independence number of the $F_3^2(P_n)$ graph) and visualize the corresponding vertices of that packing set

The .nb file works with the .gml files generated in the previous step, so you should change the first and fourth lines of the file so that it is your own PC's path to the F3square.gml and F3.gml files, respectively, that you want to calculate the exact packing number for

![alt text](https://github.com/TheAlexz/Algorithms-for-packing-number/blob/main/Images/First_and_fourth_lines_of_mathematica_exact_value.png)

Once you are done with these two steps, you are ready to run the Wolfram Mathematica file, for that, hit the "Evaluation" button on the program's tab and then hit the "Evaluate notebook" button as shown

![alt text](https://github.com/TheAlexz/Algorithms-for-packing-number/blob/main/Images/Exact_value_evaluation_mathematica.png)

Then, once it's completed running, it will show the maximum packing set vertices ID's on the second line of output, as shown, (in the case of P5, as shown, the packing number is 3, so three vertices ID's are shown)

![alt text](https://github.com/TheAlexz/Algorithms-for-packing-number/blob/main/Images/Exact_value_mathematica.png)

Finally, for a visual representation, the third and fifth output lines will show the $F_3^2(P_n)$ and $F_3(P_n)$ graphs with its corresponding maximum independent and packing vertices, respectively, highlighted.

![alt text](https://github.com/TheAlexz/Algorithms-for-packing-number/blob/main/Images/Visualize_exact_values_mathematica.png)

# ALGORITHMS-FOR-COMPUTING-A-LOWER-BOUND-FOR-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH.

For computing a lower bound for the packing number of 3 token graph of path graph $P_n$ with n$ge 13#, only three files are needed, which should be run on python, Wolfram Mathematica and $C++$.

## Libraries needed for the python file

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Libraries%20needed%20for%20the%20python%20file.png)

## The python file ("Generate Pn and F3_Pn files.py")
### This file is for generating the $P_n$, $F_3(P_n)$ and $F_3^2(P_n)$ graphs automatically and then store them both in .gml and .html files

Once you have your libraries correctly installed, you just have to run the python file.

When you run it, the program will ask which $P_n$ and $F_3(P_n)$ files do you want to generate? You just have to enter the order $n$ of the path graph as a positive integer and hit Enter (e.g. 12) 

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_question.png)

Then, once you run it, the program will generate the $P_n, F_3(P_n)$ and $F_3^2(P_n)$ graphs automatically and then store them both in .gml and .html files

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_results.png)

When the program is finished running, you should see $6$ files in the same folder as your python file, that is, the $P_n, F_3(P_n)$ and $F_3^2(P_n)$ both in .gml and .html files.
We recommend storing them on a folder called $Pn$ (where $n$ is a positive integer)

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_results2.png)

You can open any html file with any web browser and you should see that graph on your window, you are free to move each node with your cursor in a dynamic way

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/P8_html.png)



## The Wolfram Mathematica file ("Generate CSV.nb")
### This file is for calculating the GDM (Graph Distance Matrix) of the $F_3(P_n)$ graph and store it on a .csv file

The .nb file works with the .gml files generated in the previous step, so you should change the first line of the file so that it is your own PC's path to the F3.gml file that you want to calculate the GDM for

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/First_line_of_mathematica_file.png)

You should also change the 4th input line, that is, the name of the .csv file you want Wolfram Mathematica to generate, just change the $P12$ number with your current $n$, so that the $C++$ file works.

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/4th_line_mathematica.png)

Once you are done with these two steps, you are ready to run the Wolfram Mathematica file, for that, hit the "Evaluation" button on the program's tab and then hit the "Evaluate notebook" button as shown

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Mathematica_results1.png)

Remember to wait until every line is evaluated, that is, until the last output line shows the correct name of the .csv file you are generating

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Mathematica_results2.png)

Then, you will have your GDM file ready for the $C++$ file to use it

## The C++ file ("Calculate_lower_bound.cpp")
### This file is for computing the lower bounds of the packing number of 3 token graph of path graph

For this file to work correctly, you should change the 13th, 16th and 19th lines of the file with your own data, that is, the number of nodes of the $F_3(P_n)$ graph you will be using, the ID of the node you want in the second position (we got the best results using $0$, $1$ and $2$) and the $n$ number of the GDM_F3(Pn).csv file you are using

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/cpp_changes.png)

Then you will be ready to run the program, once it's finished, the program will tell you at which row it found the best packing number, the cardinality of it, the ID's of the nodes in it and the time taken by the program to process the whole .csv file to find the best packing set.

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/cpp_results.png)

