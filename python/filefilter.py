class FileFilterIter:
    def __init__(self, filepath, pattern):
        self.line=pattern
        self.file=open(filepath)
    def __iter__(self):
        return self
    def __next__(self):
        for elem in self.file:
            if self.line in elem:
                return elem
        raise StopIteration


class FileProcessor:
    def __init__(self, filepath):
        self.file=filepath
        self.pattern=""
    def set_pattern(self, pattern):
        self.pattern=pattern
    def __iter__(self):
        return FileFilterIter(self.file,self.pattern)
        


filepath = "E:\\STUDIA\\2semestr\\pyton\\pyth 26 maj iter\\patterns-test.txt"
patterns = ("and", "or", "not", "in", "python","")
fp = FileProcessor(filepath)

for pattern in patterns:
    fp.set_pattern(pattern)
    print(f"Lines from '{filepath}' matching pattern '{pattern}':")
    for match in fp:
        print(match, end="")
    print()