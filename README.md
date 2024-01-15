# ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH.

This work only needs three files, which are to be run on python, Wolfram Mathematica and c++.

## Libraries needed for the python file

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Libraries%20needed%20for%20the%20python%20file.png)

## The python file ("Generate Pn and F3_Pn files.py")
### This file is for generating the Pn, Pn^2, F3(Pn) and F3^2(Pn) graphs automatically and then store them both in a .gml and .html files

Once you have your libraries correctly installed, you just have to run the python file.

The second you run it, the program will ask which Pn and F3Pn files do you want to generate? You just have to enter the n as a number and hit enter (e.g. 12) 

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_question.png)

Then, once you run it, the program will generate the Pn, Pn^2, F3(Pn) and F3^2(Pn) graphs automatically and then store them both in a .gml and .html files

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_results.png)

When the program is finished, you should see 8 files in the same folder as your python file, that is, the Pn, Pn^2, F3(Pn) and F3^2(Pn) both in .gml and .html files

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Python_results_2.png)

You can open any html file on any web browser and you should see that graph on your window, you are free to move each node with your cursor in a dynamic way

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/P8_html.png)

We recommend storing them on a folder called Pn (where n is a number)

## The Wolfram Mathematica file ("Generate CSV.nb")
### This file is for calculating the GDM (Graph Distance Matrix) of the F3(Pn) graph and store it on a .csv file

The .nb file works with the .gml files generated in the previous step, so you should change the first line of the file so that it is your own PC's path to the F3.gml file that you want to calculate the GDM for

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/First_line_of_mathematica_file.png)

You should also change the 4th input line, that is, the name of the .csv file you want Wolfram Mathematica to generate, just change the P12 number with your current n, so that the c++ file works.

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/4th_line_mathematica.png)

Once you are done with these two steps, you are ready to run the Wolfram Mathematica file, for that, hit the "Evaluation" button on the program's tab and then hit the "Evaluate notebook" button as shown

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Mathematica_results1.png)

Remember to wait until every line is evaluated, that is, until the last output line shows the correct name of the .csv file you are generating

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/Mathematica_results2.png)

Then, you will have your GDM file ready for the C++ file to use it

## The c++ file ("Calculate_lower_bound.cpp")
### This file is for computing the lower bounds of the packing number of 3 token graph of path graph

For this file to work correctly, you should change the 13th, 16th and 19th lines of the file with your own data, that is, the number of nodes of the F3(Pn) graph you will be using, the ID of the node you want in the second position (we got the best results using 0, 1 and 2) and the n number of the GDM_F3(Pn).csv file you are using

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/cpp_changes.png)

Then you will be ready to run the program, once it's finished, the program will tell you at which row it found the best packing number, the cardinality of it, the ID's of the nodes in it and the time taken by the program to process the whole .csv file to find the best packing set.

![alt text](https://github.com/TheAlexz/ALGOS-FOR-COMPUTING-THE-LOWER-AND-UPPER-BOUNDS-OF-THE-PACKING-NUMBER-OF-3-TOKEN-GRAPH-OF-PATH-GRAPH./blob/main/Images/cpp_results.png)

