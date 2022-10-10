#zadanie 1
from inspect import stack

class StackException(Exception):
    pass

class StackOverflow(StackException):
    def __init__(self):
        super().__init__("Stack jest pelny")

class StackEmpty(StackException):
    def __init__(self):
        super().__init__("Stack jest pusty")


class Stack:
    def __init__(self, max_size):
        self.__stack = []
        self.__max_size = max_size

    def get_max_size(self):
        return self.__max_size
    def get_size(self):
        return len(self.__stack)

    
    def is_empty(self):
        return not self.get_size()

    def is_full(self):
        return self.get_size() == self.get_max_size()

    def push(self, value):
        if self.is_full():
            raise StackOverflow
        else:
            self.__stack.append(value)

    def pop(self):
        if self.is_empty():
            raise StackEmpty
        else:
            value = self.__stack[-1]
            del self.__stack[-1]
            return value
    def peek(self):
        if self.is_empty():
            raise StackEmpty
        else:
            return self.__stack[-1]
    def clear(self):
        try:
            while True:
                self.pop()
        except StackEmpty:
            pass
    def print_info(self):
        print()
        print(f"Wielkosc stacku: {self.get_size()}")
        print(f"Wielkosc maksymalna stacku: {self.get_max_size()}")
        print(f"Pusty stack: {self.is_empty()}")
        print(f"Pełny stack: {self.is_full()}") 
        if not self.is_empty():
            print(f"Najwyzej polozony element stacku: {self.peek()}")
        print()    

class CountingStack(Stack):
    def __init__(self, max_size):
        super().__init__(max_size)
        self.__push_counter = 0
        self.__pop_counter = 0

    def get_push_counter(self):
        return self.__push_counter

    def get_pop_counter(self):
        return self.__pop_counter

    def push(self, value):
        super().push(value)
        self.__push_counter +=1

    def pop(self):
        value = super().pop()
        self.__pop_counter +=1
        return value

    def print_info(self):
        super().print_info()
        print(f"Licznik push: {self.get_push_counter()}")
        print(f"Licznik pop: {self.get_pop_counter()}")
        print()

def test(stack):
    stack_name = stack.__class__.__name__
    stack_max_size = stack.get_max_size()
    bar = (len(stack_name)+1)*"="
    print(bar + f"\n{stack_name}\n" +bar)
    stack.print_info()
    try:
        for i in range(stack_max_size+1):
            print(f"Pushing value {i}")
            stack.push(i)
            
    except StackOverflow as e:
        print(e)
    stack.print_info()
    try:
        for i in range(stack_max_size//4):
            print(f"Popped value: {stack.pop()}")
    except StackEmpty as e:
        print(e)
    stack.print_info()
    
    stack.clear()
    try:
        stack.pop()
    except StackEmpty as ex:
        print(ex)
    stack.print_info()




test(Stack(8))
test(CountingStack(15))
