def is_palindrome(s):
    string = ''

    for i in s:
        if i.isalnum():
            string += i.lower()
        else:
            continue
    
    index_comp = (len(string) + 1) // 2
    for i in range(index_comp):
        if string[i] == string[len(string) - 1 - i]:
            continue
        else:
            return False
    return True

# Example usage:
input_string = "A man, a plan, a canal, Panama"
print(is_palindrome(input_string))  # Output: True
