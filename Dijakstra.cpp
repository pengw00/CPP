#include"Dijakstra.h"

Graph_DG::Graph_DG(int vexnum, int edge){
    this->vexnum = vexnum;
    this->edge = edge;
    arc = new int*[this->vexnum];
    dis = new Dis[this->vexnum];
    for(int i = 0; i < this-> vexnum; i++){
        arc[i] = new int[this->vexnum];
        for(int k = 0; k < this->vexnum; k++){
            arc[i][k] = INT_MAX;
        }
    }
}

Graph_DG::~Graph_DG(){
    delete[] dis;
    for(int i = 0; i < this->vexnum; i++){
        delete this->arc[i];
    }
    delete arc;
}

bool Graph_DG::check_edge_value(int start,  int end, int weight){
    if(start < 1 || end<1 || start>vexnum || end>vexnum || weight < 0){
        return false;
    }
    return true;
}

void Graph_DG:: createGraph(){
    cout << "please enter the edge's start, end, weight: " << endl;
    int start;
    int end;
    int weight;
    int count = 0;
    while(count != this->edge){
        cin >> start >> end >> weight;
        while(!this -> check_edge_value(start, end, weight)){
            cout << "input invalid, please enter again" << endl;
            cin >> start >> end >> weight;
        }
        arc[start-1][end-1] = weight;
        count++;
    }
}

void Graph_DG::Dijkstra(int begin){
    int i;
    for(int i = 0; i < this->vexnum; i++){
        dis[i].path = "v" + to_string(begin) + "->v" + to_string(i+1);
        dis[i].value = arc[begin-1][i];
    }
    dis[begin-1].value = 0;
    dis[begin-1].visit = true;
    int count =1;
    while(count != this->vexnum){
        int tmp = 0;
        int min = INT_MAX;
        for(i = 0; i < this->vexnum; i++){
            if(!dis[i].visit && dis[i].value < min){
                min = dis[i].value;
                tmp = i;
            }
        }
        dis[tmp].visit = true;
        ++count;
        for(int i = 0; i < this->vexnum; i++){
            if(!dis[i].visit && arc[tmp][i] != INT_MAX && dis[tmp].value + arc[tmp][i] < dis[i].value){
                dis[i].value = dis[tmp].value + arc[tmp][i];
                dis[i].path = dis[tmp].path + "->v" + to_string(i+1);
            }
        }
    }
}

void Graph_DG::print_path(int begin){
    string str;
    str = "v" + to_string(begin);
    cout << " the shortest path take" << str << "as start point is: " << endl;
    for(int i = 0; i != this->vexnum; i++){
        if(dis[i].value != INT_MAX)
            cout<<dis[i].path << "=" << dis[i].value << endl;
        else{
            cout << dis[i].path << " no shortest path" << endl;
        }
    }
}