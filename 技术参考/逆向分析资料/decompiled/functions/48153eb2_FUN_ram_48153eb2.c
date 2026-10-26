/* Firmware entry: 0x48153eb2 */

undefined4 FUN_ram_48153eb2(int *param_1,char *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_60;
  undefined4 uStack_44;
  uint uStack_40;
  int iStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *param_1;
  uVar6 = *(undefined4 *)(iVar7 + 0x12a0);
  uStack_40 = *(uint *)(iVar7 + 0x1294);
  uVar2 = *(undefined4 *)(iVar7 + 0x129c);
  uVar10 = *(uint *)(iVar7 + 0x1290);
  iStack_3c = *(int *)(iVar7 + 0x1298);
  bVar1 = false;
  uVar11 = uVar10 & 1;
  if (((*(byte *)(iVar7 + 0x1290) & 1) != 0) && (9 < param_3)) {
    uVar5 = (uint)(byte)param_2[1];
    cVar4 = *param_2;
    if ((uVar5 != 10) || (cVar4 != '\x01')) goto LAB_ram_48153f20;
    uStack_60 = *(uint *)(param_2 + 2);
    iVar3 = *(int *)(param_2 + 6);
    bVar1 = true;
    param_3 = param_3 + -10;
    param_2 = param_2 + 10;
    if (param_4 == 0) {
      if ((*(byte *)(iVar7 + 0x1290) & 4) != 0) {
        while ((uStack_60 == 0 && iVar3 == 0 ||
               ((uStack_60 == *(uint *)(iVar7 + 0x129c) && (*(int *)(iVar7 + 0x12a0) == iVar3))))) {
          uStack_60 = FUN_ram_48155c22();
          iVar3 = FUN_ram_48155c22();
          uStack_60 = uStack_60 & 0xfffffffd;
        }
        uStack_40 = uStack_60;
        iStack_3c = iVar3;
      }
    }
    else {
      uVar11 = 0;
    }
  }
  bVar9 = (byte)uVar11;
  if (param_3 < 2) {
LAB_ram_48153fd8:
    if (param_3 != 0) {
      return 0;
    }
    if ((char)param_1[4] != '\t') {
      uStack_44._0_1_ = (byte)uVar10;
      uStack_44 = CONCAT31((int3)(uVar10 >> 8),(byte)uStack_44 & 0xfe | bVar9);
      *(undefined4 *)(iVar7 + 0x1290) = uStack_44;
      *(uint *)(iVar7 + 0x1294) = uStack_40;
      *(int *)(iVar7 + 0x1298) = iStack_3c;
      *(undefined4 *)(iVar7 + 0x129c) = uVar2;
      *(undefined4 *)(iVar7 + 0x12a0) = uVar6;
    }
    return 1;
  }
  cVar4 = *param_2;
  uVar5 = (uint)(byte)param_2[1];
LAB_ram_48153f20:
  uStack_60 = uStack_40;
  if (1 < uVar5) {
    while( true ) {
      bVar9 = (byte)uVar11;
      param_3 = param_3 - uVar5;
      if (param_3 < 0) break;
      pcVar8 = param_2 + uVar5;
      if (cVar4 == '\x01') {
        if (bVar1 || (*(byte *)(iVar7 + 0x1290) & 1) != 0) {
          return 0;
        }
        if (uVar5 != 10) {
          return 0;
        }
        iVar3 = *(int *)(param_2 + 6);
        uVar11 = *(uint *)(param_2 + 2);
        if ((*(byte *)(iVar7 + 0x1290) & 4) != 0) {
          while ((uStack_60 = uVar11, uStack_60 == 0 && iVar3 == 0 ||
                 ((iStack_3c = iVar3, uStack_60 == *(uint *)(iVar7 + 0x129c) &&
                  (*(int *)(iVar7 + 0x12a0) == iVar3))))) {
            uStack_60 = FUN_ram_48155c22();
            iVar3 = FUN_ram_48155c22();
            uStack_60 = uStack_60 & 0xfffffffd;
            uVar11 = uStack_60;
          }
        }
        uVar11 = 1;
        bVar9 = 1;
        bVar1 = true;
      }
      uStack_40 = uStack_60;
      if (param_3 < 2) goto LAB_ram_48153fd8;
      uVar5 = (uint)(byte)pcVar8[1];
      cVar4 = *pcVar8;
      param_2 = pcVar8;
      if (uVar5 < 2) {
        return 0;
      }
    }
  }
  return 0;
}


