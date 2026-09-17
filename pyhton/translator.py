


word = input('enter ur word:')



def translate(word):
    word_list = list(word)
    for i in range(len(word_list)):
        if word_list[i] in 'AIUEOaiueo':
            word_list[i] = 'g'

    return ''.join(word_list)



transalted_word = translate(word)
print(transalted_word)

# def translate(phrase):
#     translation = ''
#     for character in phrase:
#         if character in 'AIUEOaiueo':
#             # combine empty string w g
#             translation = translation + 'g'
#         else:
#             translation = translation + character

#     return translation


# print(translate('akusukaikankakapenakbingit'))
