#week03-1.py
#leecode 2579. count total number of colered cells
class Solution:
    def coloredCells(self, n: int) -> int:
        return n*n +(n-1)*(n-1)
