#include <bits/stdc++.h>

using namespace std; 

#define watch(x) cout << (#x) << " is: " << x << endl;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<long long int> vlli;

//How many nodes does the G graph have?
const ulli G_nodes = 560;

//Which node do you want in the second position?
int second_position_node = 2;

//What's the n number of the GDM_F3(Pn) file?
string n_number = "16";

ulli GDM[G_nodes][G_nodes];

// Function to fill the GDM array with the values of the .csv file
void readFromFile(const string& FileName) {
    ifstream take(FileName);

    // The GDM array is filled with the values of the .csv file
    string line;
    ulli i = 0;
    while (getline(take, line)) {
        stringstream ss(line);
        string cell;
        ulli j = 0;
        while (getline(ss, cell, ',')) {
            GDM[i][j] = stoi(cell);
            j++;
        }
        i++;
    }

}


//Read the csv file 
void read_record()
{
    
    string filename = "./GDM/GDM_F3(P" + n_number + ").csv";

    // Call readFromFile function to read the csv file and fill the GDM array
    readFromFile(filename);
    
    
    fstream fin;
  
    // Open an existing file
    fin.open("./GDM/GDM_F3(P" + n_number + ").csv");    
  
    // Read the Data from the file
    // as String Vector
    vector<string> row;
    vector<ulli> rowint;
    

    vector<ulli> sumintprobables;

    vector<tuple<ulli, ulli, ulli>> triplet;
    vector<tuple<ulli, ulli, ulli>> triplet_sorted;
    vector<tuple<ulli, ulli, ulli>> triplet_seleccion;
    vector<tuple<ulli, ulli, ulli>> triplet_max;

    string line, word, temp;
    ulli number, sum=0, count=0, rowpmax=0;
    ulli countrow=0, countcolum=0, count_triplet=0, packing_max=0;  
    

    time_t start, end;

    time(&start);
    
  
    // read an entire row and
    // store it in a string variable 'line'  
    while (fin >> line) {

        sum=0; countcolum=0; count_triplet=0;
  
        row.clear();
        rowint.clear();
        triplet_sorted.clear();
        triplet_seleccion.clear();
        triplet.clear();        

        // used for breaking words
        stringstream s(line);

        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ',')) {
  
            // add all the column data
            // of a row to a vector
            row.push_back(word);
            number = stoi(word);
            rowint.push_back(number);


            //Begin filling the triplet_sorted vector with only the values that are greater than or equal to 3 or equal to 0
            if( number >= 3 or number == 0 ){            


                if(number == 0){
                    //Inserts at the beginning the vertex with distance 0, that is, the vertex n where n is the current row
                    triplet_sorted.insert(triplet_sorted.begin(), make_tuple(number, countrow, countcolum));
                }
                else{
                    triplet.push_back(make_tuple(number, countrow, countcolum));
                    triplet_sorted.push_back(make_tuple(number, countrow, countcolum));
                }
                sum++;
                count_triplet++;
            }
            countcolum++;
        }
        
        cout << endl;


        sumintprobables.push_back(sum);


        if(second_position_node == 0){
            //No need to do anything
        }
        if(second_position_node == 1){
            //Erase all the vertices before the node with ID = 1 (keeping the first position node, that is, the node of the current row)
            for(int i=0; i<3; i++){
                if(get<2>(triplet_sorted[i]) == 0){
                    triplet_sorted.erase(triplet_sorted.begin() + i);
                    break;
                }
            }
        }
        else if(second_position_node == 2){
            //Erase all the vertices before the node with ID = 2 (keeping the first position node, that is, the node of the current row)
            for(int i=0; i<4; i++){
                if(get<2>(triplet_sorted[i]) == 0 or get<2>(triplet_sorted[i]) == 1){
                    triplet_sorted.erase(triplet_sorted.begin() + i);
                    i--;
                }
            }
        }
        else if(second_position_node == 3){
            //Erase all the vertices before the node with ID = 3 (keeping the first position node, that is, the node of the current row)
            for(int i=0; i<5; i++){
                if(get<2>(triplet_sorted[i]) == 0 or get<2>(triplet_sorted[i]) == 1 or get<2>(triplet_sorted[i]) == 2){
                    triplet_sorted.erase(triplet_sorted.begin() + i);
                    i--;
                }
            }
        }
        
        triplet_seleccion = triplet_sorted;

        

        ulli column_sel=0, column_act=0;

        
        //Algorithm to keep only the vertices that have a distance greater than or equal to 3 from each other
        for (ulli i = 1; i < triplet_seleccion.size()-1; i++){

            for (ulli j = i+1; j < triplet_seleccion.size(); j++){

                column_sel = get<2>(triplet_seleccion[i]);

                column_act = get<2>(triplet_seleccion[j]);


                if(  GDM[column_sel][column_act] < 3  ){

                    triplet_seleccion.erase(triplet_seleccion.begin() + j);

                    j--;
                } 
                
            }
        }
        
        watch(countrow)


        cout << "Local maximal packing: " << triplet_seleccion.size() << endl;

        
        //If the current packing is greater than the maximum packing, then the maximum packing is updated
        packing_max = max(packing_max, ulli(triplet_seleccion.size()));
        if(packing_max == ulli(triplet_seleccion.size())){
            triplet_max = triplet_seleccion;
            rowpmax = countrow;
        }

        cout << "Current maximum packing: " << packing_max << endl;


        count++;
        countrow++;

    }
    cout << endl;

    cout << "The maximum packing set was found in the " << rowpmax << "th row" << endl;
    cout << "The cardinality of the maximum packing set is: " << packing_max << endl;
    

    cout << "The nodes on the maximum packing set are (ID's): ";

    int countv=0;

    for (ulli i = 0; i < triplet_max.size(); i++) {
            cout << get<2>(triplet_max[i]) ;
            if(i != triplet_max.size()-1)
                cout << ", ";  
            countv++;
    }

    cout << endl << endl;

    time(&end);

    // Calculating total time taken by the program.
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
        << time_taken << setprecision(10);
    cout << " sec " << endl;
    
}

int main(){

    fastIO

    read_record();


    return 0;
}
