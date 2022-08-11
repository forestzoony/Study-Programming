def groupAnagrams(self,strs: List[str]) -> Liest[List[str]]:
    anagrams = collections.defaultdict(llist)

    for word in strs:
        # 정렬하여 딕셔너리에 추가함 
        anagrams[''.join(sorted(word))].append(word)

        return list(anagrams.values())