/* Firmware entry: 0x4819749c */

uint thunk_FUN_ram_48197398(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar5 = param_2;
  do {
    pbVar4 = pbVar5;
    uVar3 = (uint)*pbVar4;
    pbVar5 = pbVar4 + 1;
  } while (((&DAT_ram_4823af31)[uVar3] & 8) != 0);
  if (uVar3 == 0x2d) {
    uVar3 = (uint)*pbVar5;
    pbVar5 = pbVar4 + 2;
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (uVar3 == 0x2b) {
      uVar3 = (uint)*pbVar5;
      pbVar5 = pbVar4 + 2;
      bVar1 = false;
    }
  }
  if ((param_4 & 0xffffffef) == 0) {
    if ((uVar3 == 0x30) && ((*pbVar5 & 0xdf) == 0x58)) {
      uVar3 = (uint)pbVar5[1];
      pbVar5 = pbVar5 + 2;
    }
    else if (param_4 == 0) {
      param_4 = 10;
      if (uVar3 == 0x30) {
        param_4 = 8;
      }
      goto LAB_ram_48197412;
    }
    param_4 = 0x10;
  }
LAB_ram_48197412:
  iVar7 = 0;
  uVar2 = 0;
  do {
    uVar6 = uVar3 - 0x30;
    if (9 < uVar6) {
      if (uVar3 - 0x41 < 0x1a) {
        uVar6 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) break;
        uVar6 = uVar3 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar6) break;
    if (((iVar7 != -1) && (iVar7 = -1, uVar2 <= 0xffffffff / param_4)) &&
       ((0xffffffff / param_4 != uVar2 || ((int)uVar6 <= (int)(0xffffffffU % param_4))))) {
      iVar7 = 1;
      uVar2 = param_4 * uVar2 + uVar6;
    }
    uVar3 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  } while( true );
  if (iVar7 == -1) {
    *param_1 = 0x22;
    uVar2 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar1) {
      uVar2 = -uVar2;
    }
    if (param_3 == (undefined4 *)0x0) {
      return uVar2;
    }
    if (iVar7 == 0) goto LAB_ram_48197498;
  }
  param_2 = pbVar5 + -1;
LAB_ram_48197498:
  *param_3 = param_2;
  return uVar2;
}


