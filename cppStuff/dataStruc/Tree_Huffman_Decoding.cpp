/*Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies. More frequent characters are assigned shorter codewords and less frequent characters are assigned longer codewords. A Huffman tree is made for the input string and characters are decoded based on their position in the tree. We add a '0' to the codeword when we move left in the binary tree and a '1' when we move right in the binary tree. We assign codes to the leaf nodes which represent the input characters.

  For example :

         {ϕ,5}
      0 /     \ 1
      {ϕ,2}   {A,3}
     0/   \1
   {B,1}  {C,1}  

  Input characters are only present on the leaves. Internal nodes have a character value of ϕ. Codewords:

  A - 1
  B - 00
  C - 01

  No codeword appears as a prefix of any other codeword. Huffman encoding is a prefix free encoding technique.

  Encoded String "1001011" represents the string "ABACA"

  You have to decode an encoded string using the Huffman tree.

  You are given pointer to the root of the Huffman tree and a binary coded string. You need to print the actual string.
  */
/*
   The structure of the node is

   typedef struct node
   {
   int freq;
   char data;
   node * left;
   node * right;

   }node;
   */


void decode_huff(node * root, string s)
{ 
    node* current = root;
    for ( int i = 0; i < s.length(); i++)
    {   
        if(s[i] == '1' ) 
            current = current->right;
        else if( s[i] == '0' )
            current = current->left;
        if ( current->left == NULL && current->right == NULL )
        {
            cout << current->data;
            current = root;
        }
    }
}
