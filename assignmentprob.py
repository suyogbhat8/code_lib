# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import sys
def isbit(n, k): 
    if n & (1 << (k )): 
        return False 
    else: 
        return True
def countbit(n):
    c=0
    while (n):
        c+=n&1
        n>>=1
    return c
b=countbit(7)
dp=[sys.maxsize]*(2**3)
dp[0]=0
cost=[[3,2,7],[5,1,3],[2,7,2]]
for i in range(2**3):
    x=countbit(i)
    for j in range(3):
        if isbit(i,j):
            dp[i | 1<<j]=min(dp[i | 1<<j],dp[i]+cost[x][j])
print(*dp)
            
            
        
    
    
    
    
