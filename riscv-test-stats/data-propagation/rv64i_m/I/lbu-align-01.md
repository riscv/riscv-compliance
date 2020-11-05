
# Data Propagation Report

STAT1 : Number of unique coverpoint hits that have updated the signature

STAT2 : Number of covepoints hits which are not unique but still update the signature

STAT3 : Number of instructions that contribute to a unique coverpoint but do not update signature

STAT4 : Number of Multiple signature updates for the same coverpoint

STAT5 : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 64      |
| TEST_REGION               | [('0x80000390', '0x800006c0')]      |
| SIG_REGION                | [('0x80003204', '0x80003318', '34 dwords')]      |
| COV_LABELS                | lbu-align      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/riscof/riscof_work/lbu-align-01.S/lbu-align-01.S    |
| Total Number of coverpoints| 85     |
| Total Signature Updates   | 33      |
| Total Coverpoints Covered | 85      |
| STAT1                     | 32      |
| STAT2                     | 1      |
| STAT3                     | 0     |
| STAT4                     | 0     |
| STAT5                     | 0     |

## Details for STAT2:

```
Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800006a8]:lbu a1, 4089(a0)
      [0x800006ac]:addi zero, zero, 0
      [0x800006b0]:addi zero, zero, 0
      [0x800006b4]:sd a1, 80(sp)
 -- Signature Address: 0x80003310 Data: 0x00000000000000CA
 -- Redundant Coverpoints hit by the op
      - opcode : lbu
      - rs1 : x10
      - rd : x11
      - rs1 != rd
      - ea_align == 1 and (imm_val % 4) == 1
      - imm_val < 0






```

## Details of STAT3

```


```

## Details of STAT4:

