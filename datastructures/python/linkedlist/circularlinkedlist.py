class Node:
	def __init__(self,data):
		self.data = data
		self.next = None

class Linkedlist:
	def __init__(self):
		self.head = None
		self.last = None
	
	def create(self,arr):
		self.head = Node(arr[0])
		self.head.next = self.head
		self.last = self.head
		
		for i in arr[1:]:
			newnode = Node(i)
			newnode.next = self.last.next
			self.last.next = newnode
			self.last = newnode
	
	def print(self):
		temp = self.head
		print(temp.data,end=",")
		temp = temp.next
		while temp!=self.head:
			print(temp.data,end=",")
			temp = temp.next
		print()

	def append(self,data):
		newnode = Node(data)
		newnode.next = self.last.next
		self.last.next = newnode
		self.last = newnode

	def push(self,data):
		newnode = Node(data)
		newnode.next = self.head
		self.last.next = newnode
		self.head = newnode

	def insertat(self,n,data):
		if n==0:
			self.push(data)
			return
		else:
			p=self.head
			for i in range(0,n-1):
				p=p.next
			newnode = Node(data)
			newnode.next = p.next
			if p == self.last:
				self.last = newnode
			p.next = newnode

	def delete(self,n):
		p=self.head
		q = p
		if n==0:
			self.head = p.next
			self.last.next = self.head
			print(p.data,"==")
			del p
		else:
			for i in range(0,n):
				q=p
				p = p.next
			if(p == self.head):
				self.head = p.next
				self.last.next = self.head
				print(p.data,"==")
				del p
			else:
				q.next = p.next
				print(p.data,"==")
				del p

if __name__ == "__main__":
	list = Linkedlist()
	list.create([8,1,2,3,4,5])
	list.print()
	print(end="===========")
	list.insertat(7,10)
	list.print()