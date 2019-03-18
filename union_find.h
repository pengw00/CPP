#include<vector>
using std::vector;

class QuickFindUF{
private: 
    vector<int> UF;
public:
    //define a default constructor
    QuickFindUF() = default;
    //define a consturctor accept para
    QuickFindUF(int N){
        UF = vector<int>(N);
        for(int i = 0; i < N; i++){
            UF[i] = i;
        }
    }
    int find(int p);
    void unionFunc(int p, int q);
    bool connected(int p, int q);
};

int QuickFindUF:: find(int p){
    return UF[p];
}

void QuickFindUF::unionFunc(int p, int q){
    int idp = UF[p];
    int idq = UF[q];
    for(int i = 0; i != UF.size(); i++){
        if(UF[i] == idq) UF[i] = idp;
    }
}
bool QuickFindUF::connected(int p, int q){
    return UF[p] == UF[q];
}