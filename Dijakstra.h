#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Dis {
    string path;
    int value;
    bool visit;
    Dis(){
        visit = false;
        value = 0;
        path = "";
    }
};

class Graph_DG {
    private: 
        int vexnum; 
        int edge;
        int **arc; //neibour array
        Dis * dis;
    public: Graph_DG(int vexnum, int edge);
            ~Graph_DG();
            bool check_edge_value(int start, int end, int weight);
            // create graph
            void createGraph();
            void print();
            void Dijkstra(int begin);
            void print_path(int);
};