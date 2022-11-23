class Solution:
    def letterCombinations(self, digits: str) -> list:
        if len(digits) == 0:
            return []
        # create a dictionary
        d = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz",
        }
        res = []

        def helper(s: str, index: int):
            if len(s) == len(digits):
                res.append(s)
                return
            for c in d[digits[index]]:
                helper(s + c, index + 1)

        if digits:
            helper("", 0)
        return res


if __name__ == "__main__":
    print(Solution().letterCombinations("23"))
