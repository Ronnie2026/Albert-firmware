/* Firmware entry: 0x48197260 */

uint FUN_ram_48197260(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((0x24 < param_4) || (pbVar6 = param_2, param_4 == 1)) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x16;
    return 0;
  }
  do {
    pbVar5 = pbVar6;
    uVar4 = (uint)*pbVar5;
    pbVar6 = pbVar5 + 1;
  } while (((&DAT_ram_4823af31)[uVar4] & 8) != 0);
  if (uVar4 == 0x2d) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = pbVar5 + 2;
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    if (uVar4 == 0x2b) {
      uVar4 = (uint)*pbVar6;
      pbVar6 = pbVar5 + 2;
      iVar9 = 0;
    }
  }
  if ((param_4 & 0xffffffef) == 0) {
    if ((uVar4 == 0x30) && ((*pbVar6 & 0xdf) == 0x58)) {
      uVar4 = (uint)pbVar6[1];
      pbVar6 = pbVar6 + 2;
    }
    else if (param_4 == 0) {
      param_4 = 10;
      if (uVar4 == 0x30) {
        param_4 = 8;
      }
      goto LAB_ram_48197304;
    }
    param_4 = 0x10;
  }
LAB_ram_48197304:
  uVar8 = iVar9 + 0x7fffffff;
  iVar1 = 0;
  uVar3 = 0;
  do {
    uVar7 = uVar4 - 0x30;
    if (9 < uVar7) {
      if (uVar4 - 0x41 < 0x1a) {
        uVar7 = uVar4 - 0x37;
      }
      else {
        if (0x19 < uVar4 - 0x61) break;
        uVar7 = uVar4 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar7) break;
    if (((iVar1 != -1) && (iVar1 = -1, uVar3 <= uVar8 / param_4)) &&
       ((uVar8 / param_4 != uVar3 || ((int)uVar7 <= (int)(uVar8 % param_4))))) {
      iVar1 = 1;
      uVar3 = param_4 * uVar3 + uVar7;
    }
    uVar4 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
  } while( true );
  if (iVar1 == -1) {
    *param_1 = 0x22;
    uVar3 = uVar8;
    if (param_3 == (undefined4 *)0x0) {
      return uVar8;
    }
  }
  else {
    if (iVar9 != 0) {
      uVar3 = -uVar3;
    }
    if (param_3 == (undefined4 *)0x0) {
      return uVar3;
    }
    if (iVar1 == 0) goto LAB_ram_48197390;
  }
  param_2 = pbVar6 + -1;
LAB_ram_48197390:
  *param_3 = param_2;
  return uVar3;
}


