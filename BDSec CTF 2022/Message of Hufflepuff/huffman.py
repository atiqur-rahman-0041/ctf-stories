# A Huffman Tree Node
class Node:
    def __init__(self, frequency, symbol, left=None, right=None):
        # frequency of symbol
        self.frequency = frequency

        # symbol 
        self.symbol = symbol

        # left node
        self.left = left

        # right node
        self.right = right

def build_huffman_tree(frequency_dict):
    huffman_nodes = []

    for key in frequency_dict.keys():
        huffman_nodes.append(Node(frequency_dict.get(key), key))

    while len(huffman_nodes) > 1:
        temp_nodes = []
        while len(huffman_nodes) > 1:
            left = huffman_nodes[0]
            right = huffman_nodes[1]
            
            newNode = Node(left.frequency + right.frequency, "", left, right)
            
            huffman_nodes.remove(left)
            huffman_nodes.remove(right)
            temp_nodes.append(newNode)

            if len(huffman_nodes)==1:
                temp_nodes.append(huffman_nodes[0])
                break
        huffman_nodes = temp_nodes

    return huffman_nodes[0]

                
def Huffman_Decoding(encoded_data, huffman_tree):
    tree_head = huffman_tree
    decoded_output = []
    for x in encoded_data:
        if x == '1':
            huffman_tree = huffman_tree.right   
        elif x == '0':
            huffman_tree = huffman_tree.left
        try:
            if huffman_tree.left.symbol == None and huffman_tree.right.symbol == None:
                pass
        except AttributeError:
            decoded_output.append(huffman_tree.symbol)
            huffman_tree = tree_head
        
    string = ''.join([str(item) for item in decoded_output])
    return string        


encoding = '001011110011010111001001110001001000100010000010001011110111001011110100001011000100101101110110101100101001010011101100111011111001000111110111111100000'

frequency_dict = {
        '}': 1,
        'c': 1,
        'H': 1,
        'O': 1,
        'm': 1,
        'B': 1,
        'S': 1,
        '{': 1,
        'u': 1,
        'd': 1,
        'o': 1,
        '@': 1,
        '0': 1,
        '1': 1,
        '7': 1,
        '3': 2,
        'f': 2,
        'C': 2,
        'g': 2,
        'E': 2,
        '_': 3,
        'n': 3,
        'D': 4,
    }

huffman_tree_root = build_huffman_tree(frequency_dict)
decoded_output = Huffman_Decoding(encoding, huffman_tree_root)

print("Decoded Output: ", decoded_output)
