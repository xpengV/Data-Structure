//
//  Seq_List.c
//  Data-Structure
//
//  Created by xiaopeng on 2018/10/27.
//  Copyright © 2018 xiaopeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "sequenlist_function.h"

//初始化一个长度为5的顺序表
void initlist(sequenlist *L,int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        L->data[L->last] = i * i;
        L->last++;
    }
}

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
void insert(sequenlist * L,int x,int i)
{
    int j;
    if((L->last)>=maxsize-1)
    {
        printf("表空间溢出，不允许再插入元素！\r\n");
        exit(0);
    }else
    {
        if((i<1)||(i>(L->last)+2))
        {
            printf("插入元素的下标有误!\r\n");
            exit(0);
        }else
        {
            for(j=L->last;j>=i-1;j--)
            {
                L->data[j+1] = L->data[j];     /* 结点往后移动 */
            }
            
            L->data[i-1] = x;              /* 插入x，存在（*L）data[i-1]中 */
            L->last = L->last+1;
        }
    }
}

//sequenlist-delete elem
//删除顺序表L的第i个结点data[i-1]，并返回该节点的值
void delete(sequenlist *L,int i,int *res)
{
    int j;
    if(i<1||i>L->last)
    {
        printf("删除元素的下标有误！\r\n");
        exit(0);
    }else
    {
        *res = L->data[i-1];                 /* 获取被删除元素的值 */
        printf("被删除元素的值是[%d]\r\n",*res);
        for(j=i;j<L->last;j++)
        {
            L->data[j-1] = L->data[j];      /* 结点向前移动 */
        }
        L->last--;
    }
}
