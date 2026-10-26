/* Firmware entry: 0x4813b660 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4813b660(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar8 = 0;
  if (DAT_ram_4ff6cdf4 != '\x06') {
    iVar8 = FUN_ram_48147794(_DAT_ram_4ff6cde0,DAT_ram_4ff6cdb4);
  }
  pbVar7 = *(byte **)(param_1 + 4);
  if (*pbVar7 >> 4 == 6) {
    bVar1 = pbVar7[6];
  }
  else {
    bVar1 = pbVar7[9];
  }
  if (DAT_ram_4ff6e1b8 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    piVar6 = DAT_ram_4ff6e1b8;
    piVar3 = (int *)0x0;
    do {
      piVar2 = piVar6;
      if ((*(byte *)(piVar2 + 0xe) != bVar1) ||
         (((char)piVar2[0xc] != '\0' &&
          ((char)piVar2[0xc] != (char)(*(char *)(DAT_ram_4ff6cdb8 + 0xea) + '\x01')))))
      goto LAB_ram_4813b6ca;
      if ((char)piVar2[5] == '.') goto LAB_ram_4813b70a;
      if (DAT_ram_4ff6cdf4 == (char)piVar2[5]) {
        iVar5 = *piVar2;
        if (iVar8 != 0) {
          if (iVar5 == 0) goto LAB_ram_4813b70a;
          goto LAB_ram_4813b6ca;
        }
        if (DAT_ram_4ff6cdf4 == '\x06') {
          if (((((iVar5 == 0) && (piVar2[1] == 0)) && (piVar2[2] == 0)) && (piVar2[3] == 0)) ||
             (((_DAT_ram_4ff6cde0 == iVar5 && (piVar2[1] == DAT_ram_4ff6cde4)) &&
              ((piVar2[2] == DAT_ram_4ff6cde8 &&
               ((piVar2[3] == DAT_ram_4ff6cdec && ((char)piVar2[4] == DAT_ram_4ff6cdf0))))))))
          goto LAB_ram_4813b70a;
          goto LAB_ram_4813b6ca;
        }
        if ((iVar5 != 0) && (_DAT_ram_4ff6cde0 != iVar5)) goto LAB_ram_4813b6ca;
LAB_ram_4813b70a:
        if ((*(byte *)((int)piVar2 + 0x39) & 1) == 0) goto LAB_ram_4813b72e;
        if (DAT_ram_4ff6cddc != (char)piVar2[0xb]) goto LAB_ram_4813b6ca;
        if (DAT_ram_4ff6cddc == '\x06') {
          if ((((DAT_ram_4ff6cdc8 == piVar2[6]) && (piVar2[7] == DAT_ram_4ff6cdcc)) &&
              (piVar2[8] == DAT_ram_4ff6cdd0)) &&
             ((piVar2[9] == DAT_ram_4ff6cdd4 && ((char)piVar2[10] == DAT_ram_4ff6cdd8))))
          goto LAB_ram_4813b72e;
          goto LAB_ram_4813b6ca;
        }
        if (DAT_ram_4ff6cdc8 != piVar2[6]) goto LAB_ram_4813b6ca;
LAB_ram_4813b72e:
        if ((code *)piVar2[0xf] == (code *)0x0) goto LAB_ram_4813b6ca;
        iVar5 = (*(code *)piVar2[0xf])(piVar2[0x10],piVar2,param_1,&DAT_ram_4ff6cdc8);
        piVar6 = DAT_ram_4ff6e1b8;
        if (iVar5 != 0) {
          if (piVar3 != (int *)0x0) {
            DAT_ram_4ff6e1b8 = piVar2;
            piVar3[0xd] = piVar2[0xd];
            piVar2[0xd] = (int)piVar6;
          }
          return 1;
        }
        if (*(byte **)(param_1 + 4) != pbVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/raw.c",0xc0,"raw_input",
                           "raw pcb recv callback altered pbuf payload pointer without eating packet"
                          );
        }
        piVar6 = (int *)piVar2[0xd];
        uVar4 = 2;
        pbVar7 = *(byte **)(param_1 + 4);
      }
      else {
LAB_ram_4813b6ca:
        piVar6 = (int *)piVar2[0xd];
      }
      piVar3 = piVar2;
    } while (piVar6 != (int *)0x0);
  }
  return uVar4;
}


