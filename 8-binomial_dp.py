# -*- coding: utf-8 -*-
"""
Created on Wed Feb 26 15:06:49 2020

@author: Suyog
"""

#n,k=map(int,input().split())
n=5
k=3
li=[[1]*(k+1)]*(n+1)
for i in range(n+1):
    for j in range(0,min(i,k)):
        if j==0 or j==i:
            li[i][j]=1
        else:
            li[i][j]=li[i-1][j-1]+li[i-1][j]
    print(li)
