/* Firmware entry: 0x481a2e2a */

/* WARNING: Removing unreachable block (ram,0x481a2f2c) */

undefined8 FUN_ram_481a2e2a(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar3 = param_2;
  do {
    pbVar2 = pbVar3;
    uVar4 = (uint)*pbVar2;
    pbVar3 = pbVar2 + 1;
  } while (((&DAT_ram_4823af31)[uVar4] & 8) != 0);
  if (uVar4 == 0x2d) {
    uVar4 = (uint)*pbVar3;
    pbVar3 = pbVar2 + 2;
    iVar13 = 1;
  }
  else {
    iVar13 = 0;
    if (uVar4 == 0x2b) {
      uVar4 = (uint)*pbVar3;
      pbVar3 = pbVar2 + 2;
      iVar13 = 0;
    }
  }
  if ((param_4 & 0xffffffef) == 0) {
    if ((uVar4 == 0x30) && ((*pbVar3 & 0xdf) == 0x58)) {
      uVar4 = (uint)pbVar3[1];
      pbVar3 = pbVar3 + 2;
    }
    else if (param_4 == 0) {
      param_4 = 10;
      if (uVar4 == 0x30) {
        param_4 = 8;
      }
      goto LAB_ram_481a2ec6;
    }
    param_4 = 0x10;
  }
LAB_ram_481a2ec6:
  uVar11 = iVar13 - 1;
  iVar10 = iVar13 + 0x7fffffff;
  iVar12 = (int)param_4 >> 0x1f;
  iVar5 = __umoddi3(uVar11,iVar10,param_4,iVar12);
  uVar14 = __udivdi3(uVar11,iVar10,param_4,iVar12);
  iVar9 = 0;
  uVar6 = 0;
  iVar7 = 0;
  do {
    uVar8 = uVar4 - 0x30;
    if (9 < uVar8) {
      if (uVar4 - 0x41 < 0x1a) {
        uVar8 = uVar4 - 0x37;
      }
      else {
        if (0x19 < uVar4 - 0x61) break;
        uVar8 = uVar4 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar8) break;
    if (iVar9 != -1) {
      if (uVar14 < CONCAT44(iVar7,uVar6)) {
        iVar9 = -1;
      }
      else if ((uVar14 != CONCAT44(iVar7,uVar6)) || (iVar9 = -1, (int)uVar8 <= iVar5)) {
        iVar9 = iVar12 * uVar6;
        uVar1 = (ulonglong)uVar6;
        uVar6 = param_4 * uVar6 + uVar8;
        iVar7 = (uint)(uVar6 < uVar8) +
                ((int)uVar8 >> 0x1f) + iVar9 + iVar7 * param_4 + (int)(param_4 * uVar1 >> 0x20);
        iVar9 = 1;
      }
    }
    uVar4 = (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
  } while( true );
  if (iVar9 == -1) {
    *param_1 = 0x22;
    uVar6 = uVar11;
    iVar7 = iVar10;
    if (param_3 == (undefined4 *)0x0) goto LAB_ram_481a2f96;
LAB_ram_481a2fca:
    param_2 = pbVar3 + -1;
  }
  else {
    if (iVar13 != 0) {
      iVar7 = -(uint)(uVar6 != 0) - iVar7;
      uVar6 = -uVar6;
    }
    if (param_3 == (undefined4 *)0x0) goto LAB_ram_481a2f96;
    if (iVar9 != 0) goto LAB_ram_481a2fca;
  }
  *param_3 = param_2;
LAB_ram_481a2f96:
  return CONCAT44(iVar7,uVar6);
}


