# -*- coding: utf-8 -*-
"""
Created on Wed Feb 26 15:22:57 2020

@author: Suyog
"""
n=5
k=5
li=[0]*(n+1)
li[0]=1
for i in range(1,n+1):
    for j in range(min(i,k),0,-1):
        li[j]+=li[j-1]
print(li)