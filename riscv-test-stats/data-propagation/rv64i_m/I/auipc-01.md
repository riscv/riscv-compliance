
# Data Propagation Report

STAT1 : Number of unique coverpoint hits that have updated the signature

STAT2 : Number of covepoints hits which are not unique but still update the signature

STAT3 : Number of instructions that contribute to a unique coverpoint but do not update signature

STAT4 : Number of Multiple signature updates for the same coverpoint

STAT5 : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 64      |
| TEST_REGION               | [('0x80000390', '0x80000730')]      |
| SIG_REGION                | [('0x80003204', '0x80003378', '46 dwords')]      |
| COV_LABELS                | auipc      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/riscof/riscof_work/auipc-01.S/auipc-01.S    |
| Total Number of coverpoints| 78     |
| Total Signature Updates   | 45      |
| Total Coverpoints Covered | 78      |
| STAT1                     | 44      |
| STAT2                     | 1      |
| STAT3                     | 47     |
| STAT4                     | 0     |
| STAT5                     | 0     |

## Details for STAT2:

```
Op without unique coverpoint updates Signature
 -- Code Sequence:
      [0x80000718]:auipc a0, 2048
      [0x8000071c]:sub a0, a0, sp
      [0x80000720]:sd a0, 120(ra)
 -- Signature Address: 0x80003370 Data: 0x0000000000800008
 -- Redundant Coverpoints hit by the op
      - opcode : auipc
      - rd : x10
      - imm_val > 0
      - imm_val == 2048






```

## Details of STAT3

