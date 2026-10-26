/* Firmware entry: 0x4800d566 */

int FUN_ram_4800d566(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 1) {
    return 0;
  }
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_1 != '\0') {
      pcVar4 = &DAT_ram_4ff483a1;
      uVar3 = 0;
      do {
        if (*pcVar4 == iVar1) goto LAB_ram_4800d5ac;
        uVar3 = uVar3 + 1;
        pcVar4 = pcVar4 + 3;
      } while (uVar3 != 0x40);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x1c;
    if (iVar1 == param_2) {
      return iVar2;
    }
  } while( true );
LAB_ram_4800d5ac:
  uVar5 = (uint)(byte)pcVar4[1];
  iVar10 = (int)uVar5 >> 5;
  iVar6 = (int)uVar3 >> 5;
  if (param_3 == 0) {
    if (param_4 == 0) {
      if ((param_5 != 0) && (uVar5 < 0x40)) {
        iVar10 = iVar10 << 2;
        uVar9 = 1 << (uVar5 & 0x1f);
LAB_ram_4800d5ec:
        if ((uVar9 & *(uint *)(param_1 + iVar10 + 0x14)) != 0) {
          puVar8 = (uint *)(iVar6 * 4 + param_5);
          iVar2 = iVar2 + 1;
          *puVar8 = *puVar8 | 1 << (uVar3 & 0x1f);
        }
      }
    }
    else if (uVar5 < 0x40) {
      uVar9 = 1 << (uVar5 & 0x1f);
      uVar7 = uVar9 & *(uint *)(param_1 + iVar10 * 4 + 0xc);
joined_r0x4800d664:
      if (uVar7 != 0) {
        puVar8 = (uint *)(iVar6 * 4 + param_4);
        iVar2 = iVar2 + 1;
        *puVar8 = *puVar8 | 1 << (uVar3 & 0x1f);
        goto LAB_ram_4800d682;
      }
      iVar10 = iVar10 * 4;
      if (param_5 != 0) goto LAB_ram_4800d5ec;
    }
  }
  else if (uVar5 < 0x40) {
    uVar9 = 1 << (uVar5 & 0x1f);
    if ((uVar9 & *(uint *)(param_1 + iVar10 * 4 + 4)) == 0) {
      if (param_4 != 0) {
LAB_ram_4800d5da:
        uVar7 = uVar9 & *(uint *)(param_1 + iVar10 * 4 + 0xc);
        goto joined_r0x4800d664;
      }
LAB_ram_4800d682:
      if (param_5 != 0) {
        uVar9 = 1 << (uVar5 & 0x1f);
        iVar10 = iVar10 << 2;
        goto LAB_ram_4800d5ec;
      }
    }
    else {
      puVar8 = (uint *)(iVar6 * 4 + param_3);
      iVar2 = iVar2 + 1;
      *puVar8 = *puVar8 | 1 << (uVar3 & 0x1f);
      if (param_4 != 0) goto LAB_ram_4800d5da;
      if (param_5 != 0) {
        iVar10 = iVar10 << 2;
        uVar9 = 1 << (uVar5 & 0x1f);
        goto LAB_ram_4800d5ec;
      }
    }
  }
  do {
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 3;
    if (uVar3 == 0x40) {
      do {
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x1c;
        if (iVar1 == param_2) {
          return iVar2;
        }
      } while (*param_1 == '\0');
      pcVar4 = &DAT_ram_4ff483a1;
      uVar3 = 0;
    }
  } while (*pcVar4 != iVar1);
  goto LAB_ram_4800d5ac;
}


