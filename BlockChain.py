import datetime
import hashlib
class Block:
 def _init_(self, previous_block_hash, data, timestamp):
 self.previous_block_hash = previous_block_hash
 self.data = data
 self.timestamp = timestamp
 self.hash = self.get_hash()
 @staticmethod
 def create_genesis_block():
 return Block("0", "0", datetime.datetime.now())
 def get_hash(self):
 header_bin = (str(self.previous_block_hash) + str(self.data) +str(self.timestamp))
 inner_hash = hashlib.sha256(header_bin.encode()).hexdigest().encode()
 outer_hash = hashlib.sha256(inner_hash).hexdigest()
 return outer_hash
num_blocks_to_add = 10
block_chain = [Block.create_genesis_block()]
print("The genesis block has been created.")
print("Hash: %s" % block_chain[0].hash)
for i in range(1, num_blocks_to_add):
 block_chain.append(Block(block_chain[i-1].hash, "Block number %d" %
i,datetime.datetime.now()))
 print("Block #%d created." % i)
 print("Hash: %s" % block_chain[-1].hash)