```
[0x80000390]:auipc t2, 3
[0x80000394]:addi t2, t2, 3712

[0x80000398]:auipc s1, 0
[0x8000039c]:addi s1, s1, 0

[0x800003ac]:auipc s1, 0
[0x800003b0]:addi s1, s1, 0

[0x800003c0]:auipc s1, 0
[0x800003c4]:addi s1, s1, 0

[0x800003d4]:auipc s1, 0
[0x800003d8]:addi s1, s1, 0

[0x800003e8]:auipc s1, 0
[0x800003ec]:addi s1, s1, 0

[0x800003fc]:auipc s1, 0
[0x80000400]:addi s1, s1, 0

[0x80000410]:auipc s1, 0
[0x80000414]:addi s1, s1, 0

[0x80000424]:auipc s1, 0
[0x80000428]:addi s1, s1, 0

[0x80000438]:auipc s1, 0
[0x8000043c]:addi s1, s1, 0

[0x8000044c]:auipc s1, 0
[0x80000450]:addi s1, s1, 0

[0x80000460]:auipc s1, 0
[0x80000464]:addi s1, s1, 0

[0x80000474]:auipc s1, 0
[0x80000478]:addi s1, s1, 0

[0x80000488]:auipc s1, 0
[0x8000048c]:addi s1, s1, 0

[0x8000049c]:auipc s1, 0
[0x800004a0]:addi s1, s1, 0

[0x800004b0]:auipc s1, 0
[0x800004b4]:addi s1, s1, 0

[0x800004c4]:auipc s1, 0
[0x800004c8]:addi s1, s1, 0

[0x800004d8]:auipc s1, 0
[0x800004dc]:addi s1, s1, 0

[0x800004ec]:auipc s1, 0
[0x800004f0]:addi s1, s1, 0

[0x80000500]:auipc s1, 0
[0x80000504]:addi s1, s1, 0

[0x80000514]:auipc s1, 0
[0x80000518]:addi s1, s1, 0

[0x80000528]:auipc s1, 0
[0x8000052c]:addi s1, s1, 0

[0x8000053c]:auipc s1, 0
[0x80000540]:addi s1, s1, 0

[0x80000550]:auipc s1, 0
[0x80000554]:addi s1, s1, 0

[0x80000564]:auipc s1, 0
[0x80000568]:addi s1, s1, 0

[0x80000578]:auipc s1, 0
[0x8000057c]:addi s1, s1, 0

[0x8000058c]:auipc s1, 0
[0x80000590]:addi s1, s1, 0

[0x800005a0]:auipc s1, 0
[0x800005a4]:addi s1, s1, 0

[0x800005b4]:auipc s1, 0
[0x800005b8]:addi s1, s1, 0

[0x800005c8]:auipc sp, 0
[0x800005cc]:addi sp, sp, 0

[0x800005dc]:auipc ra, 3
[0x800005e0]:addi ra, ra, 3356

[0x800005e4]:auipc sp, 0
[0x800005e8]:addi sp, sp, 0

[0x800005f8]:auipc sp, 0
[0x800005fc]:addi sp, sp, 0

[0x8000060c]:auipc sp, 0
[0x80000610]:addi sp, sp, 0

[0x80000620]:auipc sp, 0
[0x80000624]:addi sp, sp, 0

[0x80000634]:auipc sp, 0
[0x80000638]:addi sp, sp, 0

[0x80000648]:auipc sp, 0
[0x8000064c]:addi sp, sp, 0

[0x8000065c]:auipc sp, 0
[0x80000660]:addi sp, sp, 0

[0x80000670]:auipc sp, 0
[0x80000674]:addi sp, sp, 0

[0x80000684]:auipc sp, 0
[0x80000688]:addi sp, sp, 0

[0x80000698]:auipc sp, 0
[0x8000069c]:addi sp, sp, 0

[0x800006ac]:auipc sp, 0
[0x800006b0]:addi sp, sp, 0

[0x800006c0]:auipc sp, 0
[0x800006c4]:addi sp, sp, 0

[0x800006d4]:auipc sp, 0
[0x800006d8]:addi sp, sp, 0

[0x800006e8]:auipc sp, 0
[0x800006ec]:addi sp, sp, 0

[0x800006fc]:auipc sp, 0
[0x80000700]:addi sp, sp, 0

[0x80000710]:auipc sp, 0
[0x80000714]:addi sp, sp, 0



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

|s.no|            signature             |                coverpoints                 |                                                  code                                                  |
|---:|----------------------------------|--------------------------------------------|--------------------------------------------------------------------------------------------------------|
|   1|[0x80003210]<br>0x0000000000000008|- rd : x13<br>                              |[0x800003a0]:auipc a3, 0<br> [0x800003a4]:sub a3, a3, s1<br> [0x800003a8]:sd a3, 0(t2)<br>              |
|   2|[0x80003218]<br>0xFFFFFFFFF7FFF008|- rd : x5<br> - imm_val == 1015807<br>      |[0x800003b4]:auipc t0, 1015807<br> [0x800003b8]:sub t0, t0, s1<br> [0x800003bc]:sd t0, 8(t2)<br>        |
|   3|[0x80003220]<br>0xFFFFFFFFFFFFF008|- rd : x10<br> - imm_val == ((2**20)-1)<br> |[0x800003c8]:auipc a0, 1048575<br> [0x800003cc]:sub a0, a0, s1<br> [0x800003d0]:sd a0, 16(t2)<br>       |
|   4|[0x80003228]<br>0x0000000000001008|- rd : x20<br> - imm_val == 1<br>           |[0x800003dc]:auipc s4, 1<br> [0x800003e0]:sub s4, s4, s1<br> [0x800003e4]:sd s4, 24(t2)<br>             |
|   5|[0x80003230]<br>0x0000000000002008|- rd : x16<br> - imm_val == 2<br>           |[0x800003f0]:auipc a6, 2<br> [0x800003f4]:sub a6, a6, s1<br> [0x800003f8]:sd a6, 32(t2)<br>             |
|   6|[0x80003238]<br>0x0000000000004008|- rd : x29<br> - imm_val == 4<br>           |[0x80000404]:auipc t4, 4<br> [0x80000408]:sub t4, t4, s1<br> [0x8000040c]:sd t4, 40(t2)<br>             |
|   7|[0x80003240]<br>0x0000000000008008|- rd : x11<br> - imm_val == 8<br>           |[0x80000418]:auipc a1, 8<br> [0x8000041c]:sub a1, a1, s1<br> [0x80000420]:sd a1, 48(t2)<br>             |
|   8|[0x80003248]<br>0x0000000000010008|- rd : x14<br> - imm_val == 16<br>          |[0x8000042c]:auipc a4, 16<br> [0x80000430]:sub a4, a4, s1<br> [0x80000434]:sd a4, 56(t2)<br>            |
|   9|[0x80003250]<br>0x0000000000020008|- rd : x17<br> - imm_val == 32<br>          |[0x80000440]:auipc a7, 32<br> [0x80000444]:sub a7, a7, s1<br> [0x80000448]:sd a7, 64(t2)<br>            |
|  10|[0x80003258]<br>0x0000000000040008|- rd : x28<br> - imm_val == 64<br>          |[0x80000454]:auipc t3, 64<br> [0x80000458]:sub t3, t3, s1<br> [0x8000045c]:sd t3, 72(t2)<br>            |
|  11|[0x80003260]<br>0x0000000000080008|- rd : x27<br> - imm_val == 128<br>         |[0x80000468]:auipc s11, 128<br> [0x8000046c]:sub s11, s11, s1<br> [0x80000470]:sd s11, 80(t2)<br>       |
|  12|[0x80003268]<br>0x0000000000100008|- rd : x22<br> - imm_val == 256<br>         |[0x8000047c]:auipc s6, 256<br> [0x80000480]:sub s6, s6, s1<br> [0x80000484]:sd s6, 88(t2)<br>           |
|  13|[0x80003270]<br>0x0000000000200008|- rd : x6<br> - imm_val == 512<br>          |[0x80000490]:auipc t1, 512<br> [0x80000494]:sub t1, t1, s1<br> [0x80000498]:sd t1, 96(t2)<br>           |
|  14|[0x80003278]<br>0x0000000000400008|- rd : x12<br> - imm_val == 1024<br>        |[0x800004a4]:auipc a2, 1024<br> [0x800004a8]:sub a2, a2, s1<br> [0x800004ac]:sd a2, 104(t2)<br>         |
|  15|[0x80003280]<br>0x0000000000000000|- rd : x0<br> - imm_val == 2048<br>         |[0x800004b8]:auipc zero, 2048<br> [0x800004bc]:sub zero, zero, s1<br> [0x800004c0]:sd zero, 112(t2)<br> |
|  16|[0x80003288]<br>0x0000000001000008|- rd : x19<br> - imm_val == 4096<br>        |[0x800004cc]:auipc s3, 4096<br> [0x800004d0]:sub s3, s3, s1<br> [0x800004d4]:sd s3, 120(t2)<br>         |
|  17|[0x80003290]<br>0x0000000002000008|- rd : x3<br> - imm_val == 8192<br>         |[0x800004e0]:auipc gp, 8192<br> [0x800004e4]:sub gp, gp, s1<br> [0x800004e8]:sd gp, 128(t2)<br>         |
|  18|[0x80003298]<br>0x0000000004000008|- rd : x1<br> - imm_val == 16384<br>        |[0x800004f4]:auipc ra, 16384<br> [0x800004f8]:sub ra, ra, s1<br> [0x800004fc]:sd ra, 136(t2)<br>        |
|  19|[0x800032a0]<br>0x0000000008000008|- rd : x15<br> - imm_val == 32768<br>       |[0x80000508]:auipc a5, 32768<br> [0x8000050c]:sub a5, a5, s1<br> [0x80000510]:sd a5, 144(t2)<br>        |
|  20|[0x800032a8]<br>0x0000000010000008|- rd : x24<br> - imm_val == 65536<br>       |[0x8000051c]:auipc s8, 65536<br> [0x80000520]:sub s8, s8, s1<br> [0x80000524]:sd s8, 152(t2)<br>        |
|  21|[0x800032b0]<br>0x0000000020000008|- rd : x30<br> - imm_val == 131072<br>      |[0x80000530]:auipc t5, 131072<br> [0x80000534]:sub t5, t5, s1<br> [0x80000538]:sd t5, 160(t2)<br>       |
|  22|[0x800032b8]<br>0x0000000040000008|- rd : x25<br> - imm_val == 262144<br>      |[0x80000544]:auipc s9, 262144<br> [0x80000548]:sub s9, s9, s1<br> [0x8000054c]:sd s9, 168(t2)<br>       |
|  23|[0x800032c0]<br>0xFFFFFFFF80000008|- rd : x8<br> - imm_val == 524288<br>       |[0x80000558]:auipc fp, 524288<br> [0x8000055c]:sub fp, fp, s1<br> [0x80000560]:sd fp, 176(t2)<br>       |
|  24|[0x800032c8]<br>0xFFFFFFFFFFFFE008|- rd : x4<br> - imm_val == 1048574<br>      |[0x8000056c]:auipc tp, 1048574<br> [0x80000570]:sub tp, tp, s1<br> [0x80000574]:sd tp, 184(t2)<br>      |
|  25|[0x800032d0]<br>0xFFFFFFFFFFFFD008|- rd : x21<br> - imm_val == 1048573<br>     |[0x80000580]:auipc s5, 1048573<br> [0x80000584]:sub s5, s5, s1<br> [0x80000588]:sd s5, 192(t2)<br>      |
|  26|[0x800032d8]<br>0xFFFFFFFFFFFFB008|- rd : x31<br> - imm_val == 1048571<br>     |[0x80000594]:auipc t6, 1048571<br> [0x80000598]:sub t6, t6, s1<br> [0x8000059c]:sd t6, 200(t2)<br>      |
|  27|[0x800032e0]<br>0xFFFFFFFFFFFF7008|- rd : x2<br> - imm_val == 1048567<br>      |[0x800005a8]:auipc sp, 1048567<br> [0x800005ac]:sub sp, sp, s1<br> [0x800005b0]:sd sp, 208(t2)<br>      |
|  28|[0x800032e8]<br>0xFFFFFFFFFFFEF008|- rd : x18<br> - imm_val == 1048559<br>     |[0x800005bc]:auipc s2, 1048559<br> [0x800005c0]:sub s2, s2, s1<br> [0x800005c4]:sd s2, 216(t2)<br>      |
|  29|[0x800032f0]<br>0xFFFFFFFFFFFDF008|- rd : x23<br> - imm_val == 1048543<br>     |[0x800005d0]:auipc s7, 1048543<br> [0x800005d4]:sub s7, s7, sp<br> [0x800005d8]:sd s7, 224(t2)<br>      |
|  30|[0x800032f8]<br>0xFFFFFFFFFFDFF008|- imm_val == 1048063<br>                    |[0x800005ec]:auipc t2, 1048063<br> [0x800005f0]:sub t2, t2, sp<br> [0x800005f4]:sd t2, 0(ra)<br>        |
|  31|[0x80003300]<br>0xFFFFFFFFFFBFF008|- rd : x26<br> - imm_val == 1047551<br>     |[0x80000600]:auipc s10, 1047551<br> [0x80000604]:sub s10, s10, sp<br> [0x80000608]:sd s10, 8(ra)<br>    |
|  32|[0x80003308]<br>0xFFFFFFFFFF7FF008|- imm_val == 1046527<br>                    |[0x80000614]:auipc s1, 1046527<br> [0x80000618]:sub s1, s1, sp<br> [0x8000061c]:sd s1, 16(ra)<br>       |
|  33|[0x80003310]<br>0xFFFFFFFFFEFFF008|- imm_val == 1044479<br>                    |[0x80000628]:auipc a0, 1044479<br> [0x8000062c]:sub a0, a0, sp<br> [0x80000630]:sd a0, 24(ra)<br>       |
|  34|[0x80003318]<br>0xFFFFFFFFFDFFF008|- imm_val == 1040383<br>                    |[0x8000063c]:auipc a0, 1040383<br> [0x80000640]:sub a0, a0, sp<br> [0x80000644]:sd a0, 32(ra)<br>       |
|  35|[0x80003320]<br>0xFFFFFFFFFBFFF008|- imm_val == 1032191<br>                    |[0x80000650]:auipc a0, 1032191<br> [0x80000654]:sub a0, a0, sp<br> [0x80000658]:sd a0, 40(ra)<br>       |
|  36|[0x80003328]<br>0xFFFFFFFFEFFFF008|- imm_val == 983039<br>                     |[0x80000664]:auipc a0, 983039<br> [0x80000668]:sub a0, a0, sp<br> [0x8000066c]:sd a0, 48(ra)<br>        |
|  37|[0x80003330]<br>0xFFFFFFFFDFFFF008|- imm_val == 917503<br>                     |[0x80000678]:auipc a0, 917503<br> [0x8000067c]:sub a0, a0, sp<br> [0x80000680]:sd a0, 56(ra)<br>        |
|  38|[0x80003338]<br>0xFFFFFFFFBFFFF008|- imm_val == 786431<br>                     |[0x8000068c]:auipc a0, 786431<br> [0x80000690]:sub a0, a0, sp<br> [0x80000694]:sd a0, 64(ra)<br>        |
|  39|[0x80003340]<br>0x000000007FFFF008|- imm_val == 524287<br>                     |[0x800006a0]:auipc a0, 524287<br> [0x800006a4]:sub a0, a0, sp<br> [0x800006a8]:sd a0, 72(ra)<br>        |
|  40|[0x80003348]<br>0x0000000055555008|- imm_val == 349525<br>                     |[0x800006b4]:auipc a0, 349525<br> [0x800006b8]:sub a0, a0, sp<br> [0x800006bc]:sd a0, 80(ra)<br>        |
|  41|[0x80003350]<br>0xFFFFFFFFAAAAA008|- imm_val == 699050<br>                     |[0x800006c8]:auipc a0, 699050<br> [0x800006cc]:sub a0, a0, sp<br> [0x800006d0]:sd a0, 88(ra)<br>        |
|  42|[0x80003358]<br>0xFFFFFFFFFFFBF008|- imm_val == 1048511<br>                    |[0x800006dc]:auipc a0, 1048511<br> [0x800006e0]:sub a0, a0, sp<br> [0x800006e4]:sd a0, 96(ra)<br>       |
|  43|[0x80003360]<br>0xFFFFFFFFFFF7F008|- imm_val == 1048447<br>                    |[0x800006f0]:auipc a0, 1048447<br> [0x800006f4]:sub a0, a0, sp<br> [0x800006f8]:sd a0, 104(ra)<br>      |
|  44|[0x80003368]<br>0xFFFFFFFFFFEFF008|- imm_val == 1048319<br>                    |[0x80000704]:auipc a0, 1048319<br> [0x80000708]:sub a0, a0, sp<br> [0x8000070c]:sd a0, 112(ra)<br>      |