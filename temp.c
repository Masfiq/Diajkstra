// Online C++ compiler to run C++ program online
#include <iostream>

// Function to initialize the adjacency matrix
void initializeMatrix(int** &matrix, int vertices) {
    matrix = new int*[vertices];
    for (int i = 0; i < vertices; i++) {
        matrix[i] = new int[vertices];
        for (int j = 0; j < vertices; j++) {
            matrix[i][j] = 0;
        }
    }
}

// Function to delete the adjacency matrix
void deleteMatrix(int** &matrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Function to add an edge
void addEdge(int** matrix, int vertices, int i, int j, int weight) {
    if (i >= 0 && i < vertices && j >= 0 && j < vertices) {
        matrix[i][j] = weight;
        // matrix[j][i] = 1; // Remove this line for a directed graph
    }
}

// Function to remove an edge
void removeEdge(int** matrix, int vertices, int i, int j) {
    if (i >= 0 && i < vertices && j >= 0 && j < vertices) {
        matrix[i][j] = 0;
        matrix[j][i] = 0; // Remove this line for a directed graph
    }
}

// Function to check if there is an edge
bool isEdge(int** matrix, int vertices, int i, int j) {
    if (i >= 0 && i < vertices && j >= 0 && j < vertices) {
        return matrix[i][j] == 1;
    }
    return false;
}

// Function to display the adjacency matrix
void displayMatrix(int** matrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int vertices = 6+1;
    int** adjMatrix;

    // Initialize the adjacency matrix
    initializeMatrix(adjMatrix, vertices);

    // Add edges
    addEdge(adjMatrix, vertices, 1, 2, 2);
    addEdge(adjMatrix, vertices, 1, 3, 4);
    addEdge(adjMatrix, vertices, 2, 3, 1);
    addEdge(adjMatrix, vertices, 3, 5, 3);
    addEdge(adjMatrix, vertices, 4, 6, 1);
    addEdge(adjMatrix, vertices, 5, 4, 2);
    addEdge(adjMatrix, vertices, 5, 6, 5);

    // Display the adjacency matrix
    std::cout << "Adjacency Matrix:" << std::endl;
    displayMatrix(adjMatrix, vertices);

    // // Check for edges
    // std::cout << "Is there an edge between 0 and 1? " << (isEdge(adjMatrix, vertices, 0, 1) ? "Yes" : "No") << std::endl;
    // std::cout << "Is there an edge between 1 and 4? " << (isEdge(adjMatrix, vertices, 1, 4) ? "Yes" : "No") << std::endl;

    // // Remove an edge
    // removeEdge(adjMatrix, vertices, 1, 4);
    // std::cout << "Is there an edge between 1 and 4 after removing it? " << (isEdge(adjMatrix, vertices, 1, 4) ? "Yes" : "No") << std::endl;

    // Display the adjacency matrix again
    // std::cout << "Adjacency Matrix after removing edge (1, 4):" << std::endl;
    // displayMatrix(adjMatrix, vertices);

    // Delete the adjacency matrix
    // deleteMatrix(adjMatrix, vertices);
   int* visited = new int[vertices]; 
   int* distance = new int[vertices];
   
    int startVertex = 1; 
   
   for(int i=1; i< vertices; i++){
       if(adjMatrix[startVertex][i]>0){
           distance[i] = adjMatrix[startVertex][i]; 
       }else{
           distance[i] = -1;
       }
       
       visited[i] = 0; 
   }
   
  int vertex =  startVertex; 
   
   while(visited[vertex] == 0){
       if()
   }

    return 0;
}