class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None
    def __str__(self):
        return f'{self.data}'

def traverse(head):
    curr = head
    print("EOL", end="<->")
    while curr != None:
        print(curr, end="<->")
        curr = curr.next
    print("EOL") 

def add_front(head, data):
    if head == None:
        new_node = Node(data)
        new_node.next = None
        new_node.prev =  None
        head = new_node
        return new_node
    
    new_node = Node(data)
    new_node.next =  head
    head.prev = new_node
    new_node.prev = None
    return new_node

def add_back(head, data):
    if head == None:
        new_node = Node(data)
        new_node.next = None
        new_node.prev =  None
        head = new_node
        return new_node
    
    curr = head
    while curr.next != None:
        curr = curr.next

    new_node = Node(data)
    curr.next = new_node
    new_node.prev = curr
    new_node.next = None
    return head

def delete_front(head):
    if head == None:
        return None
    return head.next
    
def delete_end(head):
    curr = head
    if head ==  None and head.next == None:
        return None
    
    while curr.next.next != None:
        curr = curr.next
    curr.next = None
    return head

def add_before(head, before, data):
    curr = head

    while curr != None and curr.data != before:
        curr = curr.next
    
    if curr == None:
        print(f"{before} not found in the linked list")
        return head
    new_node = Node(data)
    new_node.prev = curr.prev
    new_node.next = curr
    curr.prev = new_node
    new_node.prev.next = new_node
    return head

def delete_before(head, before):
    curr = head

    while curr is not None and curr.data != before:
        curr = curr.next

    if curr is None or curr.prev is None or curr.prev.prev is None:
        print(f"Cannot delete before {before}. Node not found or there is no node before it.")
        return head

    curr.prev = curr.prev.prev
    curr.prev.next = curr

    return head


def main():
    head = None
    head = add_front(head, 2)
    head = add_back(head, 3)
    head = add_front(head, 1)
    head = add_back(head, 4)
    traverse(head)
    head = delete_front(head)
    head = delete_end(head)
    traverse(head)
    head = add_before(head, 3, 5)
    head = add_before(head, 10, 3)
    traverse(head)
    head = delete_before(head, 5)
    traverse(head)

if __name__ == '__main__':
    main()