```

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

|s.no|            signature             |                                                          coverpoints                                                          |                                                                    code                                                                     |
|---:|----------------------------------|-------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------|
|   1|[0x80003210]<br>0x00000000000000FE|- opcode : lbu<br> - rs1 : x23<br> - rd : x23<br> - rs1 == rd<br> - ea_align == 0 and (imm_val % 4) == 0<br> - imm_val > 0<br> |[0x800003a0]:lbu s7, 8(s7)<br> [0x800003a4]:addi zero, zero, 0<br> [0x800003a8]:addi zero, zero, 0<br> [0x800003ac]:sd s7, 0(t0)<br>         |
|   2|[0x80003218]<br>0x00000000000000FE|- rs1 : x1<br> - rd : x10<br> - rs1 != rd<br> - ea_align == 0 and (imm_val % 4) == 1<br> - imm_val < 0<br>                     |[0x800003b8]:lbu a0, 4093(ra)<br> [0x800003bc]:addi zero, zero, 0<br> [0x800003c0]:addi zero, zero, 0<br> [0x800003c4]:sd a0, 8(t0)<br>      |
|   3|[0x80003220]<br>0x00000000000000FE|- rs1 : x26<br> - rd : x15<br> - ea_align == 0 and (imm_val % 4) == 2<br>                                                      |[0x800003d0]:lbu a5, 6(s10)<br> [0x800003d4]:addi zero, zero, 0<br> [0x800003d8]:addi zero, zero, 0<br> [0x800003dc]:sd a5, 16(t0)<br>       |
|   4|[0x80003228]<br>0x00000000000000FE|- rs1 : x31<br> - rd : x6<br> - ea_align == 0 and (imm_val % 4) == 3<br>                                                       |[0x800003e8]:lbu t1, 3583(t6)<br> [0x800003ec]:addi zero, zero, 0<br> [0x800003f0]:addi zero, zero, 0<br> [0x800003f4]:sd t1, 24(t0)<br>     |
|   5|[0x80003230]<br>0x00000000000000BE|- rs1 : x7<br> - rd : x29<br> - ea_align == 2 and (imm_val % 4) == 0<br> - imm_val == 0<br>                                    |[0x80000400]:lbu t4, 0(t2)<br> [0x80000404]:addi zero, zero, 0<br> [0x80000408]:addi zero, zero, 0<br> [0x8000040c]:sd t4, 32(t0)<br>        |
|   6|[0x80003238]<br>0x00000000000000BE|- rs1 : x6<br> - rd : x27<br> - ea_align == 2 and (imm_val % 4) == 1<br>                                                       |[0x80000418]:lbu s11, 4089(t1)<br> [0x8000041c]:addi zero, zero, 0<br> [0x80000420]:addi zero, zero, 0<br> [0x80000424]:sd s11, 40(t0)<br>   |
|   7|[0x80003240]<br>0x00000000000000BE|- rs1 : x10<br> - rd : x4<br> - ea_align == 2 and (imm_val % 4) == 2<br>                                                       |[0x80000430]:lbu tp, 4090(a0)<br> [0x80000434]:addi zero, zero, 0<br> [0x80000438]:addi zero, zero, 0<br> [0x8000043c]:sd tp, 48(t0)<br>     |
|   8|[0x80003248]<br>0x00000000000000BE|- rs1 : x19<br> - rd : x24<br> - ea_align == 2 and (imm_val % 4) == 3<br>                                                      |[0x80000448]:lbu s8, 4079(s3)<br> [0x8000044c]:addi zero, zero, 0<br> [0x80000450]:addi zero, zero, 0<br> [0x80000454]:sd s8, 56(t0)<br>     |
|   9|[0x80003250]<br>0x00000000000000CA|- rs1 : x18<br> - rd : x7<br> - ea_align == 1 and (imm_val % 4) == 0<br>                                                       |[0x80000460]:lbu t2, 4088(s2)<br> [0x80000464]:addi zero, zero, 0<br> [0x80000468]:addi zero, zero, 0<br> [0x8000046c]:sd t2, 64(t0)<br>     |
|  10|[0x80003258]<br>0x0000000000000000|- rs1 : x30<br> - rd : x0<br> - ea_align == 1 and (imm_val % 4) == 1<br>                                                       |[0x80000478]:lbu zero, 4089(t5)<br> [0x8000047c]:addi zero, zero, 0<br> [0x80000480]:addi zero, zero, 0<br> [0x80000484]:sd zero, 72(t0)<br> |
|  11|[0x80003260]<br>0x00000000000000CA|- rs1 : x28<br> - rd : x25<br> - ea_align == 1 and (imm_val % 4) == 2<br>                                                      |[0x80000490]:lbu s9, 4094(t3)<br> [0x80000494]:addi zero, zero, 0<br> [0x80000498]:addi zero, zero, 0<br> [0x8000049c]:sd s9, 80(t0)<br>     |
|  12|[0x80003268]<br>0x00000000000000CA|- rs1 : x27<br> - rd : x14<br> - ea_align == 1 and (imm_val % 4) == 3<br>                                                      |[0x800004a8]:lbu a4, 4095(s11)<br> [0x800004ac]:addi zero, zero, 0<br> [0x800004b0]:addi zero, zero, 0<br> [0x800004b4]:sd a4, 88(t0)<br>    |
|  13|[0x80003270]<br>0x00000000000000BA|- rs1 : x21<br> - rd : x20<br> - ea_align == 3 and (imm_val % 4) == 0<br>                                                      |[0x800004c0]:lbu s4, 64(s5)<br> [0x800004c4]:addi zero, zero, 0<br> [0x800004c8]:addi zero, zero, 0<br> [0x800004cc]:sd s4, 96(t0)<br>       |
|  14|[0x80003278]<br>0x00000000000000BA|- rs1 : x16<br> - rd : x9<br> - ea_align == 3 and (imm_val % 4) == 1<br>                                                       |[0x800004d8]:lbu s1, 4089(a6)<br> [0x800004dc]:addi zero, zero, 0<br> [0x800004e0]:addi zero, zero, 0<br> [0x800004e4]:sd s1, 104(t0)<br>    |
|  15|[0x80003280]<br>0x00000000000000BA|- rs1 : x8<br> - rd : x19<br> - ea_align == 3 and (imm_val % 4) == 2<br>                                                       |[0x800004f0]:lbu s3, 6(fp)<br> [0x800004f4]:addi zero, zero, 0<br> [0x800004f8]:addi zero, zero, 0<br> [0x800004fc]:sd s3, 112(t0)<br>       |
|  16|[0x80003288]<br>0x00000000000000BA|- rs1 : x24<br> - rd : x22<br> - ea_align == 3 and (imm_val % 4) == 3<br>                                                      |[0x80000508]:lbu s6, 3967(s8)<br> [0x8000050c]:addi zero, zero, 0<br> [0x80000510]:addi zero, zero, 0<br> [0x80000514]:sd s6, 120(t0)<br>    |
|  17|[0x80003290]<br>0x00000000000000FE|- rs1 : x15<br> - rd : x30<br>                                                                                                 |[0x80000520]:lbu t5, 2048(a5)<br> [0x80000524]:addi zero, zero, 0<br> [0x80000528]:addi zero, zero, 0<br> [0x8000052c]:sd t5, 128(t0)<br>    |
|  18|[0x80003298]<br>0x00000000000000FE|- rs1 : x2<br> - rd : x16<br>                                                                                                  |[0x80000538]:lbu a6, 2048(sp)<br> [0x8000053c]:addi zero, zero, 0<br> [0x80000540]:addi zero, zero, 0<br> [0x80000544]:sd a6, 136(t0)<br>    |
|  19|[0x800032a0]<br>0x00000000000000FE|- rs1 : x9<br> - rd : x2<br>                                                                                                   |[0x80000550]:lbu sp, 2048(s1)<br> [0x80000554]:addi zero, zero, 0<br> [0x80000558]:addi zero, zero, 0<br> [0x8000055c]:sd sp, 144(t0)<br>    |
|  20|[0x800032a8]<br>0x00000000000000FE|- rs1 : x20<br> - rd : x11<br>                                                                                                 |[0x80000568]:lbu a1, 2048(s4)<br> [0x8000056c]:addi zero, zero, 0<br> [0x80000570]:addi zero, zero, 0<br> [0x80000574]:sd a1, 152(t0)<br>    |
|  21|[0x800032b0]<br>0x00000000000000FE|- rs1 : x3<br> - rd : x31<br>                                                                                                  |[0x80000580]:lbu t6, 2048(gp)<br> [0x80000584]:addi zero, zero, 0<br> [0x80000588]:addi zero, zero, 0<br> [0x8000058c]:sd t6, 160(t0)<br>    |
|  22|[0x800032b8]<br>0x00000000000000FE|- rs1 : x12<br> - rd : x26<br>                                                                                                 |[0x80000598]:lbu s10, 2048(a2)<br> [0x8000059c]:addi zero, zero, 0<br> [0x800005a0]:addi zero, zero, 0<br> [0x800005a4]:sd s10, 168(t0)<br>  |
|  23|[0x800032c0]<br>0x00000000000000FE|- rs1 : x22<br> - rd : x5<br>                                                                                                  |[0x800005b8]:lbu t0, 2048(s6)<br> [0x800005bc]:addi zero, zero, 0<br> [0x800005c0]:addi zero, zero, 0<br> [0x800005c4]:sd t0, 0(sp)<br>      |
|  24|[0x800032c8]<br>0x00000000000000FE|- rs1 : x25<br> - rd : x21<br>                                                                                                 |[0x800005d0]:lbu s5, 2048(s9)<br> [0x800005d4]:addi zero, zero, 0<br> [0x800005d8]:addi zero, zero, 0<br> [0x800005dc]:sd s5, 8(sp)<br>      |
|  25|[0x800032d0]<br>0x00000000000000FE|- rs1 : x13<br> - rd : x1<br>                                                                                                  |[0x800005e8]:lbu ra, 2048(a3)<br> [0x800005ec]:addi zero, zero, 0<br> [0x800005f0]:addi zero, zero, 0<br> [0x800005f4]:sd ra, 16(sp)<br>     |
|  26|[0x800032d8]<br>0x00000000000000FE|- rs1 : x11<br> - rd : x3<br>                                                                                                  |[0x80000600]:lbu gp, 2048(a1)<br> [0x80000604]:addi zero, zero, 0<br> [0x80000608]:addi zero, zero, 0<br> [0x8000060c]:sd gp, 24(sp)<br>     |
|  27|[0x800032e0]<br>0x00000000000000FE|- rs1 : x14<br> - rd : x12<br>                                                                                                 |[0x80000618]:lbu a2, 2048(a4)<br> [0x8000061c]:addi zero, zero, 0<br> [0x80000620]:addi zero, zero, 0<br> [0x80000624]:sd a2, 32(sp)<br>     |
|  28|[0x800032e8]<br>0x00000000000000FE|- rs1 : x29<br> - rd : x8<br>                                                                                                  |[0x80000630]:lbu fp, 2048(t4)<br> [0x80000634]:addi zero, zero, 0<br> [0x80000638]:addi zero, zero, 0<br> [0x8000063c]:sd fp, 40(sp)<br>     |
|  29|[0x800032f0]<br>0x00000000000000FE|- rs1 : x17<br> - rd : x28<br>                                                                                                 |[0x80000648]:lbu t3, 2048(a7)<br> [0x8000064c]:addi zero, zero, 0<br> [0x80000650]:addi zero, zero, 0<br> [0x80000654]:sd t3, 48(sp)<br>     |
|  30|[0x800032f8]<br>0x00000000000000FE|- rs1 : x4<br> - rd : x18<br>                                                                                                  |[0x80000660]:lbu s2, 2048(tp)<br> [0x80000664]:addi zero, zero, 0<br> [0x80000668]:addi zero, zero, 0<br> [0x8000066c]:sd s2, 56(sp)<br>     |
|  31|[0x80003300]<br>0x00000000000000FE|- rs1 : x5<br> - rd : x13<br>                                                                                                  |[0x80000678]:lbu a3, 2048(t0)<br> [0x8000067c]:addi zero, zero, 0<br> [0x80000680]:addi zero, zero, 0<br> [0x80000684]:sd a3, 64(sp)<br>     |
|  32|[0x80003308]<br>0x00000000000000FE|- rd : x17<br>                                                                                                                 |[0x80000690]:lbu a7, 2048(a6)<br> [0x80000694]:addi zero, zero, 0<br> [0x80000698]:addi zero, zero, 0<br> [0x8000069c]:sd a7, 72(sp)<br>     |