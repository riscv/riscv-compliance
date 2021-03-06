
# Data Propagation Report

- **STAT1** : Number of instructions that hit unique coverpoints and update the signature.
- **STAT2** : Number of instructions that hit covepoints which are not unique but still update the signature
- **STAT3** : Number of instructions that hit a unique coverpoint but do not update signature
- **STAT4** : Number of multiple signature updates for the same coverpoint
- **STAT5** : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 32      |
| TEST_REGION               | [('0x800000f8', '0x80000db0')]      |
| SIG_REGION                | [('0x80002010', '0x800023e0', '244 words')]      |
| COV_LABELS                | sha512sum0r      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/temp/riscof_work/sha512sum0r-rwp1.S/ref.S    |
| Total Number of coverpoints| 256     |
| Total Coverpoints Hit     | 83      |
| Total Signature Updates   | 243      |
| STAT1                     | 27      |
| STAT2                     | 54      |
| STAT3                     | 0     |
| STAT4                     | 162     |
| STAT5                     | 0     |

## Details for STAT2:

```
Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000013c]:sha512sum0r
      [0x80000140]:xori
      [0x80000144]:sw
 -- Signature Address: 0x8000201c Data: 0x923453af
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x3
      - rs2 : x2
      - rd : x1
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000164]:sha512sum0r
      [0x80000168]:add
      [0x8000016c]:sw
 -- Signature Address: 0x80002028 Data: 0x00131d23
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x3
      - rs2 : x2
      - rd : x1
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800001b4]:sha512sum0r
      [0x800001b8]:xori
      [0x800001bc]:sw
 -- Signature Address: 0x80002040 Data: 0xd6fb3210
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x4
      - rs2 : x3
      - rd : x2
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800001dc]:sha512sum0r
      [0x800001e0]:add
      [0x800001e4]:sw
 -- Signature Address: 0x8000204c Data: 0xfbdb8666
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x4
      - rs2 : x3
      - rd : x2
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000022c]:sha512sum0r
      [0x80000230]:xori
      [0x80000234]:sw
 -- Signature Address: 0x80002064 Data: 0x23cc7c7c
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x5
      - rs2 : x4
      - rd : x3
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000254]:sha512sum0r
      [0x80000258]:add
      [0x8000025c]:sw
 -- Signature Address: 0x80002070 Data: 0xe79b8f9f
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x5
      - rs2 : x4
      - rd : x3
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800002a4]:sha512sum0r
      [0x800002a8]:xori
      [0x800002ac]:sw
 -- Signature Address: 0x80002088 Data: 0x506b61a1
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x6
      - rs2 : x5
      - rd : x4
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800002cc]:sha512sum0r
      [0x800002d0]:add
      [0x800002d4]:sw
 -- Signature Address: 0x80002094 Data: 0x2487814b
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x6
      - rs2 : x5
      - rd : x4
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000031c]:sha512sum0r
      [0x80000320]:xori
      [0x80000324]:sw
 -- Signature Address: 0x800020ac Data: 0x62fd036f
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x7
      - rs2 : x6
      - rd : x5
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000344]:sha512sum0r
      [0x80000348]:add
      [0x8000034c]:sw
 -- Signature Address: 0x800020b8 Data: 0x952ccf2f
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x7
      - rs2 : x6
      - rd : x5
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000394]:sha512sum0r
      [0x80000398]:xori
      [0x8000039c]:sw
 -- Signature Address: 0x800020d0 Data: 0x90604668
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x8
      - rs2 : x7
      - rd : x6
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800003bc]:sha512sum0r
      [0x800003c0]:add
      [0x800003c4]:sw
 -- Signature Address: 0x800020dc Data: 0xfc29d249
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x8
      - rs2 : x7
      - rd : x6
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000040c]:sha512sum0r
      [0x80000410]:xori
      [0x80000414]:sw
 -- Signature Address: 0x800020f4 Data: 0x57947591
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x9
      - rs2 : x8
      - rd : x7
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000434]:sha512sum0r
      [0x80000438]:add
      [0x8000043c]:sw
 -- Signature Address: 0x80002100 Data: 0x278cf290
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x9
      - rs2 : x8
      - rd : x7
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000484]:sha512sum0r
      [0x80000488]:xori
      [0x8000048c]:sw
 -- Signature Address: 0x80002118 Data: 0x314af909
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x10
      - rs2 : x9
      - rd : x8
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800004ac]:sha512sum0r
      [0x800004b0]:add
      [0x800004b4]:sw
 -- Signature Address: 0x80002124 Data: 0xe7702fdf
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x10
      - rs2 : x9
      - rd : x8
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800004fc]:sha512sum0r
      [0x80000500]:xori
      [0x80000504]:sw
 -- Signature Address: 0x8000213c Data: 0x8b54f5c7
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x11
      - rs2 : x10
      - rd : x9
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000524]:sha512sum0r
      [0x80000528]:add
      [0x8000052c]:sw
 -- Signature Address: 0x80002148 Data: 0x934171fa
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x11
      - rs2 : x10
      - rd : x9
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000574]:sha512sum0r
      [0x80000578]:xori
      [0x8000057c]:sw
 -- Signature Address: 0x80002160 Data: 0x4994cd7b
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x12
      - rs2 : x11
      - rd : x10
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000059c]:sha512sum0r
      [0x800005a0]:add
      [0x800005a4]:sw
 -- Signature Address: 0x8000216c Data: 0x25b4634c
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x12
      - rs2 : x11
      - rd : x10
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800005ec]:sha512sum0r
      [0x800005f0]:xori
      [0x800005f4]:sw
 -- Signature Address: 0x80002184 Data: 0x21657690
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x13
      - rs2 : x12
      - rd : x11
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000614]:sha512sum0r
      [0x80000618]:add
      [0x8000061c]:sw
 -- Signature Address: 0x80002190 Data: 0x73d0208b
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x13
      - rs2 : x12
      - rd : x11
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000664]:sha512sum0r
      [0x80000668]:xori
      [0x8000066c]:sw
 -- Signature Address: 0x800021a8 Data: 0x994f8d46
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x14
      - rs2 : x13
      - rd : x12
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000068c]:sha512sum0r
      [0x80000690]:add
      [0x80000694]:sw
 -- Signature Address: 0x800021b4 Data: 0x76c2616d
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x14
      - rs2 : x13
      - rd : x12
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800006dc]:sha512sum0r
      [0x800006e0]:xori
      [0x800006e4]:sw
 -- Signature Address: 0x800021cc Data: 0x76eed0f5
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x15
      - rs2 : x14
      - rd : x13
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000704]:sha512sum0r
      [0x80000708]:add
      [0x8000070c]:sw
 -- Signature Address: 0x800021d8 Data: 0x89caadb0
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x15
      - rs2 : x14
      - rd : x13
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000754]:sha512sum0r
      [0x80000758]:xori
      [0x8000075c]:sw
 -- Signature Address: 0x800021f0 Data: 0x4616c2ad
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x16
      - rs2 : x15
      - rd : x14
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000077c]:sha512sum0r
      [0x80000780]:add
      [0x80000784]:sw
 -- Signature Address: 0x800021fc Data: 0x2c5d9059
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x16
      - rs2 : x15
      - rd : x14
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800007cc]:sha512sum0r
      [0x800007d0]:xori
      [0x800007d4]:sw
 -- Signature Address: 0x80002214 Data: 0x501f75ec
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x17
      - rs2 : x16
      - rd : x15
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800007f4]:sha512sum0r
      [0x800007f8]:add
      [0x800007fc]:sw
 -- Signature Address: 0x80002220 Data: 0x4e5ea9d6
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x17
      - rs2 : x16
      - rd : x15
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000844]:sha512sum0r
      [0x80000848]:xori
      [0x8000084c]:sw
 -- Signature Address: 0x80002238 Data: 0x48214464
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x18
      - rs2 : x17
      - rd : x16
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000086c]:sha512sum0r
      [0x80000870]:add
      [0x80000874]:sw
 -- Signature Address: 0x80002244 Data: 0x93bc0974
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x18
      - rs2 : x17
      - rd : x16
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800008bc]:sha512sum0r
      [0x800008c0]:xori
      [0x800008c4]:sw
 -- Signature Address: 0x8000225c Data: 0xdbd57f64
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x19
      - rs2 : x18
      - rd : x17
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800008e4]:sha512sum0r
      [0x800008e8]:add
      [0x800008ec]:sw
 -- Signature Address: 0x80002268 Data: 0xcfafb55c
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x19
      - rs2 : x18
      - rd : x17
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000934]:sha512sum0r
      [0x80000938]:xori
      [0x8000093c]:sw
 -- Signature Address: 0x80002280 Data: 0x93965e8d
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x20
      - rs2 : x19
      - rd : x18
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x8000095c]:sha512sum0r
      [0x80000960]:add
      [0x80000964]:sw
 -- Signature Address: 0x8000228c Data: 0x6c55d770
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x20
      - rs2 : x19
      - rd : x18
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800009ac]:sha512sum0r
      [0x800009b0]:xori
      [0x800009b4]:sw
 -- Signature Address: 0x800022a4 Data: 0x63e5ead7
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x21
      - rs2 : x20
      - rd : x19
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800009d4]:sha512sum0r
      [0x800009d8]:add
      [0x800009dc]:sw
 -- Signature Address: 0x800022b0 Data: 0xd1c204e8
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x21
      - rs2 : x20
      - rd : x19
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000a24]:sha512sum0r
      [0x80000a28]:xori
      [0x80000a2c]:sw
 -- Signature Address: 0x800022c8 Data: 0x8b0a522a
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x22
      - rs2 : x21
      - rd : x20
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000a4c]:sha512sum0r
      [0x80000a50]:add
      [0x80000a54]:sw
 -- Signature Address: 0x800022d4 Data: 0xb62992ac
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x22
      - rs2 : x21
      - rd : x20
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000a9c]:sha512sum0r
      [0x80000aa0]:xori
      [0x80000aa4]:sw
 -- Signature Address: 0x800022ec Data: 0xbc8343be
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x23
      - rs2 : x22
      - rd : x21
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000ac4]:sha512sum0r
      [0x80000ac8]:add
      [0x80000acc]:sw
 -- Signature Address: 0x800022f8 Data: 0xc5272ced
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x23
      - rs2 : x22
      - rd : x21
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000b14]:sha512sum0r
      [0x80000b18]:xori
      [0x80000b1c]:sw
 -- Signature Address: 0x80002310 Data: 0x34da9248
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x24
      - rs2 : x23
      - rd : x22
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000b3c]:sha512sum0r
      [0x80000b40]:add
      [0x80000b44]:sw
 -- Signature Address: 0x8000231c Data: 0x836d5df5
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x24
      - rs2 : x23
      - rd : x22
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000b8c]:sha512sum0r
      [0x80000b90]:xori
      [0x80000b94]:sw
 -- Signature Address: 0x80002334 Data: 0x63c2f783
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x25
      - rs2 : x24
      - rd : x23
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000bb4]:sha512sum0r
      [0x80000bb8]:add
      [0x80000bbc]:sw
 -- Signature Address: 0x80002340 Data: 0x59caa5dc
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x25
      - rs2 : x24
      - rd : x23
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000c04]:sha512sum0r
      [0x80000c08]:xori
      [0x80000c0c]:sw
 -- Signature Address: 0x80002358 Data: 0x0c81d85c
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x26
      - rs2 : x25
      - rd : x24
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000c2c]:sha512sum0r
      [0x80000c30]:add
      [0x80000c34]:sw
 -- Signature Address: 0x80002364 Data: 0xb230c0dd
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x26
      - rs2 : x25
      - rd : x24
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000c7c]:sha512sum0r
      [0x80000c80]:xori
      [0x80000c84]:sw
 -- Signature Address: 0x8000237c Data: 0x6f506a01
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x27
      - rs2 : x26
      - rd : x25
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000ca4]:sha512sum0r
      [0x80000ca8]:add
      [0x80000cac]:sw
 -- Signature Address: 0x80002388 Data: 0x9d856ee0
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x27
      - rs2 : x26
      - rd : x25
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000cf4]:sha512sum0r
      [0x80000cf8]:xori
      [0x80000cfc]:sw
 -- Signature Address: 0x800023a0 Data: 0xa690a076
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x28
      - rs2 : x27
      - rd : x26
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000d1c]:sha512sum0r
      [0x80000d20]:add
      [0x80000d24]:sw
 -- Signature Address: 0x800023ac Data: 0x5964c114
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x28
      - rs2 : x27
      - rd : x26
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000d6c]:sha512sum0r
      [0x80000d70]:xori
      [0x80000d74]:sw
 -- Signature Address: 0x800023c4 Data: 0x63e08be0
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x29
      - rs2 : x28
      - rd : x27
      - rs1 != rs2  and rs1 != rd and rs2 != rd




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000d94]:sha512sum0r
      [0x80000d98]:add
      [0x80000d9c]:sw
 -- Signature Address: 0x800023d0 Data: 0x50fbf20d
 -- Redundant Coverpoints hit by the op
      - opcode : sha512sum0r
      - rs1 : x29
      - rs2 : x28
      - rd : x27
      - rs1 != rs2  and rs1 != rd and rs2 != rd






```

