//
//  Seq_List.c
//  Data-Structure
//
//  Created by xiaopeng on 2018/10/27.
//  Copyright © 2018 xiaopeng. All rights reserved.
//

#include <stdio.h>

#define maxsize 1024  /* 线性表最大长度，假设是1024 */

typedef int datatype;

typedef struct {
    datatype data[maxsize];
    int last;        /* last表示线性表终端结点在向量空间中的位置，所以last+1等于线性表的当前长度 */
} sequenlist;

//顺序遍历顺序表 下标：1~maxsize , 元素的值a[0]~a[maxsize-1]
void showlist(sequenlist *L)
{
    int i;
    for(i=0;i<L->last;i++)
    {
        printf("下标为[%d]的元素，值是[%d]\r\n",i+1,L->data[i]);
    }
}

//sequenlist-insert elem
//将新结点x插入顺序表L的第i个位置上
int INSERT(sequenlist * L,int x,int i)
{
    int j;
    if((L->last)>=maxsize-1)
    {
        printf("表空间溢出，不允许再插入元素！\r\n");
        return 0;
    }else
    {
        if((i<1)||(i>(L->last)+2))
        {
            printf("下标有误!\r\n");
            return 0;
        }else
        {
            for(j=L->last;j>=i-1;j--)
            {
                L->data[j+1] = L->data[j];     /* 结点往后移动 */
            }
            
            L->data[i-1] = x;              /* 插入x，存在（*L）data[i-1]中 */
            L->last = L->last+1;
            return 1;
        }
    }
}
