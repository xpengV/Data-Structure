//
//  main.c
//  Data-Structure
//
//  Created by xiaopeng on 2018/10/26.
//  Copyright © 2018 xiaopeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "sequenlist_function.h"

int main()
{
    int res;
    sequenlist *L;
    L = (sequenlist *)malloc(sizeof(sequenlist));
    L->last = 0;                /* 初始化空的线性表 */
    
    /* 初始化顺序表 */
    initlist(L,5);
    showlist(L);
    
    /* 插入新元素 */
    insert(L, 999, 4);
    printf("----------插入元素完成----------\r\n");
    showlist(L);
    
    /* 删除新元素 */
    delete(L, 5, &res);
    printf("----------删除元素完成----------\r\n");
    showlist(L);
    
    return 0;
}
