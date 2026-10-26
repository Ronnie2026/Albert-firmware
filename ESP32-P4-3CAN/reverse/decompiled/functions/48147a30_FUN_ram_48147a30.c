/* Firmware entry: 0x48147a30 */

undefined4 FUN_ram_48147a30(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  code *pcVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar9 = *(byte **)(param_1 + 4);
  iVar12 = *(ushort *)(param_2 + 0xdc) - 0x14;
  if ((*pbVar9 & 0xf) == 5) {
    if (*(ushort *)(param_1 + 10) < 0x14) {
      uVar8 = 0xfffffffa;
    }
    else {
      uVar5 = FUN_ram_48137fc8(*(undefined2 *)(pbVar9 + 6));
      uVar2 = *(ushort *)(param_1 + 8) - 0x14 & 0xffff;
      uVar13 = uVar5 & 0x1fff;
      if (uVar2 != 0) {
        uVar14 = (int)((iVar12 >> 0x1f & 7U) + iVar12) >> 3;
        uVar15 = (uVar14 & 0x1fff) << 3;
        sVar11 = 0x14;
        do {
          uVar1 = uVar15;
          if (uVar2 < uVar15) {
            uVar1 = uVar2;
          }
          piVar6 = (int *)FUN_ram_4813ad9a(0x36,uVar1,0x280);
          if (piVar6 == (int *)0x0) {
            return 0xffffffff;
          }
          if ((*(short *)((int)piVar6 + 10) != (short)piVar6[2]) || (*piVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/ip4_frag.c",0x335,"ip4_frag",
                             "this needs a pbuf in one piece!");
          }
          sVar3 = FUN_ram_4813b38c(param_1,piVar6[1],uVar1,sVar11);
          sVar11 = sVar3 + sVar11;
          iVar12 = FUN_ram_4813aab0(piVar6,0x14);
          if (iVar12 != 0) {
            FUN_ram_4813ac74(piVar6);
            return 0xffffffff;
          }
          FUN_ram_4ff45158(piVar6[1],pbVar9,0x14);
          iVar12 = piVar6[1];
          uVar7 = uVar13 & 0x1fff;
          if (((int)(*(ushort *)(param_2 + 0xdc) - 0x13) <= (int)uVar2) || ((uVar5 & 0x2000) != 0))
          {
            uVar7 = uVar7 | 0x2000;
          }
          uVar4 = FUN_ram_48137fc8(uVar7);
          *(char *)(iVar12 + 7) = (char)((ushort)uVar4 >> 8);
          *(char *)(iVar12 + 6) = (char)uVar4;
          uVar4 = FUN_ram_48137fc8(uVar1 + 0x14 & 0xffff);
          *(char *)(iVar12 + 2) = (char)uVar4;
          *(char *)(iVar12 + 3) = (char)((ushort)uVar4 >> 8);
          *(undefined1 *)(iVar12 + 10) = 0;
          *(undefined1 *)(iVar12 + 0xb) = 0;
          uVar4 = FUN_ram_48151aa6(iVar12,0x14);
          pcVar10 = *(code **)(param_2 + 0xb4);
          *(char *)(iVar12 + 0xb) = (char)((ushort)uVar4 >> 8);
          *(char *)(iVar12 + 10) = (char)uVar4;
          (*pcVar10)(param_2,piVar6,param_3,pcVar10);
          uVar2 = uVar2 - uVar1 & 0xffff;
          FUN_ram_4813ac74(piVar6);
          uVar13 = uVar13 + (uVar14 & 0xffff) & 0xffff;
        } while (uVar2 != 0);
      }
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0xfffffffa;
  }
  return uVar8;
}