## Details of STAT3

```


```

## Details of STAT4:

```
Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x3', 'rs2 : x2', 'rd : x1', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000114]:sha512sum0r
	-[0x80000118]:xor
	-[0x8000011c]:sw
Current Store : [0x80000120] : None -- Store: [0x80002014]:0x0113b943




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x3', 'rs2 : x2', 'rd : x1', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000114]:sha512sum0r
	-[0x80000118]:xor
	-[0x8000011c]:sw
Current Store : [0x80000124] : None -- Store: [0x80002018]:0x6cd81513




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x3', 'rs2 : x2', 'rd : x1', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000013c]:sha512sum0r
	-[0x80000140]:xori
	-[0x80000144]:sw
Current Store : [0x80000148] : None -- Store: [0x80002020]:0x5913b945




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x3', 'rs2 : x2', 'rd : x1', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000013c]:sha512sum0r
	-[0x80000140]:xori
	-[0x80000144]:sw
Current Store : [0x8000014c] : None -- Store: [0x80002024]:0xa6ec46ba




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x3', 'rs2 : x2', 'rd : x1', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000164]:sha512sum0r
	-[0x80000168]:add
	-[0x8000016c]:sw
Current Store : [0x80000170] : None -- Store: [0x8000202c]:0x4113b94c




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x3', 'rs2 : x2', 'rd : x1', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000164]:sha512sum0r
	-[0x80000168]:add
	-[0x8000016c]:sw
Current Store : [0x80000174] : None -- Store: [0x80002030]:0xaedf659c




Last Coverpoint : ['rs1 : x4', 'rs2 : x3', 'rd : x2']
Last Code Sequence : 
	-[0x8000018c]:sha512sum0r
	-[0x80000190]:xor
	-[0x80000194]:sw
Current Store : [0x80000198] : None -- Store: [0x80002038]:0xaa5fe41f




Last Coverpoint : ['rs1 : x4', 'rs2 : x3', 'rd : x2']
Last Code Sequence : 
	-[0x8000018c]:sha512sum0r
	-[0x80000190]:xor
	-[0x80000194]:sw
Current Store : [0x8000019c] : None -- Store: [0x8000203c]:0x835b29f0




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x4', 'rs2 : x3', 'rd : x2', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800001b4]:sha512sum0r
	-[0x800001b8]:xori
	-[0x800001bc]:sw
Current Store : [0x800001c0] : None -- Store: [0x80002044]:0xba5fe41d




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x4', 'rs2 : x3', 'rd : x2', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800001b4]:sha512sum0r
	-[0x800001b8]:xori
	-[0x800001bc]:sw
Current Store : [0x800001c4] : None -- Store: [0x80002048]:0x45a01be2




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x4', 'rs2 : x3', 'rd : x2', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800001dc]:sha512sum0r
	-[0x800001e0]:add
	-[0x800001e4]:sw
Current Store : [0x800001e8] : None -- Store: [0x80002050]:0xd65fe41f




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x4', 'rs2 : x3', 'rd : x2', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800001dc]:sha512sum0r
	-[0x800001e0]:add
	-[0x800001e4]:sw
Current Store : [0x800001ec] : None -- Store: [0x80002054]:0xff64b20e




Last Coverpoint : ['rs1 : x5', 'rs2 : x4', 'rd : x3']
Last Code Sequence : 
	-[0x80000204]:sha512sum0r
	-[0x80000208]:xor
	-[0x8000020c]:sw
Current Store : [0x80000210] : None -- Store: [0x8000205c]:0x0b8cbfda




Last Coverpoint : ['rs1 : x5', 'rs2 : x4', 'rd : x3']
Last Code Sequence : 
	-[0x80000204]:sha512sum0r
	-[0x80000208]:xor
	-[0x8000020c]:sw
Current Store : [0x80000214] : None -- Store: [0x80002060]:0xd7bf3c59




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x5', 'rs2 : x4', 'rd : x3', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000022c]:sha512sum0r
	-[0x80000230]:xori
	-[0x80000234]:sw
Current Store : [0x80000238] : None -- Store: [0x80002068]:0x0d8cbfd5




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x5', 'rs2 : x4', 'rd : x3', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000022c]:sha512sum0r
	-[0x80000230]:xori
	-[0x80000234]:sw
Current Store : [0x8000023c] : None -- Store: [0x8000206c]:0xf273402a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x5', 'rs2 : x4', 'rd : x3', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000254]:sha512sum0r
	-[0x80000258]:add
	-[0x8000025c]:sw
Current Store : [0x80000260] : None -- Store: [0x80002074]:0x0b8cbfd9




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x5', 'rs2 : x4', 'rd : x3', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000254]:sha512sum0r
	-[0x80000258]:add
	-[0x8000025c]:sw
Current Store : [0x80000264] : None -- Store: [0x80002078]:0xe7c0435c




Last Coverpoint : ['rs1 : x6', 'rs2 : x5', 'rd : x4']
Last Code Sequence : 
	-[0x8000027c]:sha512sum0r
	-[0x80000280]:xor
	-[0x80000284]:sw
Current Store : [0x80000288] : None -- Store: [0x80002080]:0x75f3eb46




Last Coverpoint : ['rs1 : x6', 'rs2 : x5', 'rd : x4']
Last Code Sequence : 
	-[0x8000027c]:sha512sum0r
	-[0x80000280]:xor
	-[0x80000284]:sw
Current Store : [0x8000028c] : None -- Store: [0x80002084]:0xda677518




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x6', 'rs2 : x5', 'rd : x4', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800002a4]:sha512sum0r
	-[0x800002a8]:xori
	-[0x800002ac]:sw
Current Store : [0x800002b0] : None -- Store: [0x8000208c]:0xd1f3eb4e




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x6', 'rs2 : x5', 'rd : x4', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800002a4]:sha512sum0r
	-[0x800002a8]:xori
	-[0x800002ac]:sw
Current Store : [0x800002b4] : None -- Store: [0x80002090]:0x2e0c14b1




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x6', 'rs2 : x5', 'rd : x4', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800002cc]:sha512sum0r
	-[0x800002d0]:add
	-[0x800002d4]:sw
Current Store : [0x800002d8] : None -- Store: [0x80002098]:0x85f3eb49




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x6', 'rs2 : x5', 'rd : x4', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800002cc]:sha512sum0r
	-[0x800002d0]:add
	-[0x800002d4]:sw
Current Store : [0x800002dc] : None -- Store: [0x8000209c]:0x358889a7




Last Coverpoint : ['rs1 : x7', 'rs2 : x6', 'rd : x5']
Last Code Sequence : 
	-[0x800002f4]:sha512sum0r
	-[0x800002f8]:xor
	-[0x800002fc]:sw
Current Store : [0x80000300] : None -- Store: [0x800020a4]:0x285573db




Last Coverpoint : ['rs1 : x7', 'rs2 : x6', 'rd : x5']
Last Code Sequence : 
	-[0x800002f4]:sha512sum0r
	-[0x800002f8]:xor
	-[0x800002fc]:sw
Current Store : [0x80000304] : None -- Store: [0x800020a8]:0xb5578f4b




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x7', 'rs2 : x6', 'rd : x5', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000031c]:sha512sum0r
	-[0x80000320]:xori
	-[0x80000324]:sw
Current Store : [0x80000328] : None -- Store: [0x800020b0]:0xe85573db




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x7', 'rs2 : x6', 'rd : x5', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000031c]:sha512sum0r
	-[0x80000320]:xori
	-[0x80000324]:sw
Current Store : [0x8000032c] : None -- Store: [0x800020b4]:0x17aa8c24




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x7', 'rs2 : x6', 'rd : x5', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000344]:sha512sum0r
	-[0x80000348]:add
	-[0x8000034c]:sw
Current Store : [0x80000350] : None -- Store: [0x800020bc]:0x685573d4




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x7', 'rs2 : x6', 'rd : x5', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000344]:sha512sum0r
	-[0x80000348]:add
	-[0x8000034c]:sw
Current Store : [0x80000354] : None -- Store: [0x800020c0]:0x05587064




Last Coverpoint : ['rs1 : x8', 'rs2 : x7', 'rd : x6']
Last Code Sequence : 
	-[0x8000036c]:sha512sum0r
	-[0x80000370]:xor
	-[0x80000374]:sw
Current Store : [0x80000378] : None -- Store: [0x800020c8]:0xe8c34868




Last Coverpoint : ['rs1 : x8', 'rs2 : x7', 'rd : x6']
Last Code Sequence : 
	-[0x8000036c]:sha512sum0r
	-[0x80000370]:xor
	-[0x80000374]:sw
Current Store : [0x8000037c] : None -- Store: [0x800020cc]:0x875cf1ff




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x8', 'rs2 : x7', 'rd : x6', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000394]:sha512sum0r
	-[0x80000398]:xori
	-[0x8000039c]:sw
Current Store : [0x800003a0] : None -- Store: [0x800020d4]:0x32c3486f




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x8', 'rs2 : x7', 'rd : x6', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000394]:sha512sum0r
	-[0x80000398]:xori
	-[0x8000039c]:sw
Current Store : [0x800003a4] : None -- Store: [0x800020d8]:0xcd3cb790




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x8', 'rs2 : x7', 'rd : x6', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800003bc]:sha512sum0r
	-[0x800003c0]:add
	-[0x800003c4]:sw
Current Store : [0x800003c8] : None -- Store: [0x800020e0]:0x30c34869




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x8', 'rs2 : x7', 'rd : x6', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800003bc]:sha512sum0r
	-[0x800003c0]:add
	-[0x800003c4]:sw
Current Store : [0x800003cc] : None -- Store: [0x800020e4]:0xa0630200




Last Coverpoint : ['rs1 : x9', 'rs2 : x8', 'rd : x7']
Last Code Sequence : 
	-[0x800003e4]:sha512sum0r
	-[0x800003e8]:xor
	-[0x800003ec]:sw
Current Store : [0x800003f0] : None -- Store: [0x800020ec]:0x35f29362




Last Coverpoint : ['rs1 : x9', 'rs2 : x8', 'rd : x7']
Last Code Sequence : 
	-[0x800003e4]:sha512sum0r
	-[0x800003e8]:xor
	-[0x800003ec]:sw
Current Store : [0x800003f4] : None -- Store: [0x800020f0]:0x9d99190c




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x9', 'rs2 : x8', 'rd : x7', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000040c]:sha512sum0r
	-[0x80000410]:xori
	-[0x80000414]:sw
Current Store : [0x80000418] : None -- Store: [0x800020f8]:0xcff2936a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x9', 'rs2 : x8', 'rd : x7', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000040c]:sha512sum0r
	-[0x80000410]:xori
	-[0x80000414]:sw
Current Store : [0x8000041c] : None -- Store: [0x800020fc]:0x300d6c95




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x9', 'rs2 : x8', 'rd : x7', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000434]:sha512sum0r
	-[0x80000438]:add
	-[0x8000043c]:sw
Current Store : [0x80000440] : None -- Store: [0x80002104]:0x8df2936d




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x9', 'rs2 : x8', 'rd : x7', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000434]:sha512sum0r
	-[0x80000438]:add
	-[0x8000043c]:sw
Current Store : [0x80000444] : None -- Store: [0x80002108]:0x365e1ddb




Last Coverpoint : ['rs1 : x10', 'rs2 : x9', 'rd : x8']
Last Code Sequence : 
	-[0x8000045c]:sha512sum0r
	-[0x80000460]:xor
	-[0x80000464]:sw
Current Store : [0x80000468] : None -- Store: [0x80002110]:0x276044dd




Last Coverpoint : ['rs1 : x10', 'rs2 : x9', 'rd : x8']
Last Code Sequence : 
	-[0x8000045c]:sha512sum0r
	-[0x80000460]:xor
	-[0x80000464]:sw
Current Store : [0x8000046c] : None -- Store: [0x80002114]:0xe9d5422b




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x10', 'rs2 : x9', 'rd : x8', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000484]:sha512sum0r
	-[0x80000488]:xori
	-[0x8000048c]:sw
Current Store : [0x80000490] : None -- Store: [0x8000211c]:0x8b6044d3




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x10', 'rs2 : x9', 'rd : x8', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000484]:sha512sum0r
	-[0x80000488]:xori
	-[0x8000048c]:sw
Current Store : [0x80000494] : None -- Store: [0x80002120]:0x749fbb2c




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x10', 'rs2 : x9', 'rd : x8', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800004ac]:sha512sum0r
	-[0x800004b0]:add
	-[0x800004b4]:sw
Current Store : [0x800004b8] : None -- Store: [0x80002128]:0xa76044de




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x10', 'rs2 : x9', 'rd : x8', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800004ac]:sha512sum0r
	-[0x800004b0]:add
	-[0x800004b4]:sw
Current Store : [0x800004bc] : None -- Store: [0x8000212c]:0x76154bd4




Last Coverpoint : ['rs1 : x11', 'rs2 : x10', 'rd : x9']
Last Code Sequence : 
	-[0x800004d4]:sha512sum0r
	-[0x800004d8]:xor
	-[0x800004dc]:sw
Current Store : [0x800004e0] : None -- Store: [0x80002134]:0x2373371c




Last Coverpoint : ['rs1 : x11', 'rs2 : x10', 'rd : x9']
Last Code Sequence : 
	-[0x800004d4]:sha512sum0r
	-[0x800004d8]:xor
	-[0x800004dc]:sw
Current Store : [0x800004e4] : None -- Store: [0x80002138]:0x57d83d24




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x11', 'rs2 : x10', 'rd : x9', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800004fc]:sha512sum0r
	-[0x80000500]:xori
	-[0x80000504]:sw
Current Store : [0x80000508] : None -- Store: [0x80002140]:0x19733712




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x11', 'rs2 : x10', 'rd : x9', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800004fc]:sha512sum0r
	-[0x80000500]:xori
	-[0x80000504]:sw
Current Store : [0x8000050c] : None -- Store: [0x80002144]:0xe68cc8ed




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x11', 'rs2 : x10', 'rd : x9', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000524]:sha512sum0r
	-[0x80000528]:add
	-[0x8000052c]:sw
Current Store : [0x80000530] : None -- Store: [0x8000214c]:0x23733713




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x11', 'rs2 : x10', 'rd : x9', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000524]:sha512sum0r
	-[0x80000528]:add
	-[0x8000052c]:sw
Current Store : [0x80000534] : None -- Store: [0x80002150]:0x981e414b




Last Coverpoint : ['rs1 : x12', 'rs2 : x11', 'rd : x10']
Last Code Sequence : 
	-[0x8000054c]:sha512sum0r
	-[0x80000550]:xor
	-[0x80000554]:sw
Current Store : [0x80000558] : None -- Store: [0x80002158]:0xd2453289




Last Coverpoint : ['rs1 : x12', 'rs2 : x11', 'rd : x10']
Last Code Sequence : 
	-[0x8000054c]:sha512sum0r
	-[0x80000550]:xor
	-[0x80000554]:sw
Current Store : [0x8000055c] : None -- Store: [0x8000215c]:0x642e000d




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x12', 'rs2 : x11', 'rd : x10', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000574]:sha512sum0r
	-[0x80000578]:xori
	-[0x8000057c]:sw
Current Store : [0x80000580] : None -- Store: [0x80002164]:0x7c453280




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x12', 'rs2 : x11', 'rd : x10', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000574]:sha512sum0r
	-[0x80000578]:xori
	-[0x8000057c]:sw
Current Store : [0x80000584] : None -- Store: [0x80002168]:0x83bacd7f




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x12', 'rs2 : x11', 'rd : x10', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000059c]:sha512sum0r
	-[0x800005a0]:add
	-[0x800005a4]:sw
Current Store : [0x800005a8] : None -- Store: [0x80002170]:0xd2453286




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x12', 'rs2 : x11', 'rd : x10', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000059c]:sha512sum0r
	-[0x800005a0]:add
	-[0x800005a4]:sw
Current Store : [0x800005ac] : None -- Store: [0x80002174]:0x88b0650a




Last Coverpoint : ['rs1 : x13', 'rs2 : x12', 'rd : x11']
Last Code Sequence : 
	-[0x800005c4]:sha512sum0r
	-[0x800005c8]:xor
	-[0x800005cc]:sw
Current Store : [0x800005d0] : None -- Store: [0x8000217c]:0xf9b301bd




Last Coverpoint : ['rs1 : x13', 'rs2 : x12', 'rd : x11']
Last Code Sequence : 
	-[0x800005c4]:sha512sum0r
	-[0x800005c8]:xor
	-[0x800005cc]:sw
Current Store : [0x800005d4] : None -- Store: [0x80002180]:0x272988d2




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x13', 'rs2 : x12', 'rd : x11', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800005ec]:sha512sum0r
	-[0x800005f0]:xori
	-[0x800005f4]:sw
Current Store : [0x800005f8] : None -- Store: [0x80002188]:0xffb301bb




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x13', 'rs2 : x12', 'rd : x11', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800005ec]:sha512sum0r
	-[0x800005f0]:xori
	-[0x800005f4]:sw
Current Store : [0x800005fc] : None -- Store: [0x8000218c]:0x004cfe44




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x13', 'rs2 : x12', 'rd : x11', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000614]:sha512sum0r
	-[0x80000618]:add
	-[0x8000061c]:sw
Current Store : [0x80000620] : None -- Store: [0x80002194]:0x09b301be




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x13', 'rs2 : x12', 'rd : x11', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000614]:sha512sum0r
	-[0x80000618]:add
	-[0x8000061c]:sw
Current Store : [0x80000624] : None -- Store: [0x80002198]:0xe84d8b2d




Last Coverpoint : ['rs1 : x14', 'rs2 : x13', 'rd : x12']
Last Code Sequence : 
	-[0x8000063c]:sha512sum0r
	-[0x80000640]:xor
	-[0x80000644]:sw
Current Store : [0x80000648] : None -- Store: [0x800021a0]:0x286657dc




Last Coverpoint : ['rs1 : x14', 'rs2 : x13', 'rd : x12']
Last Code Sequence : 
	-[0x8000063c]:sha512sum0r
	-[0x80000640]:xor
	-[0x80000644]:sw
Current Store : [0x8000064c] : None -- Store: [0x800021a4]:0x4ed62565




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x14', 'rs2 : x13', 'rd : x12', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000664]:sha512sum0r
	-[0x80000668]:xori
	-[0x8000066c]:sw
Current Store : [0x80000670] : None -- Store: [0x800021ac]:0x7e6657d2




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x14', 'rs2 : x13', 'rd : x12', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000664]:sha512sum0r
	-[0x80000668]:xori
	-[0x8000066c]:sw
Current Store : [0x80000674] : None -- Store: [0x800021b0]:0x8199a82d




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x14', 'rs2 : x13', 'rd : x12', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000068c]:sha512sum0r
	-[0x80000690]:add
	-[0x80000694]:sw
Current Store : [0x80000698] : None -- Store: [0x800021b8]:0xe86657dc




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x14', 'rs2 : x13', 'rd : x12', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000068c]:sha512sum0r
	-[0x80000690]:add
	-[0x80000694]:sw
Current Store : [0x8000069c] : None -- Store: [0x800021bc]:0x4f16ca95




Last Coverpoint : ['rs1 : x15', 'rs2 : x14', 'rd : x13']
Last Code Sequence : 
	-[0x800006b4]:sha512sum0r
	-[0x800006b8]:xor
	-[0x800006bc]:sw
Current Store : [0x800006c0] : None -- Store: [0x800021c4]:0xea449934




Last Coverpoint : ['rs1 : x15', 'rs2 : x14', 'rd : x13']
Last Code Sequence : 
	-[0x800006b4]:sha512sum0r
	-[0x800006b8]:xor
	-[0x800006bc]:sw
Current Store : [0x800006c4] : None -- Store: [0x800021c8]:0x6355b63e




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x15', 'rs2 : x14', 'rd : x13', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800006dc]:sha512sum0r
	-[0x800006e0]:xori
	-[0x800006e4]:sw
Current Store : [0x800006e8] : None -- Store: [0x800021d0]:0x1844993b




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x15', 'rs2 : x14', 'rd : x13', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800006dc]:sha512sum0r
	-[0x800006e0]:xori
	-[0x800006e4]:sw
Current Store : [0x800006ec] : None -- Store: [0x800021d4]:0xe7bb66c4




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x15', 'rs2 : x14', 'rd : x13', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000704]:sha512sum0r
	-[0x80000708]:add
	-[0x8000070c]:sw
Current Store : [0x80000710] : None -- Store: [0x800021dc]:0xd2449934




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x15', 'rs2 : x14', 'rd : x13', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000704]:sha512sum0r
	-[0x80000708]:add
	-[0x8000070c]:sw
Current Store : [0x80000714] : None -- Store: [0x800021e0]:0x5b55c83e




Last Coverpoint : ['rs1 : x16', 'rs2 : x15', 'rd : x14']
Last Code Sequence : 
	-[0x8000072c]:sha512sum0r
	-[0x80000730]:xor
	-[0x80000734]:sw
Current Store : [0x80000738] : None -- Store: [0x800021e8]:0x5b9a4802




Last Coverpoint : ['rs1 : x16', 'rs2 : x15', 'rd : x14']
Last Code Sequence : 
	-[0x8000072c]:sha512sum0r
	-[0x80000730]:xor
	-[0x80000734]:sw
Current Store : [0x8000073c] : None -- Store: [0x800021ec]:0xe2737550




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x16', 'rs2 : x15', 'rd : x14', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000754]:sha512sum0r
	-[0x80000758]:xori
	-[0x8000075c]:sw
Current Store : [0x80000760] : None -- Store: [0x800021f4]:0xab9a480a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x16', 'rs2 : x15', 'rd : x14', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000754]:sha512sum0r
	-[0x80000758]:xori
	-[0x8000075c]:sw
Current Store : [0x80000764] : None -- Store: [0x800021f8]:0x5465b7f5




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x16', 'rs2 : x15', 'rd : x14', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000077c]:sha512sum0r
	-[0x80000780]:add
	-[0x80000784]:sw
Current Store : [0x80000788] : None -- Store: [0x80002200]:0x439a480c




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x16', 'rs2 : x15', 'rd : x14', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000077c]:sha512sum0r
	-[0x80000780]:add
	-[0x80000784]:sw
Current Store : [0x8000078c] : None -- Store: [0x80002204]:0xfd83855e




Last Coverpoint : ['rs1 : x17', 'rs2 : x16', 'rd : x15']
Last Code Sequence : 
	-[0x800007a4]:sha512sum0r
	-[0x800007a8]:xor
	-[0x800007ac]:sw
Current Store : [0x800007b0] : None -- Store: [0x8000220c]:0x74af42a3




Last Coverpoint : ['rs1 : x17', 'rs2 : x16', 'rd : x15']
Last Code Sequence : 
	-[0x800007a4]:sha512sum0r
	-[0x800007a8]:xor
	-[0x800007ac]:sw
Current Store : [0x800007b4] : None -- Store: [0x80002210]:0xdb4fc8b0




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x17', 'rs2 : x16', 'rd : x15', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800007cc]:sha512sum0r
	-[0x800007d0]:xori
	-[0x800007d4]:sw
Current Store : [0x800007d8] : None -- Store: [0x80002218]:0x0caf42a5




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x17', 'rs2 : x16', 'rd : x15', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800007cc]:sha512sum0r
	-[0x800007d0]:xori
	-[0x800007d4]:sw
Current Store : [0x800007dc] : None -- Store: [0x8000221c]:0xf350bd5a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x17', 'rs2 : x16', 'rd : x15', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800007f4]:sha512sum0r
	-[0x800007f8]:add
	-[0x800007fc]:sw
Current Store : [0x80000800] : None -- Store: [0x80002224]:0xf8af42a4




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x17', 'rs2 : x16', 'rd : x15', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800007f4]:sha512sum0r
	-[0x800007f8]:add
	-[0x800007fc]:sw
Current Store : [0x80000804] : None -- Store: [0x80002228]:0xa88fccb7




Last Coverpoint : ['rs1 : x18', 'rs2 : x17', 'rd : x16']
Last Code Sequence : 
	-[0x8000081c]:sha512sum0r
	-[0x80000820]:xor
	-[0x80000824]:sw
Current Store : [0x80000828] : None -- Store: [0x80002230]:0x5573aa27




Last Coverpoint : ['rs1 : x18', 'rs2 : x17', 'rd : x16']
Last Code Sequence : 
	-[0x8000081c]:sha512sum0r
	-[0x80000820]:xor
	-[0x80000824]:sw
Current Store : [0x8000082c] : None -- Store: [0x80002234]:0xe2ad11bc




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x18', 'rs2 : x17', 'rd : x16', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000844]:sha512sum0r
	-[0x80000848]:xori
	-[0x8000084c]:sw
Current Store : [0x80000850] : None -- Store: [0x8000223c]:0x9973aa25




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x18', 'rs2 : x17', 'rd : x16', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000844]:sha512sum0r
	-[0x80000848]:xori
	-[0x8000084c]:sw
Current Store : [0x80000854] : None -- Store: [0x80002240]:0x668c55da




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x18', 'rs2 : x17', 'rd : x16', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000086c]:sha512sum0r
	-[0x80000870]:add
	-[0x80000874]:sw
Current Store : [0x80000878] : None -- Store: [0x80002248]:0xb973aa28




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x18', 'rs2 : x17', 'rd : x16', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000086c]:sha512sum0r
	-[0x80000870]:add
	-[0x80000874]:sw
Current Store : [0x8000087c] : None -- Store: [0x8000224c]:0x715265c3




Last Coverpoint : ['rs1 : x19', 'rs2 : x18', 'rd : x17']
Last Code Sequence : 
	-[0x80000894]:sha512sum0r
	-[0x80000898]:xor
	-[0x8000089c]:sw
Current Store : [0x800008a0] : None -- Store: [0x80002254]:0x7feafc9f




Last Coverpoint : ['rs1 : x19', 'rs2 : x18', 'rd : x17']
Last Code Sequence : 
	-[0x80000894]:sha512sum0r
	-[0x80000898]:xor
	-[0x8000089c]:sw
Current Store : [0x800008a4] : None -- Store: [0x80002258]:0x5bc07c04




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x19', 'rs2 : x18', 'rd : x17', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800008bc]:sha512sum0r
	-[0x800008c0]:xori
	-[0x800008c4]:sw
Current Store : [0x800008c8] : None -- Store: [0x80002260]:0x83eafc9a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x19', 'rs2 : x18', 'rd : x17', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800008bc]:sha512sum0r
	-[0x800008c0]:xori
	-[0x800008c4]:sw
Current Store : [0x800008cc] : None -- Store: [0x80002264]:0x7c150365




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x19', 'rs2 : x18', 'rd : x17', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800008e4]:sha512sum0r
	-[0x800008e8]:add
	-[0x800008ec]:sw
Current Store : [0x800008f0] : None -- Store: [0x8000226c]:0xf3eafc9b




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x19', 'rs2 : x18', 'rd : x17', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800008e4]:sha512sum0r
	-[0x800008e8]:add
	-[0x800008ec]:sw
Current Store : [0x800008f4] : None -- Store: [0x80002270]:0x18157d36




Last Coverpoint : ['rs1 : x20', 'rs2 : x19', 'rd : x18']
Last Code Sequence : 
	-[0x8000090c]:sha512sum0r
	-[0x80000910]:xor
	-[0x80000914]:sw
Current Store : [0x80000918] : None -- Store: [0x80002278]:0xc558ac37




Last Coverpoint : ['rs1 : x20', 'rs2 : x19', 'rd : x18']
Last Code Sequence : 
	-[0x8000090c]:sha512sum0r
	-[0x80000910]:xor
	-[0x80000914]:sw
Current Store : [0x8000091c] : None -- Store: [0x8000227c]:0xa9310d45




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x20', 'rs2 : x19', 'rd : x18', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000934]:sha512sum0r
	-[0x80000938]:xori
	-[0x8000093c]:sw
Current Store : [0x80000940] : None -- Store: [0x80002284]:0x8758ac37




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x20', 'rs2 : x19', 'rd : x18', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000934]:sha512sum0r
	-[0x80000938]:xori
	-[0x8000093c]:sw
Current Store : [0x80000944] : None -- Store: [0x80002288]:0x78a753c8




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x20', 'rs2 : x19', 'rd : x18', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000095c]:sha512sum0r
	-[0x80000960]:add
	-[0x80000964]:sw
Current Store : [0x80000968] : None -- Store: [0x80002290]:0x3d58ac38




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x20', 'rs2 : x19', 'rd : x18', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x8000095c]:sha512sum0r
	-[0x80000960]:add
	-[0x80000964]:sw
Current Store : [0x8000096c] : None -- Store: [0x80002294]:0xa9c24daa




Last Coverpoint : ['rs1 : x21', 'rs2 : x20', 'rd : x19']
Last Code Sequence : 
	-[0x80000984]:sha512sum0r
	-[0x80000988]:xor
	-[0x8000098c]:sw
Current Store : [0x80000990] : None -- Store: [0x8000229c]:0x379fe3ea




Last Coverpoint : ['rs1 : x21', 'rs2 : x20', 'rd : x19']
Last Code Sequence : 
	-[0x80000984]:sha512sum0r
	-[0x80000988]:xor
	-[0x8000098c]:sw
Current Store : [0x80000994] : None -- Store: [0x800022a0]:0xab85f6c2




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x21', 'rs2 : x20', 'rd : x19', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800009ac]:sha512sum0r
	-[0x800009b0]:xori
	-[0x800009b4]:sw
Current Store : [0x800009b8] : None -- Store: [0x800022a8]:0x899fe3e6




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x21', 'rs2 : x20', 'rd : x19', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800009ac]:sha512sum0r
	-[0x800009b0]:xori
	-[0x800009b4]:sw
Current Store : [0x800009bc] : None -- Store: [0x800022ac]:0x76601c19




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x21', 'rs2 : x20', 'rd : x19', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800009d4]:sha512sum0r
	-[0x800009d8]:add
	-[0x800009dc]:sw
Current Store : [0x800009e0] : None -- Store: [0x800022b4]:0x379fe3ed




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x21', 'rs2 : x20', 'rd : x19', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x800009d4]:sha512sum0r
	-[0x800009d8]:add
	-[0x800009dc]:sw
Current Store : [0x800009e4] : None -- Store: [0x800022b8]:0xd3b9f915




Last Coverpoint : ['rs1 : x22', 'rs2 : x21', 'rd : x20']
Last Code Sequence : 
	-[0x800009fc]:sha512sum0r
	-[0x80000a00]:xor
	-[0x80000a04]:sw
Current Store : [0x80000a08] : None -- Store: [0x800022c0]:0xd68e5d7d




Last Coverpoint : ['rs1 : x22', 'rs2 : x21', 'rd : x20']
Last Code Sequence : 
	-[0x800009fc]:sha512sum0r
	-[0x80000a00]:xor
	-[0x80000a04]:sw
Current Store : [0x80000a0c] : None -- Store: [0x800022c4]:0xa27bf0a8




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x22', 'rs2 : x21', 'rd : x20', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000a24]:sha512sum0r
	-[0x80000a28]:xori
	-[0x80000a2c]:sw
Current Store : [0x80000a30] : None -- Store: [0x800022cc]:0x868e5d76




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x22', 'rs2 : x21', 'rd : x20', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000a24]:sha512sum0r
	-[0x80000a28]:xori
	-[0x80000a2c]:sw
Current Store : [0x80000a34] : None -- Store: [0x800022d0]:0x7971a289




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x22', 'rs2 : x21', 'rd : x20', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000a4c]:sha512sum0r
	-[0x80000a50]:add
	-[0x80000a54]:sw
Current Store : [0x80000a58] : None -- Store: [0x800022d8]:0x0a8e5d75




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x22', 'rs2 : x21', 'rd : x20', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000a4c]:sha512sum0r
	-[0x80000a50]:add
	-[0x80000a54]:sw
Current Store : [0x80000a5c] : None -- Store: [0x800022dc]:0x7f840b4a




Last Coverpoint : ['rs1 : x23', 'rs2 : x22', 'rd : x21']
Last Code Sequence : 
	-[0x80000a74]:sha512sum0r
	-[0x80000a78]:xor
	-[0x80000a7c]:sw
Current Store : [0x80000a80] : None -- Store: [0x800022e4]:0xbd921274




Last Coverpoint : ['rs1 : x23', 'rs2 : x22', 'rd : x21']
Last Code Sequence : 
	-[0x80000a74]:sha512sum0r
	-[0x80000a78]:xor
	-[0x80000a7c]:sw
Current Store : [0x80000a84] : None -- Store: [0x800022e8]:0xfeeeae35




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x23', 'rs2 : x22', 'rd : x21', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000a9c]:sha512sum0r
	-[0x80000aa0]:xori
	-[0x80000aa4]:sw
Current Store : [0x80000aa8] : None -- Store: [0x800022f0]:0xdb921273




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x23', 'rs2 : x22', 'rd : x21', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000a9c]:sha512sum0r
	-[0x80000aa0]:xori
	-[0x80000aa4]:sw
Current Store : [0x80000aac] : None -- Store: [0x800022f4]:0x246ded8c




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x23', 'rs2 : x22', 'rd : x21', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000ac4]:sha512sum0r
	-[0x80000ac8]:add
	-[0x80000acc]:sw
Current Store : [0x80000ad0] : None -- Store: [0x800022fc]:0xbd921274




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x23', 'rs2 : x22', 'rd : x21', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000ac4]:sha512sum0r
	-[0x80000ac8]:add
	-[0x80000acc]:sw
Current Store : [0x80000ad4] : None -- Store: [0x80002300]:0x010eceb5




Last Coverpoint : ['rs1 : x24', 'rs2 : x23', 'rd : x22']
Last Code Sequence : 
	-[0x80000aec]:sha512sum0r
	-[0x80000af0]:xor
	-[0x80000af4]:sw
Current Store : [0x80000af8] : None -- Store: [0x80002308]:0xd309cac1




Last Coverpoint : ['rs1 : x24', 'rs2 : x23', 'rd : x22']
Last Code Sequence : 
	-[0x80000aec]:sha512sum0r
	-[0x80000af0]:xor
	-[0x80000af4]:sw
Current Store : [0x80000afc] : None -- Store: [0x8000230c]:0x182ca776




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x24', 'rs2 : x23', 'rd : x22', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000b14]:sha512sum0r
	-[0x80000b18]:xori
	-[0x80000b1c]:sw
Current Store : [0x80000b20] : None -- Store: [0x80002314]:0x1109cac5




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x24', 'rs2 : x23', 'rd : x22', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000b14]:sha512sum0r
	-[0x80000b18]:xori
	-[0x80000b1c]:sw
Current Store : [0x80000b24] : None -- Store: [0x80002318]:0xeef6353a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x24', 'rs2 : x23', 'rd : x22', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000b3c]:sha512sum0r
	-[0x80000b40]:add
	-[0x80000b44]:sw
Current Store : [0x80000b48] : None -- Store: [0x80002320]:0x2b09cace




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x24', 'rs2 : x23', 'rd : x22', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000b3c]:sha512sum0r
	-[0x80000b40]:add
	-[0x80000b44]:sw
Current Store : [0x80000b4c] : None -- Store: [0x80002324]:0xf62f3885




Last Coverpoint : ['rs1 : x25', 'rs2 : x24', 'rd : x23']
Last Code Sequence : 
	-[0x80000b64]:sha512sum0r
	-[0x80000b68]:xor
	-[0x80000b6c]:sw
Current Store : [0x80000b70] : None -- Store: [0x8000232c]:0xdde7bfcd




Last Coverpoint : ['rs1 : x25', 'rs2 : x24', 'rd : x23']
Last Code Sequence : 
	-[0x80000b64]:sha512sum0r
	-[0x80000b68]:xor
	-[0x80000b6c]:sw
Current Store : [0x80000b74] : None -- Store: [0x80002330]:0x41dab7b1




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x25', 'rs2 : x24', 'rd : x23', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000b8c]:sha512sum0r
	-[0x80000b90]:xori
	-[0x80000b94]:sw
Current Store : [0x80000b98] : None -- Store: [0x80002338]:0x23e7bfc9




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x25', 'rs2 : x24', 'rd : x23', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000b8c]:sha512sum0r
	-[0x80000b90]:xori
	-[0x80000b94]:sw
Current Store : [0x80000b9c] : None -- Store: [0x8000233c]:0xdc184036




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x25', 'rs2 : x24', 'rd : x23', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000bb4]:sha512sum0r
	-[0x80000bb8]:add
	-[0x80000bbc]:sw
Current Store : [0x80000bc0] : None -- Store: [0x80002344]:0x5de7bfca




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x25', 'rs2 : x24', 'rd : x23', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000bb4]:sha512sum0r
	-[0x80000bb8]:add
	-[0x80000bbc]:sw
Current Store : [0x80000bc4] : None -- Store: [0x80002348]:0xfa24c846




Last Coverpoint : ['rs1 : x26', 'rs2 : x25', 'rd : x24']
Last Code Sequence : 
	-[0x80000bdc]:sha512sum0r
	-[0x80000be0]:xor
	-[0x80000be4]:sw
Current Store : [0x80000be8] : None -- Store: [0x80002350]:0x78db0f93




Last Coverpoint : ['rs1 : x26', 'rs2 : x25', 'rd : x24']
Last Code Sequence : 
	-[0x80000bdc]:sha512sum0r
	-[0x80000be0]:xor
	-[0x80000be4]:sw
Current Store : [0x80000bec] : None -- Store: [0x80002354]:0x8ba52830




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x26', 'rs2 : x25', 'rd : x24', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000c04]:sha512sum0r
	-[0x80000c08]:xori
	-[0x80000c0c]:sw
Current Store : [0x80000c10] : None -- Store: [0x8000235c]:0xb2db0f97




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x26', 'rs2 : x25', 'rd : x24', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000c04]:sha512sum0r
	-[0x80000c08]:xori
	-[0x80000c0c]:sw
Current Store : [0x80000c14] : None -- Store: [0x80002360]:0x4d24f068




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x26', 'rs2 : x25', 'rd : x24', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000c2c]:sha512sum0r
	-[0x80000c30]:add
	-[0x80000c34]:sw
Current Store : [0x80000c38] : None -- Store: [0x80002368]:0xf0db0f9c




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x26', 'rs2 : x25', 'rd : x24', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000c2c]:sha512sum0r
	-[0x80000c30]:add
	-[0x80000c34]:sw
Current Store : [0x80000c3c] : None -- Store: [0x8000236c]:0xe459373f




Last Coverpoint : ['rs1 : x27', 'rs2 : x26', 'rd : x25']
Last Code Sequence : 
	-[0x80000c54]:sha512sum0r
	-[0x80000c58]:xor
	-[0x80000c5c]:sw
Current Store : [0x80000c60] : None -- Store: [0x80002374]:0x17f3e5bd




Last Coverpoint : ['rs1 : x27', 'rs2 : x26', 'rd : x25']
Last Code Sequence : 
	-[0x80000c54]:sha512sum0r
	-[0x80000c58]:xor
	-[0x80000c5c]:sw
Current Store : [0x80000c64] : None -- Store: [0x80002378]:0x875c7043




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x27', 'rs2 : x26', 'rd : x25', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000c7c]:sha512sum0r
	-[0x80000c80]:xori
	-[0x80000c84]:sw
Current Store : [0x80000c88] : None -- Store: [0x80002380]:0x6df3e5b2




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x27', 'rs2 : x26', 'rd : x25', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000c7c]:sha512sum0r
	-[0x80000c80]:xori
	-[0x80000c84]:sw
Current Store : [0x80000c8c] : None -- Store: [0x80002384]:0x920c1a4d




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x27', 'rs2 : x26', 'rd : x25', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000ca4]:sha512sum0r
	-[0x80000ca8]:add
	-[0x80000cac]:sw
Current Store : [0x80000cb0] : None -- Store: [0x8000238c]:0xeff3e5bd




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x27', 'rs2 : x26', 'rd : x25', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000ca4]:sha512sum0r
	-[0x80000ca8]:add
	-[0x80000cac]:sw
Current Store : [0x80000cb4] : None -- Store: [0x80002390]:0x80a37bbb




Last Coverpoint : ['rs1 : x28', 'rs2 : x27', 'rd : x26']
Last Code Sequence : 
	-[0x80000ccc]:sha512sum0r
	-[0x80000cd0]:xor
	-[0x80000cd4]:sw
Current Store : [0x80000cd8] : None -- Store: [0x80002398]:0x041cf1c7




Last Coverpoint : ['rs1 : x28', 'rs2 : x27', 'rd : x26']
Last Code Sequence : 
	-[0x80000ccc]:sha512sum0r
	-[0x80000cd0]:xor
	-[0x80000cd4]:sw
Current Store : [0x80000cdc] : None -- Store: [0x8000239c]:0x5d73ae4e




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x28', 'rs2 : x27', 'rd : x26', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000cf4]:sha512sum0r
	-[0x80000cf8]:xori
	-[0x80000cfc]:sw
Current Store : [0x80000d00] : None -- Store: [0x800023a4]:0xec1cf1c7




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x28', 'rs2 : x27', 'rd : x26', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000cf4]:sha512sum0r
	-[0x80000cf8]:xori
	-[0x80000cfc]:sw
Current Store : [0x80000d04] : None -- Store: [0x800023a8]:0x13e30e38




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x28', 'rs2 : x27', 'rd : x26', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000d1c]:sha512sum0r
	-[0x80000d20]:add
	-[0x80000d24]:sw
Current Store : [0x80000d28] : None -- Store: [0x800023b0]:0xa81cf1c8




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x28', 'rs2 : x27', 'rd : x26', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000d1c]:sha512sum0r
	-[0x80000d20]:add
	-[0x80000d24]:sw
Current Store : [0x80000d2c] : None -- Store: [0x800023b4]:0x018c5151




Last Coverpoint : ['rs1 : x29', 'rs2 : x28', 'rd : x27']
Last Code Sequence : 
	-[0x80000d44]:sha512sum0r
	-[0x80000d48]:xor
	-[0x80000d4c]:sw
Current Store : [0x80000d50] : None -- Store: [0x800023bc]:0x45c8a21d




Last Coverpoint : ['rs1 : x29', 'rs2 : x28', 'rd : x27']
Last Code Sequence : 
	-[0x80000d44]:sha512sum0r
	-[0x80000d48]:xor
	-[0x80000d4c]:sw
Current Store : [0x80000d54] : None -- Store: [0x800023c0]:0xd9d7d602




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x29', 'rs2 : x28', 'rd : x27', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000d6c]:sha512sum0r
	-[0x80000d70]:xori
	-[0x80000d74]:sw
Current Store : [0x80000d78] : None -- Store: [0x800023c8]:0x27c8a219




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x29', 'rs2 : x28', 'rd : x27', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000d6c]:sha512sum0r
	-[0x80000d70]:xori
	-[0x80000d74]:sw
Current Store : [0x80000d7c] : None -- Store: [0x800023cc]:0xd8375de6




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x29', 'rs2 : x28', 'rd : x27', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000d94]:sha512sum0r
	-[0x80000d98]:add
	-[0x80000d9c]:sw
Current Store : [0x80000da0] : None -- Store: [0x800023d4]:0xbdc8a21a




Last Coverpoint : ['opcode : sha512sum0r', 'rs1 : x29', 'rs2 : x28', 'rd : x27', 'rs1 != rs2  and rs1 != rd and rs2 != rd']
Last Code Sequence : 
	-[0x80000d94]:sha512sum0r
	-[0x80000d98]:add
	-[0x80000d9c]:sw
Current Store : [0x80000da4] : None -- Store: [0x800023d8]:0x59e81639





```

