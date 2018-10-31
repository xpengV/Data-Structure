//
//  sequenlist_function.h
//  Data-Structure
//
//  Created by xiaopeng on 2018/10/31.
//  Copyright © 2018 xiaopeng. All rights reserved.
//

#ifndef sequenlist_function_h
#define sequenlist_function_h

#endif /* sequenlist_function_h */

#include<stdio.h>

#define maxsize 1024  /* 线性表最大长度，假设是1024 */

typedef int datatype;

typedef struct {
    datatype data[maxsize];
    int last;        /* last表示线性表终端结点在向量空间中的位置，所以last+1等于线性表的当前长度 */
} sequenlist;

void initlist(sequenlist *L,int length);
void showlist(sequenlist *L);
void insert(sequenlist * L,int x,int i);
void delete(sequenlist *L,int i,int *res);

