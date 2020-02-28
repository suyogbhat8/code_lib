# -*- coding: utf-8 -*-
"""
Created on Wed Feb 26 15:15:36 2020

@author: Suyog
"""

def binom(n,k):
    if n==k or k==0:
        return 1
    return binom(n-1,k-1)+binom(n-1,k)

print(binom(10,5))