## Details of STAT5:



## Details of STAT1:

- The first column indicates the signature address and the data at that location in hexadecimal in the following format: 
  ```
  [Address]
  Data
  ```

- The second column captures all the coverpoints which have been captured by that particular signature location

- The third column captures all the insrtuctions since the time a coverpoint was
  hit to the point when a store to the signature was performed. Each line has
  the following format:
  ```
  [PC of instruction] : mnemonic
  ```
- The order in the table is based on the order of signatures occuring in the
  test. These need not necessarily be in increasing or decreasing order of the
  address in the signature region.

|s.no|        signature         |                                                     coverpoints                                                     |                                 code                                 |
|---:|--------------------------|---------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------|
|   1|[0x80002010]<br>0xff8cdc83|- opcode : sha512sum0r<br> - rs1 : x3<br> - rs2 : x2<br> - rd : x1<br> - rs1 != rs2  and rs1 != rd and rs2 != rd<br> |[0x80000114]:sha512sum0r<br> [0x80000118]:xor<br> [0x8000011c]:sw<br> |
|   2|[0x80002034]<br>0xfbd27598|- rs1 : x4<br> - rs2 : x3<br> - rd : x2<br>                                                                          |[0x8000018c]:sha512sum0r<br> [0x80000190]:xor<br> [0x80000194]:sw<br> |
|   3|[0x80002058]<br>0xd75b8f9f|- rs1 : x5<br> - rs2 : x4<br> - rd : x3<br>                                                                          |[0x80000204]:sha512sum0r<br> [0x80000208]:xor<br> [0x8000020c]:sw<br> |
|   4|[0x8000207c]<br>0xdb667cb3|- rs1 : x6<br> - rs2 : x5<br> - rd : x4<br>                                                                          |[0x8000027c]:sha512sum0r<br> [0x80000280]:xor<br> [0x80000284]:sw<br> |
|   5|[0x800020a0]<br>0x652b2e0f|- rs1 : x7<br> - rs2 : x6<br> - rd : x5<br>                                                                          |[0x800002f4]:sha512sum0r<br> [0x800002f8]:xor<br> [0x800002fc]:sw<br> |
|   6|[0x800020c4]<br>0xe315a125|- rs1 : x8<br> - rs2 : x7<br> - rd : x6<br>                                                                          |[0x8000036c]:sha512sum0r<br> [0x80000370]:xor<br> [0x80000374]:sw<br> |
|   7|[0x800020e8]<br>0xd74ae24c|- rs1 : x9<br> - rs2 : x8<br> - rd : x7<br>                                                                          |[0x800003e4]:sha512sum0r<br> [0x800003e8]:xor<br> [0x800003ec]:sw<br> |
|   8|[0x8000210c]<br>0xd60e2e1f|- rs1 : x10<br> - rs2 : x9<br> - rd : x8<br>                                                                         |[0x8000045c]:sha512sum0r<br> [0x80000460]:xor<br> [0x80000464]:sw<br> |
|   9|[0x80002130]<br>0x6a3d6dfa|- rs1 : x11<br> - rs2 : x10<br> - rd : x9<br>                                                                        |[0x800004d4]:sha512sum0r<br> [0x800004d8]:xor<br> [0x800004dc]:sw<br> |
|  10|[0x80002154]<br>0xd922024c|- rs1 : x12<br> - rs2 : x11<br> - rd : x10<br>                                                                       |[0x8000054c]:sha512sum0r<br> [0x80000550]:xor<br> [0x80000554]:sw<br> |
|  11|[0x80002178]<br>0x4baf1e73|- rs1 : x13<br> - rs2 : x12<br> - rd : x11<br>                                                                       |[0x800005c4]:sha512sum0r<br> [0x800005c8]:xor<br> [0x800005cc]:sw<br> |
|  12|[0x8000219c]<br>0x76a19c0d|- rs1 : x14<br> - rs2 : x13<br> - rd : x12<br>                                                                       |[0x8000063c]:sha512sum0r<br> [0x80000640]:xor<br> [0x80000644]:sw<br> |
|  13|[0x800021c0]<br>0x89a851ac|- rs1 : x15<br> - rs2 : x14<br> - rd : x13<br>                                                                       |[0x800006b4]:sha512sum0r<br> [0x800006b8]:xor<br> [0x800006bc]:sw<br> |
|  14|[0x800021e4]<br>0xcb9d6e55|- rs1 : x16<br> - rs2 : x15<br> - rd : x14<br>                                                                       |[0x8000072c]:sha512sum0r<br> [0x80000730]:xor<br> [0x80000734]:sw<br> |
|  15|[0x80002208]<br>0x319e95d0|- rs1 : x17<br> - rs2 : x16<br> - rd : x15<br>                                                                       |[0x800007a4]:sha512sum0r<br> [0x800007a8]:xor<br> [0x800007ac]:sw<br> |
|  16|[0x8000222c]<br>0x6c03f642|- rs1 : x18<br> - rs2 : x17<br> - rd : x16<br>                                                                       |[0x8000081c]:sha512sum0r<br> [0x80000820]:xor<br> [0x80000824]:sw<br> |
|  17|[0x80002250]<br>0x8fafb45a|- rs1 : x19<br> - rs2 : x18<br> - rd : x17<br>                                                                       |[0x80000894]:sha512sum0r<br> [0x80000898]:xor<br> [0x8000089c]:sw<br> |
|  18|[0x80002274]<br>0x9385948c|- rs1 : x20<br> - rs2 : x19<br> - rd : x18<br>                                                                       |[0x8000090c]:sha512sum0r<br> [0x80000910]:xor<br> [0x80000914]:sw<br> |
|  19|[0x80002298]<br>0xa9bdfae8|- rs1 : x21<br> - rs2 : x20<br> - rd : x19<br>                                                                       |[0x80000984]:sha512sum0r<br> [0x80000988]:xor<br> [0x8000098c]:sw<br> |
|  20|[0x800022bc]<br>0x35c64902|- rs1 : x22<br> - rs2 : x21<br> - rd : x20<br>                                                                       |[0x800009fc]:sha512sum0r<br> [0x80000a00]:xor<br> [0x80000a04]:sw<br> |
|  21|[0x800022e0]<br>0xc2d6cced|- rs1 : x23<br> - rs2 : x22<br> - rd : x21<br>                                                                       |[0x80000a74]:sha512sum0r<br> [0x80000a78]:xor<br> [0x80000a7c]:sw<br> |
|  22|[0x80002304]<br>0x73629d89|- rs1 : x24<br> - rs2 : x23<br> - rd : x22<br>                                                                       |[0x80000aec]:sha512sum0r<br> [0x80000af0]:xor<br> [0x80000af4]:sw<br> |
|  23|[0x80002328]<br>0x21b0951c|- rs1 : x25<br> - rs2 : x24<br> - rd : x23<br>                                                                       |[0x80000b64]:sha512sum0r<br> [0x80000b68]:xor<br> [0x80000b6c]:sw<br> |
|  24|[0x8000234c]<br>0x4dccbe99|- rs1 : x26<br> - rs2 : x25<br> - rd : x24<br>                                                                       |[0x80000bdc]:sha512sum0r<br> [0x80000be0]:xor<br> [0x80000be4]:sw<br> |
|  25|[0x80002370]<br>0x9c7a4d1c|- rs1 : x27<br> - rs2 : x26<br> - rd : x25<br>                                                                       |[0x80000c54]:sha512sum0r<br> [0x80000c58]:xor<br> [0x80000c5c]:sw<br> |
|  26|[0x80002394]<br>0xa69a3e02|- rs1 : x28<br> - rs2 : x27<br> - rd : x26<br>                                                                       |[0x80000ccc]:sha512sum0r<br> [0x80000cd0]:xor<br> [0x80000cd4]:sw<br> |
|  27|[0x800023b8]<br>0x28c309f1|- rs1 : x29<br> - rs2 : x28<br> - rd : x27<br>                                                                       |[0x80000d44]:sha512sum0r<br> [0x80000d48]:xor<br> [0x80000d4c]:sw<br> |
