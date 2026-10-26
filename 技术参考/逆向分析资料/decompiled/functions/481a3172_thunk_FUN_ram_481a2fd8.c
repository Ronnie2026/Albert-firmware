/* Firmware entry: 0x481a3172 */

/* WARNING: Removing unreachable block (ram,0x481a30cc) */

undefined8
thunk_FUN_ram_481a2fd8(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  ulonglong uVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar4 = param_2;
  do {
    pbVar3 = pbVar4;
    uVar5 = (uint)*pbVar3;
    pbVar4 = pbVar3 + 1;
  } while (((&DAT_ram_4823af31)[uVar5] & 8) != 0);
  if (uVar5 == 0x2d) {
    uVar5 = (uint)*pbVar4;
    pbVar4 = pbVar3 + 2;
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (uVar5 == 0x2b) {
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar3 + 2;
      bVar2 = false;
    }
  }
  if ((param_4 & 0xffffffef) == 0) {
    if ((uVar5 == 0x30) && ((*pbVar4 & 0xdf) == 0x58)) {
      uVar5 = (uint)pbVar4[1];
      pbVar4 = pbVar4 + 2;
    }
    else if (param_4 == 0) {
      param_4 = 10;
      if (uVar5 == 0x30) {
        param_4 = 8;
      }
      goto LAB_ram_481a3072;
    }
    param_4 = 0x10;
  }
LAB_ram_481a3072:
  iVar11 = (int)param_4 >> 0x1f;
  uVar12 = __udivdi3(0xffffffff,0xffffffff,param_4,iVar11);
  iVar6 = __umoddi3(0xffffffff,0xffffffff,param_4,iVar11);
  iVar10 = 0;
  uVar7 = 0;
  uVar8 = 0;
  do {
    uVar9 = uVar5 - 0x30;
    if (9 < uVar9) {
      if (uVar5 - 0x41 < 0x1a) {
        uVar9 = uVar5 - 0x37;
      }
      else {
        if (0x19 < uVar5 - 0x61) break;
        uVar9 = uVar5 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar9) break;
    if (iVar10 != -1) {
      if (uVar12 < CONCAT44(uVar8,uVar7)) {
        iVar10 = -1;
      }
      else if ((uVar12 != CONCAT44(uVar8,uVar7)) || (iVar10 = -1, (int)uVar9 <= iVar6)) {
        iVar10 = iVar11 * uVar7;
        uVar1 = (ulonglong)uVar7;
        uVar7 = param_4 * uVar7 + uVar9;
        uVar8 = (uint)(uVar7 < uVar9) +
                ((int)uVar9 >> 0x1f) + iVar10 + uVar8 * param_4 + (int)(param_4 * uVar1 >> 0x20);
        iVar10 = 1;
      }
    }
    uVar5 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  } while( true );
  if (iVar10 == -1) {
    *param_1 = 0x22;
    uVar7 = 0xffffffff;
    uVar8 = uVar7;
    if (param_3 == (undefined4 *)0x0) goto LAB_ram_481a3136;
LAB_ram_481a3168:
    param_2 = pbVar4 + -1;
  }
  else {
    if (bVar2) {
      uVar8 = -(uint)(uVar7 != 0) - uVar8;
      uVar7 = -uVar7;
    }
    if (param_3 == (undefined4 *)0x0) goto LAB_ram_481a3136;
    if (iVar10 != 0) goto LAB_ram_481a3168;
  }
  *param_3 = param_2;
LAB_ram_481a3136:
  return CONCAT44(uVar8,uVar7);
}


