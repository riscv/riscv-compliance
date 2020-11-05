
# Data Propagation Report

STAT1 : Number of unique coverpoint hits that have updated the signature

STAT2 : Number of covepoints hits which are not unique but still update the signature

STAT3 : Number of instructions that contribute to a unique coverpoint but do not update signature

STAT4 : Number of Multiple signature updates for the same coverpoint

STAT5 : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 32      |
| TEST_REGION               | [('0x800000f8', '0x80000840')]      |
| SIG_REGION                | [('0x80003204', '0x80003398', '101 words')]      |
| COV_LABELS                | sub      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/riscof/riscof_work/sub-01.S/sub-01.S    |
| Total Number of coverpoints| 246     |
| Total Signature Updates   | 98      |
| Total Coverpoints Covered | 246      |
| STAT1                     | 96      |
| STAT2                     | 2      |
| STAT3                     | 0     |
| STAT4                     | 0     |
| STAT5                     | 0     |

## Details for STAT2:

```
Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000814]:sub a2, a0, a1
      [0x80000818]:sw a2, 296(ra)
 -- Signature Address: 0x8000338c Data: 0x7FFFFFC0
 -- Redundant Coverpoints hit by the op
      - opcode : sub
      - rs1 : x10
      - rs2 : x11
      - rd : x12
      - rs1 != rs2  and rs1 != rd and rs2 != rd
      - rs1_val < 0 and rs2_val > 0
      - rs1_val != rs2_val
      - rs1_val == (-2**(xlen-1))
      - rs2_val == 64
      - rs1_val == -2147483648




Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000838]:sub a2, a0, a1
      [0x8000083c]:sw a2, 304(ra)
 -- Signature Address: 0x80003394 Data: 0x00000005
 -- Redundant Coverpoints hit by the op
      - opcode : sub
      - rs1 : x10
      - rs2 : x11
      - rd : x12
      - rs1 != rs2  and rs1 != rd and rs2 != rd
      - rs1_val > 0 and rs2_val < 0
      - rs1_val != rs2_val
      - rs1_val == 4






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

|s.no|        signature         |                                                                                                           coverpoints                                                                                                            |                               code                                |
|---:|--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------|
|   1|[0x80003210]<br>0x00000000|- opcode : sub<br> - rs1 : x1<br> - rs2 : x1<br> - rd : x5<br> - rs1 == rs2 != rd<br> - rs1_val > 0 and rs2_val > 0<br> - rs1_val == rs2_val<br> - rs2_val == 64<br> - rs1_val == 64<br>                                          |[0x80000108]:sub t0, ra, ra<br> [0x8000010c]:sw t0, 0(fp)<br>      |
|   2|[0x80003214]<br>0x00000801|- rs1 : x21<br> - rs2 : x31<br> - rd : x31<br> - rs2 == rd != rs1<br> - rs1_val != rs2_val<br> - rs1_val == 0<br> - rs2_val == -2049<br>                                                                                          |[0x8000011c]:sub t6, s5, t6<br> [0x80000120]:sw t6, 4(fp)<br>      |
|   3|[0x80003218]<br>0x7FDFFFFF|- rs1 : x26<br> - rs2 : x5<br> - rd : x26<br> - rs1 == rd != rs2<br> - rs1_val == (2**(xlen-1)-1)<br> - rs2_val == 2097152<br> - rs1_val == 2147483647<br>                                                                        |[0x80000130]:sub s10, s10, t0<br> [0x80000134]:sw s10, 8(fp)<br>   |
|   4|[0x8000321c]<br>0x00400002|- rs1 : x6<br> - rs2 : x27<br> - rd : x3<br> - rs1 != rs2  and rs1 != rd and rs2 != rd<br> - rs1_val > 0 and rs2_val < 0<br> - rs1_val == 1<br> - rs2_val == -4194305<br>                                                         |[0x80000144]:sub gp, t1, s11<br> [0x80000148]:sw gp, 12(fp)<br>    |
|   5|[0x80003220]<br>0x00000000|- rs1 : x16<br> - rs2 : x16<br> - rd : x16<br> - rs1 == rs2 == rd<br> - rs1_val < 0 and rs2_val < 0<br> - rs2_val == (-2**(xlen-1))<br> - rs1_val == (-2**(xlen-1))<br> - rs2_val == -2147483648<br> - rs1_val == -2147483648<br> |[0x80000158]:sub a6, a6, a6<br> [0x8000015c]:sw a6, 16(fp)<br>     |
|   6|[0x80003224]<br>0x3FFFFFFF|- rs1 : x17<br> - rs2 : x4<br> - rd : x27<br> - rs2_val == 0<br>                                                                                                                                                                  |[0x8000016c]:sub s11, a7, tp<br> [0x80000170]:sw s11, 20(fp)<br>   |
|   7|[0x80003228]<br>0x7FFFFF00|- rs1 : x28<br> - rs2 : x14<br> - rd : x10<br> - rs1_val < 0 and rs2_val > 0<br> - rs2_val == (2**(xlen-1)-1)<br> - rs2_val == 2147483647<br> - rs1_val == -257<br>                                                               |[0x80000180]:sub a0, t3, a4<br> [0x80000184]:sw a0, 24(fp)<br>     |
|   8|[0x8000322c]<br>0xFFFFFFFF|- rs1 : x0<br> - rs2 : x21<br> - rd : x14<br> - rs2_val == 1<br>                                                                                                                                                                  |[0x80000194]:sub a4, zero, s5<br> [0x80000198]:sw a4, 28(fp)<br>   |
|   9|[0x80003230]<br>0xFFFFFFE4|- rs1 : x5<br> - rs2 : x26<br> - rd : x1<br> - rs2_val == -5<br> - rs1_val == -33<br>                                                                                                                                             |[0x800001a4]:sub ra, t0, s10<br> [0x800001a8]:sw ra, 32(fp)<br>    |
|  10|[0x80003234]<br>0x00000000|- rs1 : x3<br> - rs2 : x11<br> - rd : x22<br> - rs2_val == 268435456<br> - rs1_val == 268435456<br>                                                                                                                               |[0x800001b4]:sub s6, gp, a1<br> [0x800001b8]:sw s6, 36(fp)<br>     |
|  11|[0x80003238]<br>0xFFFFFFFD|- rs1 : x19<br> - rs2 : x2<br> - rd : x30<br> - rs1_val == 2<br>                                                                                                                                                                  |[0x800001c4]:sub t5, s3, sp<br> [0x800001c8]:sw t5, 40(fp)<br>     |
|  12|[0x8000323c]<br>0x00000000|- rs1 : x13<br> - rs2 : x22<br> - rd : x0<br> - rs1_val == 4<br>                                                                                                                                                                  |[0x800001d4]:sub zero, a3, s6<br> [0x800001d8]:sw zero, 44(fp)<br> |
|  13|[0x80003240]<br>0x80000009|- rs1 : x7<br> - rs2 : x13<br> - rd : x2<br> - rs1_val == 8<br>                                                                                                                                                                   |[0x800001e8]:sub sp, t2, a3<br> [0x800001ec]:sw sp, 48(fp)<br>     |
|  14|[0x80003244]<br>0x80000011|- rs1 : x11<br> - rs2 : x17<br> - rd : x19<br> - rs1_val == 16<br>                                                                                                                                                                |[0x800001fc]:sub s3, a1, a7<br> [0x80000200]:sw s3, 52(fp)<br>     |
|  15|[0x80003248]<br>0x00000020|- rs1 : x24<br> - rs2 : x0<br> - rd : x20<br> - rs1_val == 32<br>                                                                                                                                                                 |[0x80000210]:sub s4, s8, zero<br> [0x80000214]:sw s4, 56(fp)<br>   |
|  16|[0x8000324c]<br>0x00000038|- rs1 : x9<br> - rs2 : x29<br> - rd : x24<br> - rs2_val == 8<br>                                                                                                                                                                  |[0x80000220]:sub s8, s1, t4<br> [0x80000224]:sw s8, 60(fp)<br>     |
|  17|[0x80003250]<br>0x20000081|- rs1 : x4<br> - rs2 : x19<br> - rd : x6<br> - rs2_val == -536870913<br> - rs1_val == 128<br>                                                                                                                                     |[0x80000234]:sub t1, tp, s3<br> [0x80000238]:sw t1, 64(fp)<br>     |
|  18|[0x80003254]<br>0x00020101|- rs1 : x27<br> - rs2 : x28<br> - rd : x9<br> - rs2_val == -131073<br> - rs1_val == 256<br>                                                                                                                                       |[0x80000248]:sub s1, s11, t3<br> [0x8000024c]:sw s1, 68(fp)<br>    |
|  19|[0x80003258]<br>0xFFFFFA00|- rs1 : x31<br> - rs2 : x9<br> - rd : x28<br> - rs2_val == 2048<br> - rs1_val == 512<br>                                                                                                                                          |[0x8000025c]:sub t3, t6, s1<br> [0x80000260]:sw t3, 72(fp)<br>     |
|  20|[0x8000325c]<br>0x02000401|- rs1 : x23<br> - rs2 : x12<br> - rd : x7<br> - rs2_val == -33554433<br> - rs1_val == 1024<br>                                                                                                                                    |[0x80000270]:sub t2, s7, a2<br> [0x80000274]:sw t2, 76(fp)<br>     |
|  21|[0x80003260]<br>0xFFFF8800|- rs1 : x18<br> - rs2 : x20<br> - rd : x23<br> - rs2_val == 32768<br> - rs1_val == 2048<br>                                                                                                                                       |[0x80000284]:sub s7, s2, s4<br> [0x80000288]:sw s7, 80(fp)<br>     |
|  22|[0x80003264]<br>0xF0001000|- rs1 : x15<br> - rs2 : x7<br> - rd : x11<br> - rs1_val == 4096<br>                                                                                                                                                               |[0x8000029c]:sub a1, a5, t2<br> [0x800002a0]:sw a1, 0(ra)<br>      |
|  23|[0x80003268]<br>0x00002401|- rs1 : x25<br> - rs2 : x30<br> - rd : x8<br> - rs2_val == -1025<br> - rs1_val == 8192<br>                                                                                                                                        |[0x800002ac]:sub fp, s9, t5<br> [0x800002b0]:sw fp, 4(ra)<br>      |
|  24|[0x8000326c]<br>0x04004001|- rs1 : x10<br> - rs2 : x24<br> - rd : x21<br> - rs2_val == -67108865<br> - rs1_val == 16384<br>                                                                                                                                  |[0x800002c0]:sub s5, a0, s8<br> [0x800002c4]:sw s5, 8(ra)<br>      |
|  25|[0x80003270]<br>0xFE008000|- rs1 : x12<br> - rs2 : x8<br> - rd : x17<br> - rs2_val == 33554432<br> - rs1_val == 32768<br>                                                                                                                                    |[0x800002d0]:sub a7, a2, fp<br> [0x800002d4]:sw a7, 12(ra)<br>     |
|  26|[0x80003274]<br>0x0000FFF0|- rs1 : x14<br> - rs2 : x3<br> - rd : x13<br> - rs2_val == 16<br> - rs1_val == 65536<br>                                                                                                                                          |[0x800002e0]:sub a3, a4, gp<br> [0x800002e4]:sw a3, 16(ra)<br>     |
|  27|[0x80003278]<br>0x0001FFF9|- rs1 : x2<br> - rs2 : x6<br> - rd : x29<br> - rs1_val == 131072<br>                                                                                                                                                              |[0x800002f0]:sub t4, sp, t1<br> [0x800002f4]:sw t4, 20(ra)<br>     |
|  28|[0x8000327c]<br>0xF8040000|- rs1 : x8<br> - rs2 : x25<br> - rd : x12<br> - rs2_val == 134217728<br> - rs1_val == 262144<br>                                                                                                                                  |[0x80000300]:sub a2, fp, s9<br> [0x80000304]:sw a2, 24(ra)<br>     |
|  29|[0x80003280]<br>0x555D5556|- rs1 : x29<br> - rs2 : x23<br> - rd : x25<br> - rs2_val == -1431655766<br> - rs1_val == 524288<br>                                                                                                                               |[0x80000314]:sub s9, t4, s7<br> [0x80000318]:sw s9, 28(ra)<br>     |
|  30|[0x80003284]<br>0x000FFFF7|- rs1 : x20<br> - rs2 : x10<br> - rd : x15<br> - rs1_val == 1048576<br>                                                                                                                                                           |[0x80000324]:sub a5, s4, a0<br> [0x80000328]:sw a5, 32(ra)<br>     |
|  31|[0x80003288]<br>0xC0200000|- rs1 : x30<br> - rs2 : x15<br> - rd : x18<br> - rs2_val == 1073741824<br> - rs1_val == 2097152<br>                                                                                                                               |[0x80000334]:sub s2, t5, a5<br> [0x80000338]:sw s2, 36(ra)<br>     |
|  32|[0x8000328c]<br>0x00500001|- rs1 : x22<br> - rs2 : x18<br> - rd : x4<br> - rs2_val == -1048577<br> - rs1_val == 4194304<br>                                                                                                                                  |[0x80000348]:sub tp, s6, s2<br> [0x8000034c]:sw tp, 40(ra)<br>     |
|  33|[0x80003290]<br>0x007FF800|- rs1_val == 8388608<br>                                                                                                                                                                                                          |[0x8000035c]:sub a2, a0, a1<br> [0x80000360]:sw a2, 44(ra)<br>     |
|  34|[0x80003294]<br>0x00FC0000|- rs2_val == 262144<br> - rs1_val == 16777216<br>                                                                                                                                                                                 |[0x8000036c]:sub a2, a0, a1<br> [0x80000370]:sw a2, 48(ra)<br>     |
|  35|[0x80003298]<br>0x01F00000|- rs2_val == 1048576<br> - rs1_val == 33554432<br>                                                                                                                                                                                |[0x8000037c]:sub a2, a0, a1<br> [0x80000380]:sw a2, 52(ra)<br>     |
|  36|[0x8000329c]<br>0x84000000|- rs1_val == 67108864<br>                                                                                                                                                                                                         |[0x8000038c]:sub a2, a0, a1<br> [0x80000390]:sw a2, 56(ra)<br>     |
|  37|[0x800032a0]<br>0x07FFFF80|- rs2_val == 128<br> - rs1_val == 134217728<br>                                                                                                                                                                                   |[0x8000039c]:sub a2, a0, a1<br> [0x800003a0]:sw a2, 60(ra)<br>     |
|  38|[0x800032a4]<br>0xA0000000|- rs1_val == 536870912<br>                                                                                                                                                                                                        |[0x800003ac]:sub a2, a0, a1<br> [0x800003b0]:sw a2, 64(ra)<br>     |
|  39|[0x800032a8]<br>0xC0000001|- rs1_val == 1073741824<br>                                                                                                                                                                                                       |[0x800003c0]:sub a2, a0, a1<br> [0x800003c4]:sw a2, 68(ra)<br>     |
|  40|[0x800032ac]<br>0x00001FFF|- rs2_val == -8193<br> - rs1_val == -2<br>                                                                                                                                                                                        |[0x800003d4]:sub a2, a0, a1<br> [0x800003d8]:sw a2, 72(ra)<br>     |
|  41|[0x800032b0]<br>0x000007FE|- rs1_val == -3<br>                                                                                                                                                                                                               |[0x800003e8]:sub a2, a0, a1<br> [0x800003ec]:sw a2, 76(ra)<br>     |
|  42|[0x800032b4]<br>0xFFFEFFFB|- rs2_val == 65536<br> - rs1_val == -5<br>                                                                                                                                                                                        |[0x800003f8]:sub a2, a0, a1<br> [0x800003fc]:sw a2, 80(ra)<br>     |
|  43|[0x800032b8]<br>0xFFFFFFF5|- rs2_val == 2<br> - rs1_val == -9<br>                                                                                                                                                                                            |[0x80000408]:sub a2, a0, a1<br> [0x8000040c]:sw a2, 84(ra)<br>     |
|  44|[0x800032bc]<br>0xFFFFFFF9|- rs1_val == -17<br>                                                                                                                                                                                                              |[0x80000418]:sub a2, a0, a1<br> [0x8000041c]:sw a2, 88(ra)<br>     |
|  45|[0x800032c0]<br>0x00040007|- rs2_val == -262145<br>                                                                                                                                                                                                          |[0x8000042c]:sub a2, a0, a1<br> [0x80000430]:sw a2, 92(ra)<br>     |
|  46|[0x800032c4]<br>0x00082001|- rs2_val == -524289<br>                                                                                                                                                                                                          |[0x80000440]:sub a2, a0, a1<br> [0x80000444]:sw a2, 96(ra)<br>     |
|  47|[0x800032c8]<br>0x00300001|- rs2_val == -2097153<br>                                                                                                                                                                                                         |[0x80000454]:sub a2, a0, a1<br> [0x80000458]:sw a2, 100(ra)<br>    |
|  48|[0x800032cc]<br>0x00800201|- rs2_val == -8388609<br>                                                                                                                                                                                                         |[0x80000468]:sub a2, a0, a1<br> [0x8000046c]:sw a2, 104(ra)<br>    |
|  49|[0x800032d0]<br>0x00F00000|- rs2_val == -16777217<br> - rs1_val == -1048577<br>                                                                                                                                                                              |[0x80000480]:sub a2, a0, a1<br> [0x80000484]:sw a2, 108(ra)<br>    |
|  50|[0x800032d4]<br>0x48000001|- rs2_val == -134217729<br>                                                                                                                                                                                                       |[0x80000494]:sub a2, a0, a1<br> [0x80000498]:sw a2, 112(ra)<br>    |
|  51|[0x800032d8]<br>0x10000004|- rs2_val == -268435457<br>                                                                                                                                                                                                       |[0x800004a8]:sub a2, a0, a1<br> [0x800004ac]:sw a2, 116(ra)<br>    |
|  52|[0x800032dc]<br>0x3FFFFFFC|- rs2_val == -1073741825<br>                                                                                                                                                                                                      |[0x800004bc]:sub a2, a0, a1<br> [0x800004c0]:sw a2, 120(ra)<br>    |
|  53|[0x800032e0]<br>0x8AAAAAAA|- rs2_val == 1431655765<br> - rs1_val == -536870913<br>                                                                                                                                                                           |[0x800004d4]:sub a2, a0, a1<br> [0x800004d8]:sw a2, 124(ra)<br>    |
|  54|[0x800032e4]<br>0x07FFFFC0|- rs1_val == -65<br>                                                                                                                                                                                                              |[0x800004e8]:sub a2, a0, a1<br> [0x800004ec]:sw a2, 128(ra)<br>    |
|  55|[0x800032e8]<br>0xBFFFFF80|- rs1_val == -129<br>                                                                                                                                                                                                             |[0x800004fc]:sub a2, a0, a1<br> [0x80000500]:sw a2, 132(ra)<br>    |
|  56|[0x800032ec]<br>0xFFFFFE05|- rs1_val == -513<br>                                                                                                                                                                                                             |[0x8000050c]:sub a2, a0, a1<br> [0x80000510]:sw a2, 136(ra)<br>    |
|  57|[0x800032f0]<br>0xFFFFFC08|- rs2_val == -9<br> - rs1_val == -1025<br>                                                                                                                                                                                        |[0x8000051c]:sub a2, a0, a1<br> [0x80000520]:sw a2, 140(ra)<br>    |
|  58|[0x800032f4]<br>0xFFFFF900|- rs2_val == -257<br> - rs1_val == -2049<br>                                                                                                                                                                                      |[0x80000530]:sub a2, a0, a1<br> [0x80000534]:sw a2, 144(ra)<br>    |
|  59|[0x800032f8]<br>0x01FFF000|- rs1_val == -4097<br>                                                                                                                                                                                                            |[0x80000548]:sub a2, a0, a1<br> [0x8000054c]:sw a2, 148(ra)<br>    |
|  60|[0x800032fc]<br>0x1FFFE000|- rs1_val == -8193<br>                                                                                                                                                                                                            |[0x80000560]:sub a2, a0, a1<br> [0x80000564]:sw a2, 152(ra)<br>    |
|  61|[0x80003300]<br>0xFFFFC010|- rs2_val == -17<br> - rs1_val == -16385<br>                                                                                                                                                                                      |[0x80000574]:sub a2, a0, a1<br> [0x80000578]:sw a2, 156(ra)<br>    |
|  62|[0x80003304]<br>0xFFFF3FFF|- rs2_val == 16384<br> - rs1_val == -32769<br>                                                                                                                                                                                    |[0x80000588]:sub a2, a0, a1<br> [0x8000058c]:sw a2, 160(ra)<br>    |
|  63|[0x80003308]<br>0x1FFF0000|- rs1_val == -65537<br>                                                                                                                                                                                                           |[0x800005a0]:sub a2, a0, a1<br> [0x800005a4]:sw a2, 164(ra)<br>    |
|  64|[0x8000330c]<br>0xFFFDFDFF|- rs2_val == 512<br> - rs1_val == -131073<br>                                                                                                                                                                                     |[0x800005b4]:sub a2, a0, a1<br> [0x800005b8]:sw a2, 168(ra)<br>    |
|  65|[0x80003310]<br>0xF7FBFFFF|- rs1_val == -262145<br>                                                                                                                                                                                                          |[0x800005c8]:sub a2, a0, a1<br> [0x800005cc]:sw a2, 172(ra)<br>    |
|  66|[0x80003314]<br>0xFFF80100|- rs1_val == -524289<br>                                                                                                                                                                                                          |[0x800005dc]:sub a2, a0, a1<br> [0x800005e0]:sw a2, 176(ra)<br>    |
|  67|[0x80003318]<br>0xBFE00000|- rs1_val == -2097153<br>                                                                                                                                                                                                         |[0x800005f4]:sub a2, a0, a1<br> [0x800005f8]:sw a2, 180(ra)<br>    |
|  68|[0x8000331c]<br>0x0FC00000|- rs1_val == -4194305<br>                                                                                                                                                                                                         |[0x8000060c]:sub a2, a0, a1<br> [0x80000610]:sw a2, 184(ra)<br>    |
|  69|[0x80003320]<br>0xFF800400|- rs1_val == -8388609<br>                                                                                                                                                                                                         |[0x80000620]:sub a2, a0, a1<br> [0x80000624]:sw a2, 188(ra)<br>    |
|  70|[0x80003324]<br>0xFEFFFEFF|- rs2_val == 256<br> - rs1_val == -16777217<br>                                                                                                                                                                                   |[0x80000634]:sub a2, a0, a1<br> [0x80000638]:sw a2, 192(ra)<br>    |
|  71|[0x80003328]<br>0xFE001000|- rs2_val == -4097<br> - rs1_val == -33554433<br>                                                                                                                                                                                 |[0x8000064c]:sub a2, a0, a1<br> [0x80000650]:sw a2, 196(ra)<br>    |
|  72|[0x8000332c]<br>0xF8000800|- rs1_val == -134217729<br>                                                                                                                                                                                                       |[0x80000664]:sub a2, a0, a1<br> [0x80000668]:sw a2, 200(ra)<br>    |
|  73|[0x80003330]<br>0xF0040000|- rs1_val == -268435457<br>                                                                                                                                                                                                       |[0x8000067c]:sub a2, a0, a1<br> [0x80000680]:sw a2, 204(ra)<br>    |
|  74|[0x80003334]<br>0xBFFFFFF8|- rs1_val == -1073741825<br>                                                                                                                                                                                                      |[0x80000690]:sub a2, a0, a1<br> [0x80000694]:sw a2, 208(ra)<br>    |
|  75|[0x80003338]<br>0x55559556|- rs2_val == -16385<br> - rs1_val == 1431655765<br>                                                                                                                                                                               |[0x800006a8]:sub a2, a0, a1<br> [0x800006ac]:sw a2, 212(ra)<br>    |
|  76|[0x8000333c]<br>0xAAAAAB2B|- rs2_val == -129<br> - rs1_val == -1431655766<br>                                                                                                                                                                                |[0x800006bc]:sub a2, a0, a1<br> [0x800006c0]:sw a2, 216(ra)<br>    |
|  77|[0x80003340]<br>0xBFFFFFFC|- rs2_val == 4<br>                                                                                                                                                                                                                |[0x800006cc]:sub a2, a0, a1<br> [0x800006d0]:sw a2, 220(ra)<br>    |
|  78|[0x80003344]<br>0x003FFFE0|- rs2_val == 32<br>                                                                                                                                                                                                               |[0x800006dc]:sub a2, a0, a1<br> [0x800006e0]:sw a2, 224(ra)<br>    |
|  79|[0x80003348]<br>0xFFFFFC08|- rs2_val == 1024<br>                                                                                                                                                                                                             |[0x800006ec]:sub a2, a0, a1<br> [0x800006f0]:sw a2, 228(ra)<br>    |
|  80|[0x8000334c]<br>0x00007000|- rs2_val == 4096<br>                                                                                                                                                                                                             |[0x800006fc]:sub a2, a0, a1<br> [0x80000700]:sw a2, 232(ra)<br>    |
|  81|[0x80003350]<br>0xFFF7FDFF|- rs2_val == 524288<br>                                                                                                                                                                                                           |[0x8000070c]:sub a2, a0, a1<br> [0x80000710]:sw a2, 236(ra)<br>    |
|  82|[0x80003354]<br>0xFFBFFFF9|- rs2_val == 4194304<br>                                                                                                                                                                                                          |[0x8000071c]:sub a2, a0, a1<br> [0x80000720]:sw a2, 240(ra)<br>    |
|  83|[0x80003358]<br>0x07800000|- rs2_val == 8388608<br>                                                                                                                                                                                                          |[0x8000072c]:sub a2, a0, a1<br> [0x80000730]:sw a2, 244(ra)<br>    |
|  84|[0x8000335c]<br>0x7EFFFFFF|- rs2_val == 16777216<br>                                                                                                                                                                                                         |[0x80000740]:sub a2, a0, a1<br> [0x80000744]:sw a2, 248(ra)<br>    |
|  85|[0x80003360]<br>0xFC000020|- rs2_val == 67108864<br>                                                                                                                                                                                                         |[0x80000750]:sub a2, a0, a1<br> [0x80000754]:sw a2, 252(ra)<br>    |
|  86|[0x80003364]<br>0xDFFFFFFC|- rs2_val == 536870912<br>                                                                                                                                                                                                        |[0x80000760]:sub a2, a0, a1<br> [0x80000764]:sw a2, 256(ra)<br>    |
|  87|[0x80003368]<br>0x00008002|- rs2_val == -2<br>                                                                                                                                                                                                               |[0x80000770]:sub a2, a0, a1<br> [0x80000774]:sw a2, 260(ra)<br>    |
|  88|[0x8000336c]<br>0x00000008|- rs2_val == -3<br>                                                                                                                                                                                                               |[0x80000780]:sub a2, a0, a1<br> [0x80000784]:sw a2, 264(ra)<br>    |
|  89|[0x80003370]<br>0xFE000020|- rs2_val == -33<br>                                                                                                                                                                                                              |[0x80000794]:sub a2, a0, a1<br> [0x80000798]:sw a2, 268(ra)<br>    |
|  90|[0x80003374]<br>0xFFF80040|- rs2_val == -65<br>                                                                                                                                                                                                              |[0x800007a8]:sub a2, a0, a1<br> [0x800007ac]:sw a2, 272(ra)<br>    |
|  91|[0x80003378]<br>0x00000211|- rs2_val == -513<br>                                                                                                                                                                                                             |[0x800007b8]:sub a2, a0, a1<br> [0x800007bc]:sw a2, 276(ra)<br>    |
|  92|[0x8000337c]<br>0x00000000|- rs2_val == 8192<br>                                                                                                                                                                                                             |[0x800007c8]:sub a2, a0, a1<br> [0x800007cc]:sw a2, 280(ra)<br>    |
|  93|[0x80003380]<br>0x00007800|- rs2_val == -32769<br>                                                                                                                                                                                                           |[0x800007e0]:sub a2, a0, a1<br> [0x800007e4]:sw a2, 284(ra)<br>    |
|  94|[0x80003384]<br>0x0000FFFB|- rs2_val == -65537<br>                                                                                                                                                                                                           |[0x800007f4]:sub a2, a0, a1<br> [0x800007f8]:sw a2, 288(ra)<br>    |
|  95|[0x80003388]<br>0xFFFDFFBF|- rs2_val == 131072<br>                                                                                                                                                                                                           |[0x80000804]:sub a2, a0, a1<br> [0x80000808]:sw a2, 292(ra)<br>    |
|  96|[0x80003390]<br>0xFBFFFFFE|- rs1_val == -67108865<br>                                                                                                                                                                                                        |[0x80000828]:sub a2, a0, a1<br> [0x8000082c]:sw a2, 300(ra)<br>    |