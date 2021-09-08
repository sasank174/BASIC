class Node:
	def __init__(self,data):
		self.data = data
		self.next = None
		self.prev = None

class Linkedlist:
	def __init__(self):
		self.head = None
	
	def create(self,arr):
		for i in arr:
			self.append(i)

	def push(self,newdata):
		newnode = Node(newdata)
		newnode.next = self.head
		newnode.prev = None
		self.head = newnode
	
	def append(self,newdata):
		newnode = Node(newdata)
		newnode.next = None
		newnode.prev = None
		if self.head is None:
			self.head = newnode
			newnode.prev = self.head
			return
		last = self.head
		while last.next:
			last = last.next
		last.next = newnode
		newnode.prev = last
	
	def printlist(self):
		temp = self.head
		while temp:
			print(temp.data,end=",")
			temp = temp.next
		print()

if __name__ == "__main__":
	list = Linkedlist()
	list.create([8,1,2,3,4,5])
	list.printlist()
	print(list.head.data)