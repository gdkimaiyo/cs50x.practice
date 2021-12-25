text = input("Text: ")

letters = 0
for letter in text:
    if letter.isalpha():
            letters += 1

# Assign words to 1 if user actually typed a word at the start but not a space
words = 1 if (len(text) > 0 and text[0] != ' ') else 0
print(words)

print(letters)
