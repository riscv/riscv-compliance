
# Data Propagation Report

STAT1 : Number of unique coverpoint hits that have updated the signature

STAT2 : Number of covepoints hits which are not unique but still update the signature

STAT3 : Number of instructions that contribute to a unique coverpoint but do not update signature

STAT4 : Number of Multiple signature updates for the same coverpoint

STAT5 : Number of times the signature was overwritten

| Param                     | Value    |
|---------------------------|----------|
| XLEN                      | 64      |
| TEST_REGION               | [('0x8000039c', '0x800003f0')]      |
| SIG_REGION                | [('0x80003204', '0x80003418', '66 dwords')]      |
| COV_LABELS                | misalign-bne      |
| TEST_NAME                 | /scratch/git-repo/incoresemi/riscof/riscof_work/misalign-bne-01.S/misalign-bne-01.S    |
| Total Number of coverpoints| 2     |
| Total Signature Updates   | 1      |
| Total Coverpoints Covered | 2      |
| STAT1                     | 1      |
| STAT2                     | 0      |
| STAT3                     | 0     |
| STAT4                     | 0     |
| STAT5                     | 0     |

## Details for STAT2:

```


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

|s.no|            signature             |                         coverpoints                         |                                                           code                                                            |
|---:|----------------------------------|-------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------|
|   1|[0x80003210]<br>0x0000000000000003|- opcode : bne<br> -  rs1_val!=rs2_val and ea_align == 2<br> |[0x800003cc]:bne a0, a1, 18<br> [0x800003de]:addi sp, sp, 3<br> [0x800003e2]:jal zero, 6<br> [0x800003e8]:sd sp, 0(ra)<br> |