
# Data Propagation Report

STAT1 : Number of unique coverpoint hits that have updated the signature

STAT2 : Number of covepoints hits which are not unique but still update the signature

STAT3 : Number of instructions that contribute to a unique coverpoint but do not update signature

STAT4 : Number of Multiple signature updates for the same coverpoint

STAT5 : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 32      |
| TEST_REGION               | [('0x800000f8', '0x800001d0')]      |
| SIG_REGION                | [('0x80003204', '0x80003294', '36 words')]      |
| COV_LABELS                | cli      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/riscof/riscof_work/cli-01.S/cli-01.S    |
| Total Number of coverpoints| 50     |
| Total Signature Updates   | 33      |
| Total Coverpoints Covered | 50      |
| STAT1                     | 32      |
| STAT2                     | 1      |
| STAT3                     | 0     |
| STAT4                     | 0     |
| STAT5                     | 0     |

## Details for STAT2:

```
Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x800001c2]:c.li a0, 31
      [0x800001c4]:c.swsp a0, 3
 -- Signature Address: 0x80003290 Data: 0x0000001F
 -- Redundant Coverpoints hit by the op
      - opcode : c.li
      - rd : x10
      - imm_val == (2**(6-1)-1)
      - imm_val == 31






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

|s.no|        signature         |                                     coverpoints                                     |                             code                             |
|---:|--------------------------|-------------------------------------------------------------------------------------|--------------------------------------------------------------|
|   1|[0x80003210]<br>0xFFFFFFE0|- opcode : c.li<br> - rd : x26<br> - imm_val == (-2**(6-1))<br> - imm_val == -32<br> |[0x80000100]:c.li s10, 32<br> [0x80000102]:sw s10, 0(ra)<br>  |
|   2|[0x80003214]<br>0x00000000|- rd : x13<br> - imm_val == 0<br>                                                    |[0x80000106]:c.li a3, 0<br> [0x80000108]:sw a3, 4(ra)<br>     |
|   3|[0x80003218]<br>0x00000000|- rd : x0<br> - imm_val == (2**(6-1)-1)<br> - imm_val == 31<br>                      |[0x8000010c]:c.li.hint.31<br> [0x8000010e]:sw zero, 8(ra)<br> |
|   4|[0x8000321c]<br>0x00000001|- rd : x25<br> - imm_val == 1<br>                                                    |[0x80000112]:c.li s9, 1<br> [0x80000114]:sw s9, 12(ra)<br>    |
|   5|[0x80003220]<br>0x00000002|- rd : x28<br> - imm_val == 2<br>                                                    |[0x80000118]:c.li t3, 2<br> [0x8000011a]:sw t3, 16(ra)<br>    |
|   6|[0x80003224]<br>0x00000004|- rd : x11<br> - imm_val == 4<br>                                                    |[0x8000011e]:c.li a1, 4<br> [0x80000120]:sw a1, 20(ra)<br>    |
|   7|[0x80003228]<br>0x00000008|- rd : x27<br> - imm_val == 8<br>                                                    |[0x80000124]:c.li s11, 8<br> [0x80000126]:sw s11, 24(ra)<br>  |
|   8|[0x8000322c]<br>0x00000010|- rd : x18<br> - imm_val == 16<br>                                                   |[0x8000012a]:c.li s2, 16<br> [0x8000012c]:sw s2, 28(ra)<br>   |
|   9|[0x80003230]<br>0xFFFFFFEA|- rd : x15<br> - imm_val == -22<br>                                                  |[0x80000130]:c.li a5, 42<br> [0x80000132]:sw a5, 32(ra)<br>   |
|  10|[0x80003234]<br>0xFFFFFFFE|- rd : x8<br> - imm_val == -2<br>                                                    |[0x80000136]:c.li fp, 62<br> [0x80000138]:sw fp, 36(ra)<br>   |
|  11|[0x80003238]<br>0xFFFFFFFD|- rd : x17<br> - imm_val == -3<br>                                                   |[0x8000013c]:c.li a7, 61<br> [0x8000013e]:sw a7, 40(ra)<br>   |
|  12|[0x8000323c]<br>0xFFFFFFFB|- rd : x19<br> - imm_val == -5<br>                                                   |[0x80000142]:c.li s3, 59<br> [0x80000144]:sw s3, 44(ra)<br>   |
|  13|[0x80003240]<br>0xFFFFFFF7|- rd : x6<br> - imm_val == -9<br>                                                    |[0x80000148]:c.li t1, 55<br> [0x8000014a]:sw t1, 48(ra)<br>   |
|  14|[0x80003244]<br>0xFFFFFFEF|- rd : x14<br> - imm_val == -17<br>                                                  |[0x8000014e]:c.li a4, 47<br> [0x80000150]:sw a4, 52(ra)<br>   |
|  15|[0x80003248]<br>0x00000015|- rd : x3<br> - imm_val == 21<br>                                                    |[0x80000154]:c.li gp, 21<br> [0x80000156]:sw gp, 56(ra)<br>   |
|  16|[0x8000324c]<br>0x00000000|- rd : x29<br>                                                                       |[0x8000015a]:c.li t4, 0<br> [0x8000015c]:sw t4, 60(ra)<br>    |
|  17|[0x80003250]<br>0x00000000|- rd : x31<br>                                                                       |[0x80000160]:c.li t6, 0<br> [0x80000162]:sw t6, 64(ra)<br>    |
|  18|[0x80003254]<br>0x00000000|- rd : x7<br>                                                                        |[0x80000166]:c.li t2, 0<br> [0x80000168]:sw t2, 68(ra)<br>    |
|  19|[0x80003258]<br>0x00000000|- rd : x12<br>                                                                       |[0x8000016c]:c.li a2, 0<br> [0x8000016e]:sw a2, 72(ra)<br>    |
|  20|[0x8000325c]<br>0x00000000|- rd : x20<br>                                                                       |[0x80000172]:c.li s4, 0<br> [0x80000174]:sw s4, 76(ra)<br>    |
|  21|[0x80003260]<br>0x00000000|- rd : x4<br>                                                                        |[0x80000178]:c.li tp, 0<br> [0x8000017a]:sw tp, 80(ra)<br>    |
|  22|[0x80003264]<br>0x00000000|- rd : x16<br>                                                                       |[0x8000017e]:c.li a6, 0<br> [0x80000180]:sw a6, 84(ra)<br>    |
|  23|[0x80003268]<br>0x00000000|- rd : x5<br>                                                                        |[0x80000184]:c.li t0, 0<br> [0x80000186]:sw t0, 88(ra)<br>    |
|  24|[0x8000326c]<br>0x00000000|- rd : x2<br>                                                                        |[0x8000018a]:c.li sp, 0<br> [0x8000018c]:sw sp, 92(ra)<br>    |
|  25|[0x80003270]<br>0x00000000|- rd : x9<br>                                                                        |[0x80000190]:c.li s1, 0<br> [0x80000192]:sw s1, 96(ra)<br>    |
|  26|[0x80003274]<br>0x00000000|- rd : x30<br>                                                                       |[0x80000196]:c.li t5, 0<br> [0x80000198]:sw t5, 100(ra)<br>   |
|  27|[0x80003278]<br>0x00000000|- rd : x21<br>                                                                       |[0x8000019c]:c.li s5, 0<br> [0x8000019e]:sw s5, 104(ra)<br>   |
|  28|[0x8000327c]<br>0x00000000|- rd : x10<br>                                                                       |[0x800001a2]:c.li a0, 0<br> [0x800001a4]:sw a0, 108(ra)<br>   |
|  29|[0x80003280]<br>0x00000000|- rd : x24<br>                                                                       |[0x800001a8]:c.li s8, 0<br> [0x800001aa]:sw s8, 112(ra)<br>   |
|  30|[0x80003284]<br>0x00000000|- rd : x1<br>                                                                        |[0x800001b6]:c.li ra, 0<br> [0x800001b8]:c.swsp ra, 0<br>     |
|  31|[0x80003288]<br>0x00000000|- rd : x23<br>                                                                       |[0x800001ba]:c.li s7, 0<br> [0x800001bc]:c.swsp s7, 1<br>     |
|  32|[0x8000328c]<br>0x00000000|- rd : x22<br>                                                                       |[0x800001be]:c.li s6, 0<br> [0x800001c0]:c.swsp s6, 2<br>     |