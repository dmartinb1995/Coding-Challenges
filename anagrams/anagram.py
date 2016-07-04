"""Anagrams"""


def isAnagram(word1, word2):
  list1 = list(word1)
  list2 = list(word2)
  list1.sort()
  list2.sort()
  if(list1 == list2):
    return 1
  else:
    return 0


firstWords = ["cinema", "host", "aba", "train"]
secondWords = ["iceman", "host", "bab", "rain"]

def check_anagrams(firstWords, secondwords):
  for i in range(len(firstWords)):
    print isAnagram(firstWords[i], secondWords[i])

check_anagrams(firstWords, secondWords)
