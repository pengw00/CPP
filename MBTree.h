#ifndef MBTree_h
#define MBTree_h

#include MBTree_h
#include MBTree_h

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define M(4)

#define LIMIT_M_2(M%2?(M+1)/2 : M/2)

typedef struct MBNode *MBTree, *Position;
typedef int KeyType;

struct MBTree{
    int KeyNum;
    KeyType key[M+1];
    KeyType Key[M+1];
    MBTree Children[M+1];
};

extern MBTree Initialize();

extern MBTree Insert(MBTree t, KeyType Key);

extern MBTree Remove(MBTree T, KeyType key);

extern MBTree Destroy(MBTree T);

extern void Travel(MBTree T);

#endif
