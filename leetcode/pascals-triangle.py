class Solution:
    def generate(self, numRows: int) -> List[List[int]]:

        if numRows == 1:
            return [[1]]

        matt = [[1], [1, 1]]

        if numRows == 2:
            return matt

        for i in range(2, numRows):
            arr = [1]
            prev = matt[i-1]

            for j in range(0, len(prev)-1):
                temp = prev[j] + prev[j+1]
                arr.append(temp)

            arr.append(1)

            matt.append(arr)

        return matt
