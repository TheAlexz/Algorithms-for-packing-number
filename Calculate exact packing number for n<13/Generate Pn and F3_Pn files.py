import time
import networkx as nx
import itertools
from pyvis.network import Network

Pn = int(input("Which Pn and F3Pn files do you want to generate? Enter n (as a number): "))

# Generate Pn file
vertices_G = {}

num_edge_G = Pn - 1
num_node_G = Pn

for i in range(1,num_node_G):
    vertices_G[int(i), int(i+1)] = 0

#Graph G   
G = nx.Graph()

#Graph CU_2(G) 
F3 = nx.Graph()

vectotal = []
for i in range(1, num_node_G + 1):
    vectotal.append(i)

print("Generating graphs...")

# get the start time
st = time.time()

edges = []    
for (x, _) in vertices_G.items():
    edges.append([x[0], x[1]])
    G.add_edge(x[0], x[1], color="black")

vector = list(itertools.combinations(vectotal, 3))

#Generate F3(G)
for i in range(0, len(vector)):
    for j in range(i+1, len(vector)):

        #Calculate the symmetric difference between vector[i] and vector[j]
        sim_dif = set(vector[i]) ^ set(vector[j])
        cardinality = len( sim_dif )

        #If the cardinality of the symmetric difference is 2
        if( cardinality == 2 ):

            tuple_aux = tuple(sim_dif)
            xaux = [ tuple_aux[0], tuple_aux[1] ]
            xaux_reverse = [ tuple_aux[1], tuple_aux[0] ]

            #If the symmetric difference between vector[i] and vector[j] is an edge in G           
            if xaux in edges or xaux_reverse in edges:

                #Add the edge (i,j) to F3(G)
                F3.add_edge(i, j, color="black")
                
                



#options for the visualization of the G graph on html
color = [G[u][v]["color"] for u, v in G.edges()]
options = {
    'node_color': 'blue',
    'node_size': 300,
    'edge_color': color,
    'width': 3,
    'with_labels' : True,
    'font_color' : 'white',
}


mapping = {}

for i in range(0, len(vector)):
    mapping[i] = str(vector[i])

#Relabel the nodes of F3 so that each ID is mapped to its real value (the set of 3 elements)
F3pro = nx.relabel_nodes(F3, mapping)

#options for the visualization of the F3 graph on html
color = [F3[u][v]["color"] for u, v in F3.edges()]
options = {
        'node_color': 'blue',
        'node_size': 1000,
        'font_size': 10,
        'edge_color': color,
        'width': 1,
        'with_labels' : True,
        'font_color' : 'white',
    }


# get the end time
et = time.time()

# get the execution time
elapsed_time = et - st
print('Execution time for calculating the graphs:', elapsed_time, 'seconds')


print("Generating the .html and .gml files ....")

# get the start time
st = time.time()


net = Network(notebook=True)
net.from_nx(G)
net.show("G.html")

net = Network(notebook=True)
net.from_nx(F3pro)
net.show("F3.html")

F3square = nx.Graph()
F3square = nx.power(F3pro,2)

net = Network(notebook=True)
net.from_nx(F3square)
net.show("F3square.html")

nx.write_gml(G, "G.gml")
nx.write_gml(F3pro, "F3.gml")
nx.write_gml(F3square, "F3square.gml")

# get the end time
et = time.time()

# get the execution time
elapsed_time = et - st
print('Execution to generate the .gml and .html files was:', elapsed_time, 'seconds')

