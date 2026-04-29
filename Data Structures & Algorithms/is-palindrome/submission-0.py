class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        clean = ''.join(char for char in s if char.isalnum())        
        
        j = len(clean) - 1
        # check modified string if palindrome
        for i in range(len(clean)):
            if clean[i] != clean[j]:
                return False
            j = j - 1
        return True       

        