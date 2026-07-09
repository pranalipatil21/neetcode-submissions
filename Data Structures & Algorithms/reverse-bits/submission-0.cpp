class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;

        for(int i=0; i<32;i++){
            result = result<<1;  //make space by left shift
            result |= (n&1); //copy last bit and put it in result
            n = n>>1; //right shift n to remove last bit
        }
        return result;
    }
};
