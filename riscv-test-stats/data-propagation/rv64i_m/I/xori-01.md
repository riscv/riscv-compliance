
# Data Propagation Report

STAT1 : Number of unique coverpoint hits that have updated the signature

STAT2 : Number of covepoints hits which are not unique but still update the signature

STAT3 : Number of instructions that contribute to a unique coverpoint but do not update signature

STAT4 : Number of Multiple signature updates for the same coverpoint

STAT5 : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 64      |
| TEST_REGION               | [('0x80000390', '0x80000c10')]      |
| SIG_REGION                | [('0x80003204', '0x80003648', '136 dwords')]      |
| COV_LABELS                | xori      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/riscof/riscof_work/xori-01.S/xori-01.S    |
| Total Number of coverpoints| 235     |
| Total Signature Updates   | 135      |
| Total Coverpoints Covered | 235      |
| STAT1                     | 134      |
| STAT2                     | 1      |
| STAT3                     | 0     |
| STAT4                     | 0     |
| STAT5                     | 0     |

## Details for STAT2:

```
Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000c08]:xori a1, a0, 3072
      [0x80000c0c]:sd a1, 904(ra)
 -- Signature Address: 0x80003640 Data: 0xFFFFFFFFFFFF7C00
 -- Redundant Coverpoints hit by the op
      - opcode : xori
      - rs1 : x10
      - rd : x11
      - rs1 != rd
      - rs1_val != imm_val
      - rs1_val > 0 and imm_val < 0
      - rs1_val == 32768






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

|s.no|            signature             |                                                                              coverpoints                                                                               |                                 code                                 |
|---:|----------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------|
|   1|[0x80003210]<br>0x0000000000000000|- opcode : xori<br> - rs1 : x4<br> - rd : x4<br> - rs1 == rd<br> - rs1_val == imm_val<br> - rs1_val > 0 and imm_val > 0<br> - imm_val == 1024<br> - rs1_val == 1024<br> |[0x8000039c]:xori tp, tp, 1024<br> [0x800003a0]:sd tp, 0(sp)<br>      |
|   2|[0x80003218]<br>0xFFFFFFEFFFFFFFDF|- rs1 : x21<br> - rd : x27<br> - rs1 != rd<br> - rs1_val != imm_val<br> - rs1_val > 0 and imm_val < 0<br> - imm_val == -33<br> - rs1_val == 68719476736<br>             |[0x800003ac]:xori s11, s5, 4063<br> [0x800003b0]:sd s11, 8(sp)<br>    |
|   3|[0x80003220]<br>0xFFFFFF7FFFFFFFF9|- rs1 : x18<br> - rd : x30<br> - rs1_val < 0 and imm_val > 0<br> - rs1_val == -549755813889<br>                                                                         |[0x800003c0]:xori t5, s2, 6<br> [0x800003c4]:sd t5, 16(sp)<br>        |
|   4|[0x80003228]<br>0x0020000000000555|- rs1 : x28<br> - rd : x19<br> - rs1_val < 0 and imm_val < 0<br> - imm_val == -1366<br> - rs1_val == -9007199254740993<br>                                              |[0x800003d4]:xori s3, t3, 2730<br> [0x800003d8]:sd s3, 24(sp)<br>     |
|   5|[0x80003230]<br>0x8000000000000555|- rs1 : x24<br> - rd : x20<br> - rs1_val == (-2**(xlen-1))<br> - imm_val == 1365<br> - rs1_val == -9223372036854775808<br>                                              |[0x800003e4]:xori s4, s8, 1365<br> [0x800003e8]:sd s4, 32(sp)<br>     |
|   6|[0x80003238]<br>0x0000000000000010|- rs1 : x5<br> - rd : x10<br> - rs1_val == 0<br> - imm_val == 16<br>                                                                                                    |[0x800003f0]:xori a0, t0, 16<br> [0x800003f4]:sd a0, 40(sp)<br>       |
|   7|[0x80003240]<br>0x8000000000000400|- rs1 : x8<br> - rd : x14<br> - rs1_val == (2**(xlen-1)-1)<br> - imm_val == -1025<br> - rs1_val == 9223372036854775807<br>                                              |[0x80000404]:xori a4, fp, 3071<br> [0x80000408]:sd a4, 48(sp)<br>     |
|   8|[0x80003248]<br>0x0000000000000007|- rs1 : x29<br> - rd : x6<br> - rs1_val == 1<br>                                                                                                                        |[0x80000410]:xori t1, t4, 6<br> [0x80000414]:sd t1, 56(sp)<br>        |
|   9|[0x80003250]<br>0x00000200000007FF|- rs1 : x1<br> - rd : x18<br> - imm_val == (-2**(12-1))<br> - imm_val == -2048<br> - rs1_val == -2199023255553<br>                                                      |[0x80000424]:xori s2, ra, 2048<br> [0x80000428]:sd s2, 64(sp)<br>     |
|  10|[0x80003258]<br>0xFFFFFFFFFFFFFF7F|- rs1 : x10<br> - rd : x23<br> - imm_val == 0<br> - rs1_val == -129<br>                                                                                                 |[0x80000430]:xori s7, a0, 0<br> [0x80000434]:sd s7, 72(sp)<br>        |
|  11|[0x80003260]<br>0x20000000000007FF|- rs1 : x6<br> - rd : x15<br> - imm_val == (2**(12-1)-1)<br> - imm_val == 2047<br> - rs1_val == 2305843009213693952<br>                                                 |[0x80000440]:xori a5, t1, 2047<br> [0x80000444]:sd a5, 80(sp)<br>     |
|  12|[0x80003268]<br>0xFFFFFFFFFFFFFFF8|- rs1 : x23<br> - rd : x1<br> - imm_val == 1<br>                                                                                                                        |[0x8000044c]:xori ra, s7, 1<br> [0x80000450]:sd ra, 88(sp)<br>        |
|  13|[0x80003270]<br>0xFFFFFFFFFFFFFFED|- rs1 : x13<br> - rd : x25<br> - imm_val == -17<br> - rs1_val == 2<br>                                                                                                  |[0x80000458]:xori s9, a3, 4079<br> [0x8000045c]:sd s9, 96(sp)<br>     |
|  14|[0x80003278]<br>0xFFFFFFFFFFFFFC04|- rs1 : x7<br> - rd : x31<br> - rs1_val == 4<br>                                                                                                                        |[0x80000464]:xori t6, t2, 3072<br> [0x80000468]:sd t6, 104(sp)<br>    |
|  15|[0x80003280]<br>0xFFFFFFFFFFFFFEF7|- rs1 : x26<br> - rd : x7<br> - imm_val == -257<br> - rs1_val == 8<br>                                                                                                  |[0x80000470]:xori t2, s10, 3839<br> [0x80000474]:sd t2, 112(sp)<br>   |
|  16|[0x80003288]<br>0xFFFFFFFFFFFFFFEE|- rs1 : x31<br> - rd : x8<br> - imm_val == -2<br> - rs1_val == 16<br>                                                                                                   |[0x8000047c]:xori fp, t6, 4094<br> [0x80000480]:sd fp, 120(sp)<br>    |
|  17|[0x80003290]<br>0xFFFFFFFFFFFFFFDB|- rs1 : x30<br> - rd : x3<br> - imm_val == -5<br> - rs1_val == 32<br>                                                                                                   |[0x80000488]:xori gp, t5, 4091<br> [0x8000048c]:sd gp, 128(sp)<br>    |
|  18|[0x80003298]<br>0x0000000000000008|- rs1 : x0<br> - rd : x11<br> - imm_val == 8<br>                                                                                                                        |[0x80000494]:xori a1, zero, 8<br> [0x80000498]:sd a1, 136(sp)<br>     |
|  19|[0x800032a0]<br>0xFFFFFFFFFFFFFD7F|- rs1 : x9<br> - rd : x16<br> - imm_val == -513<br> - rs1_val == 128<br>                                                                                                |[0x800004a0]:xori a6, s1, 3583<br> [0x800004a4]:sd a6, 144(sp)<br>    |
|  20|[0x800032a8]<br>0x0000000000000105|- rs1 : x15<br> - rd : x28<br> - rs1_val == 256<br>                                                                                                                     |[0x800004ac]:xori t3, a5, 5<br> [0x800004b0]:sd t3, 152(sp)<br>       |
|  21|[0x800032b0]<br>0xFFFFFFFFFFFFFDF9|- rs1 : x12<br> - rd : x29<br> - rs1_val == 512<br>                                                                                                                     |[0x800004b8]:xori t4, a2, 4089<br> [0x800004bc]:sd t4, 160(sp)<br>    |
|  22|[0x800032b8]<br>0x0000000000000820|- rs1 : x3<br> - rd : x13<br> - imm_val == 32<br> - rs1_val == 2048<br>                                                                                                 |[0x800004d0]:xori a3, gp, 32<br> [0x800004d4]:sd a3, 0(ra)<br>        |
|  23|[0x800032c0]<br>0x0000000000001007|- rs1 : x16<br> - rd : x17<br> - rs1_val == 4096<br>                                                                                                                    |[0x800004dc]:xori a7, a6, 7<br> [0x800004e0]:sd a7, 8(ra)<br>         |
|  24|[0x800032c8]<br>0xFFFFFFFFFFFFDFDF|- rs1 : x14<br> - rd : x9<br> - rs1_val == 8192<br>                                                                                                                     |[0x800004e8]:xori s1, a4, 4063<br> [0x800004ec]:sd s1, 16(ra)<br>     |
|  25|[0x800032d0]<br>0xFFFFFFFFFFFFBFEF|- rs1 : x2<br> - rd : x26<br> - rs1_val == 16384<br>                                                                                                                    |[0x800004f4]:xori s10, sp, 4079<br> [0x800004f8]:sd s10, 24(ra)<br>   |
|  26|[0x800032d8]<br>0x0000000000000000|- rs1 : x17<br> - rd : x0<br> - rs1_val == 32768<br>                                                                                                                    |[0x80000500]:xori zero, a7, 3072<br> [0x80000504]:sd zero, 32(ra)<br> |
|  27|[0x800032e0]<br>0x00000000000107FF|- rs1 : x19<br> - rd : x2<br> - rs1_val == 65536<br>                                                                                                                    |[0x8000050c]:xori sp, s3, 2047<br> [0x80000510]:sd sp, 40(ra)<br>     |
|  28|[0x800032e8]<br>0xFFFFFFFFFFFDFFFF|- rs1 : x20<br> - rd : x5<br> - rs1_val == 131072<br>                                                                                                                   |[0x80000518]:xori t0, s4, 4095<br> [0x8000051c]:sd t0, 48(ra)<br>     |
|  29|[0x800032f0]<br>0xFFFFFFFFFFFBFFFD|- rs1 : x27<br> - rd : x24<br> - imm_val == -3<br> - rs1_val == 262144<br>                                                                                              |[0x80000524]:xori s8, s11, 4093<br> [0x80000528]:sd s8, 56(ra)<br>    |
|  30|[0x800032f8]<br>0x0000000000080005|- rs1 : x11<br> - rd : x22<br> - rs1_val == 524288<br>                                                                                                                  |[0x80000530]:xori s6, a1, 5<br> [0x80000534]:sd s6, 64(ra)<br>        |
|  31|[0x80003300]<br>0xFFFFFFFFFFEFFEFF|- rs1 : x22<br> - rd : x21<br> - rs1_val == 1048576<br>                                                                                                                 |[0x8000053c]:xori s5, s6, 3839<br> [0x80000540]:sd s5, 72(ra)<br>     |
|  32|[0x80003308]<br>0xFFFFFFFFFFDFFFF7|- rs1 : x25<br> - rd : x12<br> - imm_val == -9<br> - rs1_val == 2097152<br>                                                                                             |[0x80000548]:xori a2, s9, 4087<br> [0x8000054c]:sd a2, 80(ra)<br>     |
|  33|[0x80003310]<br>0x0000000000400555|- rs1_val == 4194304<br>                                                                                                                                                |[0x80000554]:xori a1, a0, 1365<br> [0x80000558]:sd a1, 88(ra)<br>     |
|  34|[0x80003318]<br>0x0000000000800040|- imm_val == 64<br> - rs1_val == 8388608<br>                                                                                                                            |[0x80000560]:xori a1, a0, 64<br> [0x80000564]:sd a1, 96(ra)<br>       |
|  35|[0x80003320]<br>0xFFFFFFFFFEFFFFDF|- rs1_val == 16777216<br>                                                                                                                                               |[0x8000056c]:xori a1, a0, 4063<br> [0x80000570]:sd a1, 104(ra)<br>    |
|  36|[0x80003328]<br>0xFFFFFFFFFDFFFFFD|- rs1_val == 33554432<br>                                                                                                                                               |[0x80000578]:xori a1, a0, 4093<br> [0x8000057c]:sd a1, 112(ra)<br>    |
|  37|[0x80003330]<br>0x00000000040007FF|- rs1_val == 67108864<br>                                                                                                                                               |[0x80000584]:xori a1, a0, 2047<br> [0x80000588]:sd a1, 120(ra)<br>    |
|  38|[0x80003338]<br>0xFFFFFFFFF7FFF800|- rs1_val == 134217728<br>                                                                                                                                              |[0x80000590]:xori a1, a0, 2048<br> [0x80000594]:sd a1, 128(ra)<br>    |
|  39|[0x80003340]<br>0xFFFFFFFFEFFFFFFF|- rs1_val == 268435456<br>                                                                                                                                              |[0x8000059c]:xori a1, a0, 4095<br> [0x800005a0]:sd a1, 136(ra)<br>    |
|  40|[0x80003348]<br>0xFFFFFFFFDFFFFFFD|- rs1_val == 536870912<br>                                                                                                                                              |[0x800005a8]:xori a1, a0, 4093<br> [0x800005ac]:sd a1, 144(ra)<br>    |
|  41|[0x80003350]<br>0x0000000040000555|- rs1_val == 1073741824<br>                                                                                                                                             |[0x800005b4]:xori a1, a0, 1365<br> [0x800005b8]:sd a1, 152(ra)<br>    |
|  42|[0x80003358]<br>0xFFFFFFFF7FFFFBFF|- rs1_val == 2147483648<br>                                                                                                                                             |[0x800005c4]:xori a1, a0, 3071<br> [0x800005c8]:sd a1, 160(ra)<br>    |
|  43|[0x80003360]<br>0xFFFFFFFEFFFFFFFC|- rs1_val == 4294967296<br>                                                                                                                                             |[0x800005d4]:xori a1, a0, 4092<br> [0x800005d8]:sd a1, 168(ra)<br>    |
|  44|[0x80003368]<br>0x0000000200000002|- imm_val == 2<br> - rs1_val == 8589934592<br>                                                                                                                          |[0x800005e4]:xori a1, a0, 2<br> [0x800005e8]:sd a1, 176(ra)<br>       |
|  45|[0x80003370]<br>0xFFFFFFFBFFFFFF7F|- imm_val == -129<br> - rs1_val == 17179869184<br>                                                                                                                      |[0x800005f4]:xori a1, a0, 3967<br> [0x800005f8]:sd a1, 184(ra)<br>    |
|  46|[0x80003378]<br>0x00000008000007FF|- rs1_val == 34359738368<br>                                                                                                                                            |[0x80000604]:xori a1, a0, 2047<br> [0x80000608]:sd a1, 192(ra)<br>    |
|  47|[0x80003380]<br>0xFFFFFFDFFFFFF800|- rs1_val == 137438953472<br>                                                                                                                                           |[0x80000614]:xori a1, a0, 2048<br> [0x80000618]:sd a1, 200(ra)<br>    |
|  48|[0x80003388]<br>0xFFFFFFBFFFFFFFDF|- rs1_val == 274877906944<br>                                                                                                                                           |[0x80000624]:xori a1, a0, 4063<br> [0x80000628]:sd a1, 208(ra)<br>    |
|  49|[0x80003390]<br>0xFFFFFF7FFFFFFFFA|- rs1_val == 549755813888<br>                                                                                                                                           |[0x80000634]:xori a1, a0, 4090<br> [0x80000638]:sd a1, 216(ra)<br>    |
|  50|[0x80003398]<br>0xFFFFFEFFFFFFFFFE|- rs1_val == 1099511627776<br>                                                                                                                                          |[0x80000644]:xori a1, a0, 4094<br> [0x80000648]:sd a1, 224(ra)<br>    |
|  51|[0x800033a0]<br>0x0000020000000005|- rs1_val == 2199023255552<br>                                                                                                                                          |[0x80000654]:xori a1, a0, 5<br> [0x80000658]:sd a1, 232(ra)<br>       |
|  52|[0x800033a8]<br>0x0000040000000080|- imm_val == 128<br> - rs1_val == 4398046511104<br>                                                                                                                     |[0x80000664]:xori a1, a0, 128<br> [0x80000668]:sd a1, 240(ra)<br>     |
|  53|[0x800033b0]<br>0x0000080000000006|- rs1_val == 8796093022208<br>                                                                                                                                          |[0x80000674]:xori a1, a0, 6<br> [0x80000678]:sd a1, 248(ra)<br>       |
|  54|[0x800033b8]<br>0xFFFFEFFFFFFFFFFA|- rs1_val == 17592186044416<br>                                                                                                                                         |[0x80000684]:xori a1, a0, 4090<br> [0x80000688]:sd a1, 256(ra)<br>    |
|  55|[0x800033c0]<br>0x0000200000000002|- rs1_val == 35184372088832<br>                                                                                                                                         |[0x80000694]:xori a1, a0, 2<br> [0x80000698]:sd a1, 264(ra)<br>       |
|  56|[0x800033c8]<br>0x0000400000000007|- rs1_val == 70368744177664<br>                                                                                                                                         |[0x800006a4]:xori a1, a0, 7<br> [0x800006a8]:sd a1, 272(ra)<br>       |
|  57|[0x800033d0]<br>0xFFFF7FFFFFFFFFEF|- rs1_val == 140737488355328<br>                                                                                                                                        |[0x800006b4]:xori a1, a0, 4079<br> [0x800006b8]:sd a1, 280(ra)<br>    |
|  58|[0x800033d8]<br>0xFFFEFFFFFFFFFEFF|- rs1_val == 281474976710656<br>                                                                                                                                        |[0x800006c4]:xori a1, a0, 3839<br> [0x800006c8]:sd a1, 288(ra)<br>    |
|  59|[0x800033e0]<br>0xFFFDFFFFFFFFFFFE|- rs1_val == 562949953421312<br>                                                                                                                                        |[0x800006d4]:xori a1, a0, 4094<br> [0x800006d8]:sd a1, 296(ra)<br>    |
|  60|[0x800033e8]<br>0xFFFBFFFFFFFFF800|- rs1_val == 1125899906842624<br>                                                                                                                                       |[0x800006e4]:xori a1, a0, 2048<br> [0x800006e8]:sd a1, 304(ra)<br>    |
|  61|[0x800033f0]<br>0x00080000000003FF|- rs1_val == 2251799813685248<br>                                                                                                                                       |[0x800006f4]:xori a1, a0, 1023<br> [0x800006f8]:sd a1, 312(ra)<br>    |
|  62|[0x800033f8]<br>0x0010000000000000|- rs1_val == 4503599627370496<br>                                                                                                                                       |[0x80000704]:xori a1, a0, 0<br> [0x80000708]:sd a1, 320(ra)<br>       |
|  63|[0x80003400]<br>0x00200000000003FF|- rs1_val == 9007199254740992<br>                                                                                                                                       |[0x80000714]:xori a1, a0, 1023<br> [0x80000718]:sd a1, 328(ra)<br>    |
|  64|[0x80003408]<br>0x0040000000000100|- imm_val == 256<br> - rs1_val == 18014398509481984<br>                                                                                                                 |[0x80000724]:xori a1, a0, 256<br> [0x80000728]:sd a1, 336(ra)<br>     |
|  65|[0x80003410]<br>0x00800000000007FF|- rs1_val == 36028797018963968<br>                                                                                                                                      |[0x80000734]:xori a1, a0, 2047<br> [0x80000738]:sd a1, 344(ra)<br>    |
|  66|[0x80003418]<br>0x01000000000007FF|- rs1_val == 72057594037927936<br>                                                                                                                                      |[0x80000744]:xori a1, a0, 2047<br> [0x80000748]:sd a1, 352(ra)<br>    |
|  67|[0x80003420]<br>0x0200000000000100|- rs1_val == 144115188075855872<br>                                                                                                                                     |[0x80000754]:xori a1, a0, 256<br> [0x80000758]:sd a1, 360(ra)<br>     |
|  68|[0x80003428]<br>0xFBFFFFFFFFFFFFF9|- rs1_val == 288230376151711744<br>                                                                                                                                     |[0x80000764]:xori a1, a0, 4089<br> [0x80000768]:sd a1, 368(ra)<br>    |
|  69|[0x80003430]<br>0xF7FFFFFFFFFFFFFD|- rs1_val == 576460752303423488<br>                                                                                                                                     |[0x80000774]:xori a1, a0, 4093<br> [0x80000778]:sd a1, 376(ra)<br>    |
|  70|[0x80003438]<br>0xEFFFFFFFFFFFFFBF|- imm_val == -65<br> - rs1_val == 1152921504606846976<br>                                                                                                               |[0x80000784]:xori a1, a0, 4031<br> [0x80000788]:sd a1, 384(ra)<br>    |
|  71|[0x80003440]<br>0x4000000000000009|- rs1_val == 4611686018427387904<br>                                                                                                                                    |[0x80000794]:xori a1, a0, 9<br> [0x80000798]:sd a1, 392(ra)<br>       |
|  72|[0x80003448]<br>0xFFF7FFFFFFFFFFFB|- imm_val == 4<br> - rs1_val == -2251799813685249<br>                                                                                                                   |[0x800007a8]:xori a1, a0, 4<br> [0x800007ac]:sd a1, 400(ra)<br>       |
|  73|[0x80003450]<br>0x0010000000000555|- rs1_val == -4503599627370497<br>                                                                                                                                      |[0x800007bc]:xori a1, a0, 2730<br> [0x800007c0]:sd a1, 408(ra)<br>    |
|  74|[0x80003458]<br>0xFFBFFFFFFFFFFAAA|- rs1_val == -18014398509481985<br>                                                                                                                                     |[0x800007d0]:xori a1, a0, 1365<br> [0x800007d4]:sd a1, 416(ra)<br>    |
|  75|[0x80003460]<br>0xFF7FFFFFFFFFFF7F|- rs1_val == -36028797018963969<br>                                                                                                                                     |[0x800007e4]:xori a1, a0, 128<br> [0x800007e8]:sd a1, 424(ra)<br>     |
|  76|[0x80003468]<br>0x0100000000000007|- rs1_val == -72057594037927937<br>                                                                                                                                     |[0x800007f8]:xori a1, a0, 4088<br> [0x800007fc]:sd a1, 432(ra)<br>    |
|  77|[0x80003470]<br>0xFDFFFFFFFFFFFFBF|- rs1_val == -144115188075855873<br>                                                                                                                                    |[0x8000080c]:xori a1, a0, 64<br> [0x80000810]:sd a1, 440(ra)<br>      |
|  78|[0x80003478]<br>0x0400000000000010|- rs1_val == -288230376151711745<br>                                                                                                                                    |[0x80000820]:xori a1, a0, 4079<br> [0x80000824]:sd a1, 448(ra)<br>    |
|  79|[0x80003480]<br>0xF7FFFFFFFFFFFFF8|- rs1_val == -576460752303423489<br>                                                                                                                                    |[0x80000834]:xori a1, a0, 7<br> [0x80000838]:sd a1, 456(ra)<br>       |
|  80|[0x80003488]<br>0x1000000000000007|- rs1_val == -1152921504606846977<br>                                                                                                                                   |[0x80000848]:xori a1, a0, 4088<br> [0x8000084c]:sd a1, 464(ra)<br>    |
|  81|[0x80003490]<br>0xDFFFFFFFFFFFFFEF|- rs1_val == -2305843009213693953<br>                                                                                                                                   |[0x8000085c]:xori a1, a0, 16<br> [0x80000860]:sd a1, 472(ra)<br>      |
|  82|[0x80003498]<br>0x4000000000000400|- rs1_val == -4611686018427387905<br>                                                                                                                                   |[0x80000870]:xori a1, a0, 3071<br> [0x80000874]:sd a1, 480(ra)<br>    |
|  83|[0x800034a0]<br>0xAAAAAAAAAAAAAAEA|- rs1_val == 6148914691236517205<br>                                                                                                                                    |[0x80000898]:xori a1, a0, 4031<br> [0x8000089c]:sd a1, 488(ra)<br>    |
|  84|[0x800034a8]<br>0x5555555555555557|- rs1_val == -6148914691236517206<br>                                                                                                                                   |[0x800008c0]:xori a1, a0, 4093<br> [0x800008c4]:sd a1, 496(ra)<br>    |
|  85|[0x800034b0]<br>0x0000004000000200|- imm_val == 512<br>                                                                                                                                                    |[0x800008d0]:xori a1, a0, 512<br> [0x800008d4]:sd a1, 504(ra)<br>     |
|  86|[0x800034b8]<br>0x0000000000000011|- rs1_val == -2<br>                                                                                                                                                     |[0x800008dc]:xori a1, a0, 4079<br> [0x800008e0]:sd a1, 512(ra)<br>    |
|  87|[0x800034c0]<br>0x0000000000000082|- rs1_val == -3<br>                                                                                                                                                     |[0x800008e8]:xori a1, a0, 3967<br> [0x800008ec]:sd a1, 520(ra)<br>    |
|  88|[0x800034c8]<br>0x0000000000000404|- rs1_val == -5<br>                                                                                                                                                     |[0x800008f4]:xori a1, a0, 3071<br> [0x800008f8]:sd a1, 528(ra)<br>    |
|  89|[0x800034d0]<br>0x0000000000000000|- rs1_val == -9<br>                                                                                                                                                     |[0x80000900]:xori a1, a0, 4087<br> [0x80000904]:sd a1, 536(ra)<br>    |
|  90|[0x800034d8]<br>0x0000000000000015|- rs1_val == -17<br>                                                                                                                                                    |[0x8000090c]:xori a1, a0, 4090<br> [0x80000910]:sd a1, 544(ra)<br>    |
|  91|[0x800034e0]<br>0xFFFFFFFFFFFFFFDA|- rs1_val == -33<br>                                                                                                                                                    |[0x80000918]:xori a1, a0, 5<br> [0x8000091c]:sd a1, 552(ra)<br>       |
|  92|[0x800034e8]<br>0x0000000000000041|- rs1_val == -65<br>                                                                                                                                                    |[0x80000924]:xori a1, a0, 4094<br> [0x80000928]:sd a1, 560(ra)<br>    |
|  93|[0x800034f0]<br>0xFFFFFFFFFFFFFEFB|- rs1_val == -257<br>                                                                                                                                                   |[0x80000930]:xori a1, a0, 4<br> [0x80000934]:sd a1, 568(ra)<br>       |
|  94|[0x800034f8]<br>0xFFFFFFFFFFFFFD7F|- rs1_val == -513<br>                                                                                                                                                   |[0x8000093c]:xori a1, a0, 128<br> [0x80000940]:sd a1, 576(ra)<br>     |
|  95|[0x80003500]<br>0xFFFFFFFFFFFFFBF7|- rs1_val == -1025<br>                                                                                                                                                  |[0x80000948]:xori a1, a0, 8<br> [0x8000094c]:sd a1, 584(ra)<br>       |
|  96|[0x80003508]<br>0x0000000000000805|- rs1_val == -2049<br>                                                                                                                                                  |[0x80000958]:xori a1, a0, 4090<br> [0x8000095c]:sd a1, 592(ra)<br>    |
|  97|[0x80003510]<br>0xFFFFFFFFFFFFEFF8|- rs1_val == -4097<br>                                                                                                                                                  |[0x80000968]:xori a1, a0, 7<br> [0x8000096c]:sd a1, 600(ra)<br>       |
|  98|[0x80003518]<br>0xFFFFFFFFFFFFDFDF|- rs1_val == -8193<br>                                                                                                                                                  |[0x80000978]:xori a1, a0, 32<br> [0x8000097c]:sd a1, 608(ra)<br>      |
|  99|[0x80003520]<br>0x00000000000047FF|- rs1_val == -16385<br>                                                                                                                                                 |[0x80000988]:xori a1, a0, 2048<br> [0x8000098c]:sd a1, 616(ra)<br>    |
| 100|[0x80003528]<br>0x00000000000087FF|- rs1_val == -32769<br>                                                                                                                                                 |[0x80000998]:xori a1, a0, 2048<br> [0x8000099c]:sd a1, 624(ra)<br>    |
| 101|[0x80003530]<br>0x0000000000010004|- rs1_val == -65537<br>                                                                                                                                                 |[0x800009a8]:xori a1, a0, 4091<br> [0x800009ac]:sd a1, 632(ra)<br>    |
| 102|[0x80003538]<br>0xFFFFFFFFFFFDFFFD|- rs1_val == -131073<br>                                                                                                                                                |[0x800009b8]:xori a1, a0, 2<br> [0x800009bc]:sd a1, 640(ra)<br>       |
| 103|[0x80003540]<br>0xFFFFFFFFFFFBFFFA|- rs1_val == -262145<br>                                                                                                                                                |[0x800009c8]:xori a1, a0, 5<br> [0x800009cc]:sd a1, 648(ra)<br>       |
| 104|[0x80003548]<br>0x0000000000080020|- rs1_val == -524289<br>                                                                                                                                                |[0x800009d8]:xori a1, a0, 4063<br> [0x800009dc]:sd a1, 656(ra)<br>    |
| 105|[0x80003550]<br>0x0000000000100555|- rs1_val == -1048577<br>                                                                                                                                               |[0x800009e8]:xori a1, a0, 2730<br> [0x800009ec]:sd a1, 664(ra)<br>    |
| 106|[0x80003558]<br>0x0000000000200005|- rs1_val == -2097153<br>                                                                                                                                               |[0x800009f8]:xori a1, a0, 4090<br> [0x800009fc]:sd a1, 672(ra)<br>    |
| 107|[0x80003560]<br>0x0000000000400040|- rs1_val == -4194305<br>                                                                                                                                               |[0x80000a08]:xori a1, a0, 4031<br> [0x80000a0c]:sd a1, 680(ra)<br>    |
| 108|[0x80003568]<br>0xFFFFFFFFFF7FF800|- rs1_val == -8388609<br>                                                                                                                                               |[0x80000a18]:xori a1, a0, 2047<br> [0x80000a1c]:sd a1, 688(ra)<br>    |
| 109|[0x80003570]<br>0xFFFFFFFFFEFFF800|- rs1_val == -16777217<br>                                                                                                                                              |[0x80000a28]:xori a1, a0, 2047<br> [0x80000a2c]:sd a1, 696(ra)<br>    |
| 110|[0x80003578]<br>0x0000000002000555|- rs1_val == -33554433<br>                                                                                                                                              |[0x80000a38]:xori a1, a0, 2730<br> [0x80000a3c]:sd a1, 704(ra)<br>    |
| 111|[0x80003580]<br>0xFFFFFFFFFBFFF800|- rs1_val == -67108865<br>                                                                                                                                              |[0x80000a48]:xori a1, a0, 2047<br> [0x80000a4c]:sd a1, 712(ra)<br>    |
| 112|[0x80003588]<br>0xFFFFFFFFF7FFFFF8|- rs1_val == -134217729<br>                                                                                                                                             |[0x80000a58]:xori a1, a0, 7<br> [0x80000a5c]:sd a1, 720(ra)<br>       |
| 113|[0x80003590]<br>0xFFFFFFFFEFFFFFFB|- rs1_val == -268435457<br>                                                                                                                                             |[0x80000a68]:xori a1, a0, 4<br> [0x80000a6c]:sd a1, 728(ra)<br>       |
| 114|[0x80003598]<br>0xFFFFFFFFDFFFFFFF|- rs1_val == -536870913<br>                                                                                                                                             |[0x80000a78]:xori a1, a0, 0<br> [0x80000a7c]:sd a1, 736(ra)<br>       |
| 115|[0x800035a0]<br>0x0000000040000009|- rs1_val == -1073741825<br>                                                                                                                                            |[0x80000a88]:xori a1, a0, 4086<br> [0x80000a8c]:sd a1, 744(ra)<br>    |
| 116|[0x800035a8]<br>0x0000000080000040|- rs1_val == -2147483649<br>                                                                                                                                            |[0x80000a9c]:xori a1, a0, 4031<br> [0x80000aa0]:sd a1, 752(ra)<br>    |
| 117|[0x800035b0]<br>0xFFFFFFFEFFFFFC00|- rs1_val == -4294967297<br>                                                                                                                                            |[0x80000ab0]:xori a1, a0, 1023<br> [0x80000ab4]:sd a1, 760(ra)<br>    |
| 118|[0x800035b8]<br>0xFFFFFFFDFFFFFFBF|- rs1_val == -8589934593<br>                                                                                                                                            |[0x80000ac4]:xori a1, a0, 64<br> [0x80000ac8]:sd a1, 768(ra)<br>      |
| 119|[0x800035c0]<br>0xFFFFFFFBFFFFFFDF|- rs1_val == -17179869185<br>                                                                                                                                           |[0x80000ad8]:xori a1, a0, 32<br> [0x80000adc]:sd a1, 776(ra)<br>      |
| 120|[0x800035c8]<br>0x0000000800000010|- rs1_val == -34359738369<br>                                                                                                                                           |[0x80000aec]:xori a1, a0, 4079<br> [0x80000af0]:sd a1, 784(ra)<br>    |
| 121|[0x800035d0]<br>0x0000001000000100|- rs1_val == -68719476737<br>                                                                                                                                           |[0x80000b00]:xori a1, a0, 3839<br> [0x80000b04]:sd a1, 792(ra)<br>    |
| 122|[0x800035d8]<br>0xFFFFFFDFFFFFF800|- rs1_val == -137438953473<br>                                                                                                                                          |[0x80000b14]:xori a1, a0, 2047<br> [0x80000b18]:sd a1, 800(ra)<br>    |
| 123|[0x800035e0]<br>0xFFFFFFBFFFFFFEFF|- rs1_val == -274877906945<br>                                                                                                                                          |[0x80000b28]:xori a1, a0, 256<br> [0x80000b2c]:sd a1, 808(ra)<br>     |
| 124|[0x800035e8]<br>0xFFFFFEFFFFFFFFFC|- rs1_val == -1099511627777<br>                                                                                                                                         |[0x80000b3c]:xori a1, a0, 3<br> [0x80000b40]:sd a1, 816(ra)<br>       |
| 125|[0x800035f0]<br>0x0000040000000001|- rs1_val == -4398046511105<br>                                                                                                                                         |[0x80000b50]:xori a1, a0, 4094<br> [0x80000b54]:sd a1, 824(ra)<br>    |
| 126|[0x800035f8]<br>0x00000800000003FF|- rs1_val == -8796093022209<br>                                                                                                                                         |[0x80000b64]:xori a1, a0, 3072<br> [0x80000b68]:sd a1, 832(ra)<br>    |
| 127|[0x80003600]<br>0x0000100000000003|- rs1_val == -17592186044417<br>                                                                                                                                        |[0x80000b78]:xori a1, a0, 4092<br> [0x80000b7c]:sd a1, 840(ra)<br>    |
| 128|[0x80003608]<br>0xFFFFDFFFFFFFFDFF|- rs1_val == -35184372088833<br>                                                                                                                                        |[0x80000b8c]:xori a1, a0, 512<br> [0x80000b90]:sd a1, 848(ra)<br>     |
| 129|[0x80003610]<br>0x0000400000000002|- rs1_val == -70368744177665<br>                                                                                                                                        |[0x80000ba0]:xori a1, a0, 4093<br> [0x80000ba4]:sd a1, 856(ra)<br>    |
| 130|[0x80003618]<br>0xFFFF7FFFFFFFF800|- rs1_val == -140737488355329<br>                                                                                                                                       |[0x80000bb4]:xori a1, a0, 2047<br> [0x80000bb8]:sd a1, 864(ra)<br>    |
| 131|[0x80003620]<br>0x0001000000000080|- rs1_val == -281474976710657<br>                                                                                                                                       |[0x80000bc8]:xori a1, a0, 3967<br> [0x80000bcc]:sd a1, 872(ra)<br>    |
| 132|[0x80003628]<br>0xFFFDFFFFFFFFFFF7|- rs1_val == -562949953421313<br>                                                                                                                                       |[0x80000bdc]:xori a1, a0, 8<br> [0x80000be0]:sd a1, 880(ra)<br>       |
| 133|[0x80003630]<br>0xFFFBFFFFFFFFFFF7|- rs1_val == -1125899906842625<br>                                                                                                                                      |[0x80000bf0]:xori a1, a0, 8<br> [0x80000bf4]:sd a1, 888(ra)<br>       |
| 134|[0x80003638]<br>0x0000000000000048|- rs1_val == 64<br>                                                                                                                                                     |[0x80000bfc]:xori a1, a0, 8<br> [0x80000c00]:sd a1, 896(ra)<br>       |