class Node:
	def __init__(self,data):
		self.data = data
		self.next = None

class Linkedlist:
	def __init__(self):
		self.head = None
	
	def create(self,arr):
		for i in arr:
			self.append(i)

	def push(self,newdata):
		newnode = Node(newdata)
		newnode.next = self.head
		self.head = newnode
	
	def append(self,newdata):
		newnode = Node(newdata)
		newnode.next = None
		if self.head is None:
			self.head = newnode
			return
		last = self.head
		while last.next:
			last = last.next
		last.next = newnode
	
	def after(self,n,newdata):
		if n == 0:
			self.push(newdata)
		else:
			p = self.head
			newnode = Node(newdata)
			newnode.next = None
			for i in range(0,n-1):
				p = p.next
			if p == None:
				print("use less index")
				return
			newnode.next = p.next
			p.next = newnode
	
	def delete(self,n):
		p=self.head
		q = p
		if n==0:
			self.head = p.next
			print(p.data,"==")
			del p
		else:
			test = 0
			for i in range(0,n):
				test+=1
				q=p
				p = p.next
			q.next = p.next
			print(p.data,"==")
			print(test)
			del p
	
	def count(self):
		temp = self.head
		i=0
		max = self.head.data
		while temp:
			if max<temp.data: max = temp.data
			i+=1
			temp = temp.next
		print("count",i,"max",max)

	def printlist(self):
		temp = self.head
		while temp:
			print(temp.data,end=",")
			temp = temp.next
		print()

	def search(self,n):
		temp = self.head
		while temp:
			if temp.data == n:
				print("found")
				return
			temp = temp.next
		print("notfound")

if __name__ == "__main__":
	list = Linkedlist()
	list.create([8,1,2,3,4,5])
	list.printlist()
	list.delete(2)
	list.printlist()
	# while True:
	# 	print("press any nuumber\n1. push\n2. append\n3. insert at\n4. delete\n5. count\n6. search\n7. display\n")
	# 	n = int(input())
	# 	if n==1:
	# 		list.push(int(input("number to be pushed")))
	# 	elif n==2:
	# 		list.append(int(input("number to append")))
	# 	elif n==3:
	# 		list.after(int(input("position")),int(input("number to added")))
	# 	elif n==4:
	# 		list.delete(int(input("node to delete")))
	# 	elif n==5:
	# 		list.count()
	# 	elif n==6:
	# 		list.search(int(input("number to search")))
	# 	elif n==7:
	# 		list.printlist()
	# 	else:
	# 		quit()